const path = require('path'),
    fs = require('fs'),
    folder =  path.normalize(`${__dirname}/../Zegar/Models/`),
    configName = 'Internal',

    convert = (name, pathName) => {
    	const data = fs.readFileSync(path.normalize(`${pathName}/obj/${name.toLowerCase()}.obj`)).toString().split('\n');

    	const vertices = data.filter(line => line.match(/^v /g))
        .map(line => line.replace(/\s+/g,' ').split(' '))
        .map(elem => `${elem[1]}, ${elem[2]}, ${elem[3]}`);

	    const vertex_texture = data.filter(line => line.match(/^vt /g))
	        .map(line => line.replace(/\s+/g,' ').split(' '))
	        .map(elem => `${elem[1]}, ${elem[2]}`);

	    const vertex_normals = data.filter(line => line.match(/^vn /g))
	        .map(line => line.replace(/\s+/g,' ').split(' '))
	        .map(elem => `${elem[1]}, ${elem[2]}, ${elem[3]}`);
	    
	    const faces = data.filter(line => line.match(/^f /g))
	        .map(line => line.replace(/\s+/g,' ').split(' '))
	        .map(line => [line[1],line[2],line[3]])
	        .map(line => line.map(elem => elem.split('/')))
	        .map(line => line.map(coords => 
	            [vertices[coords[0]-1]+', 1.0f', vertex_texture[coords[1]-1], vertex_normals[coords[2]-1]+', 0.0f']
	        ));

	    saveData(name, pathName, faces);
    },
    saveData = (name, pathName, faces) => {
	    const vertex_array = faces.reduce(function(prev, cur) {
       		const v = cur.map(elem => elem[0]).join(',\n');
        	return prev + ',\n' + v;
    	},"").split('\n').filter(cur => cur.length>2).join('\n');

    	const vertex_normals_array = faces.reduce(function(prev, cur) {
        	const v = cur.map(elem => elem[2]).join(',\n');
        	return prev + ',\n' + v;
    	},"").split('\n').filter(cur => cur.length>3).join('\n');

	    const vertex_texture_array = faces.reduce(function(prev, cur) {
        	const v = cur.map(elem => elem[1]).join(',\n');
        	return prev + ',\n' + v;
   		},"").split('\n').filter(cur => cur.length>3).join('\n');


    	let data = `#pragma once
		#include <string>
		#include <sstream>
		namespace ${name}${configName} {
		std::string name = "${name}";
		int vertexCount = ${faces.length*3};
		float vertices[] = { ${vertex_array}};
		float vertexNormals[] = {${vertex_normals_array}};`;

		if (vertex_texture_array.length != 0) {
			data = `${data} ;
			float texCoords[] = {${vertex_texture_array}};`;
		}

		data = `${data}
		}`;
		

		fs.writeFile(path.join(pathName, `${name}${configName}.h`), data, (err) => {
			if (err) {
				console.log(`Couldn't create ${name} file`);
			}
			else {
				console.log(`Ceated ${name} file`);
			}
		});
    };


(function() {
	let modelsFolder = {},
	vertices = '',
	vertex_texture = '',
	vertex_normals = '',
	faces = '',
	num_of_triangles = '';
	fs.readdirSync(folder).forEach((file) => {
		const filePath = path.join(folder, file);
        if (fs.lstatSync(filePath).isDirectory()) {
          modelsFolder[file] = filePath;	
		}
	});
	Object.keys(modelsFolder).forEach((file) => {
		convert(file, modelsFolder[file]);
	})
}());