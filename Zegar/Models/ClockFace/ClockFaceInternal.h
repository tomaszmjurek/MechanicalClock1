#pragma once
		#include <string>
		#include <sstream>
		namespace ClockFaceInternal {
		std::string name = "ClockFace";
		int vertexCount = 372;
		float vertices[] = { 0.000000, -0.000331, -0.854734, 1.0f,
0.000000, 0.000331, -0.854734, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.166750, -0.000331, -0.838310, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.327093, 0.000331, -0.789672, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.327093, 0.000331, -0.789672, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.474865, -0.000331, -0.710685, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.604388, 0.000331, -0.604388, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.604388, 0.000331, -0.604388, 1.0f,
0.710685, 0.000331, -0.474865, 1.0f,
0.710685, -0.000331, -0.474865, 1.0f,
0.710685, 0.000331, -0.474865, 1.0f,
0.789672, 0.000331, -0.327093, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.789672, 0.000331, -0.327093, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.838310, -0.000331, -0.166750, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.854734, 0.000331, -0.000000, 1.0f,
0.854734, -0.000331, -0.000000, 1.0f,
0.854734, 0.000331, -0.000000, 1.0f,
0.838310, 0.000331, 0.166750, 1.0f,
0.838310, -0.000331, 0.166750, 1.0f,
0.838310, 0.000331, 0.166750, 1.0f,
0.789672, 0.000331, 0.327092, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.789672, 0.000331, 0.327092, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
0.710685, -0.000331, 0.474865, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
0.604388, 0.000331, 0.604388, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.604388, 0.000331, 0.604388, 1.0f,
0.474865, 0.000331, 0.710685, 1.0f,
0.474865, -0.000331, 0.710685, 1.0f,
0.474865, 0.000331, 0.710685, 1.0f,
0.327093, 0.000331, 0.789672, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.327093, 0.000331, 0.789672, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.166750, -0.000331, 0.838310, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.000000, 0.000331, 0.854734, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
0.000000, 0.000331, 0.854734, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.166750, -0.000331, 0.838310, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.327092, 0.000331, 0.789672, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.327092, 0.000331, 0.789672, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.474865, -0.000331, 0.710685, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.604388, 0.000331, 0.604388, 1.0f,
-0.604388, -0.000331, 0.604388, 1.0f,
-0.604388, 0.000331, 0.604388, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.710685, -0.000331, 0.474865, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.789672, 0.000331, 0.327092, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
-0.789672, 0.000331, 0.327092, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.838310, -0.000331, 0.166749, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.854734, 0.000331, -0.000001, 1.0f,
-0.854734, -0.000331, -0.000001, 1.0f,
-0.854734, 0.000331, -0.000001, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.838310, -0.000331, -0.166751, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.789671, 0.000331, -0.327093, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.789671, 0.000331, -0.327093, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.710684, -0.000331, -0.474866, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.604388, 0.000331, -0.604389, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.604388, 0.000331, -0.604389, 1.0f,
-0.474864, 0.000331, -0.710686, 1.0f,
-0.474864, -0.000331, -0.710686, 1.0f,
-0.474864, 0.000331, -0.710686, 1.0f,
-0.327091, 0.000331, -0.789672, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
-0.327091, 0.000331, -0.789672, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.166749, -0.000331, -0.838311, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
0.000000, 0.000331, -0.854734, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.000000, -0.000331, -0.854734, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.166750, -0.000331, -0.838310, 1.0f,
0.166750, -0.000331, -0.838310, 1.0f,
0.327093, 0.000331, -0.789672, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.474865, -0.000331, -0.710685, 1.0f,
0.474865, -0.000331, -0.710685, 1.0f,
0.604388, 0.000331, -0.604388, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.710685, 0.000331, -0.474865, 1.0f,
0.710685, -0.000331, -0.474865, 1.0f,
0.710685, -0.000331, -0.474865, 1.0f,
0.789672, 0.000331, -0.327093, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.838310, -0.000331, -0.166750, 1.0f,
0.838310, -0.000331, -0.166750, 1.0f,
0.854734, 0.000331, -0.000000, 1.0f,
0.854734, -0.000331, -0.000000, 1.0f,
0.854734, -0.000331, -0.000000, 1.0f,
0.838310, 0.000331, 0.166750, 1.0f,
0.838310, -0.000331, 0.166750, 1.0f,
0.838310, -0.000331, 0.166750, 1.0f,
0.789672, 0.000331, 0.327092, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
0.710685, -0.000331, 0.474865, 1.0f,
0.710685, -0.000331, 0.474865, 1.0f,
0.604388, 0.000331, 0.604388, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.474865, 0.000331, 0.710685, 1.0f,
0.474865, -0.000331, 0.710685, 1.0f,
0.474865, -0.000331, 0.710685, 1.0f,
0.327093, 0.000331, 0.789672, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.166750, -0.000331, 0.838310, 1.0f,
0.166750, -0.000331, 0.838310, 1.0f,
0.000000, 0.000331, 0.854734, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.166750, -0.000331, 0.838310, 1.0f,
-0.166750, -0.000331, 0.838310, 1.0f,
-0.327092, 0.000331, 0.789672, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.474865, -0.000331, 0.710685, 1.0f,
-0.474865, -0.000331, 0.710685, 1.0f,
-0.604388, 0.000331, 0.604388, 1.0f,
-0.604388, -0.000331, 0.604388, 1.0f,
-0.604388, -0.000331, 0.604388, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.710685, -0.000331, 0.474865, 1.0f,
-0.710685, -0.000331, 0.474865, 1.0f,
-0.789672, 0.000331, 0.327092, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.838310, -0.000331, 0.166749, 1.0f,
-0.838310, -0.000331, 0.166749, 1.0f,
-0.854734, 0.000331, -0.000001, 1.0f,
-0.854734, -0.000331, -0.000001, 1.0f,
-0.854734, -0.000331, -0.000001, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.838310, -0.000331, -0.166751, 1.0f,
-0.838310, -0.000331, -0.166751, 1.0f,
-0.789671, 0.000331, -0.327093, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.710684, -0.000331, -0.474866, 1.0f,
-0.710684, -0.000331, -0.474866, 1.0f,
-0.604388, 0.000331, -0.604389, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.474864, 0.000331, -0.710686, 1.0f,
-0.474864, -0.000331, -0.710686, 1.0f,
-0.474864, -0.000331, -0.710686, 1.0f,
-0.327091, 0.000331, -0.789672, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.000000, -0.000331, -0.854734, 1.0f,
0.166750, -0.000331, -0.838310, 1.0f,
0.000000, -0.000331, -0.854734, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
-0.166749, -0.000331, -0.838311, 1.0f,
-0.166749, -0.000331, -0.838311, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.474864, -0.000331, -0.710686, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.710684, -0.000331, -0.474866, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.854734, -0.000331, -0.000001, 1.0f,
-0.838310, -0.000331, -0.166751, 1.0f,
-0.854734, -0.000331, -0.000001, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.838310, -0.000331, 0.166749, 1.0f,
-0.838310, -0.000331, 0.166749, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.710685, -0.000331, 0.474865, 1.0f,
-0.710685, -0.000331, 0.474865, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.604388, -0.000331, 0.604388, 1.0f,
-0.604388, -0.000331, 0.604388, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.474865, -0.000331, 0.710685, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
-0.166750, -0.000331, 0.838310, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.166750, -0.000331, 0.838310, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.474865, -0.000331, 0.710685, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.710685, -0.000331, 0.474865, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.854734, -0.000331, -0.000000, 1.0f,
0.838310, -0.000331, 0.166750, 1.0f,
0.854734, -0.000331, -0.000000, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.838310, -0.000331, -0.166750, 1.0f,
0.838310, -0.000331, -0.166750, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.710685, -0.000331, -0.474865, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.474865, -0.000331, -0.710685, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
-0.604388, -0.000331, -0.604389, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
0.000000, -0.000331, 0.854734, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.327093, -0.000331, 0.789672, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.604388, -0.000331, 0.604388, 1.0f,
0.789672, -0.000331, -0.327093, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.604388, -0.000331, -0.604388, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.327092, -0.000331, 0.789672, 1.0f,
-0.789672, -0.000331, 0.327092, 1.0f,
0.327093, -0.000331, -0.789672, 1.0f,
0.789672, -0.000331, 0.327092, 1.0f,
-0.789671, -0.000331, -0.327093, 1.0f,
-0.327091, -0.000331, -0.789672, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.166749, -0.000331, -0.838311, 1.0f,
-0.166749, -0.000331, -0.838311, 1.0f,
0.000000, 0.000331, -0.854734, 1.0f,
0.000000, -0.000331, -0.854734, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.000000, 0.000331, -0.854734, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.327093, 0.000331, -0.789672, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.710685, 0.000331, -0.474865, 1.0f,
0.604388, 0.000331, -0.604388, 1.0f,
0.710685, 0.000331, -0.474865, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.789672, 0.000331, -0.327093, 1.0f,
0.789672, 0.000331, -0.327093, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.838310, 0.000331, 0.166750, 1.0f,
0.854734, 0.000331, -0.000000, 1.0f,
0.838310, 0.000331, 0.166750, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.789672, 0.000331, 0.327092, 1.0f,
0.789672, 0.000331, 0.327092, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.604388, 0.000331, 0.604388, 1.0f,
0.604388, 0.000331, 0.604388, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.474865, 0.000331, 0.710685, 1.0f,
0.474865, 0.000331, 0.710685, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.327093, 0.000331, 0.789672, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
0.000000, 0.000331, 0.854734, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.327092, 0.000331, 0.789672, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.604388, 0.000331, 0.604388, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.789672, 0.000331, 0.327092, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.854734, 0.000331, -0.000001, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.789671, 0.000331, -0.327093, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.604388, 0.000331, -0.604389, 1.0f,
-0.604388, 0.000331, -0.604389, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.474864, 0.000331, -0.710686, 1.0f,
-0.474864, 0.000331, -0.710686, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.327091, 0.000331, -0.789672, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.166750, 0.000331, -0.838310, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.166750, 0.000331, 0.838310, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.474865, 0.000331, 0.710685, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.710685, 0.000331, 0.474865, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.838310, 0.000331, -0.166751, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.710684, 0.000331, -0.474866, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.474865, 0.000331, -0.710685, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f,
0.166750, 0.000331, 0.838310, 1.0f,
0.710685, 0.000331, 0.474865, 1.0f,
-0.166749, 0.000331, -0.838311, 1.0f,
-0.838310, 0.000331, 0.166749, 1.0f,
0.838310, 0.000331, -0.166750, 1.0f};
		float vertexNormals[] = {0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
0.0000, -1.0000, -0.0000, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f,
-0.0000, 1.0000, 0.0000, 0.0f}; ;
			float texCoords[] = {1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
0.990393, 0.597545,
0.009607, 0.402455,
0.597545, 0.009607,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
0.990393, 0.597545,
0.009607, 0.402455,
0.597545, 0.009607,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
0.402456, 0.990393,
0.597545, 0.990393,
0.500000, 1.000000,
0.597545, 0.990393,
0.402456, 0.990393,
0.691342, 0.961940,
0.691342, 0.961940,
0.402456, 0.990393,
0.777785, 0.915735,
0.777785, 0.915735,
0.915735, 0.777785,
0.853553, 0.853553,
0.915735, 0.777785,
0.990393, 0.597545,
0.961940, 0.691342,
0.990393, 0.597545,
0.990393, 0.402455,
1.000000, 0.500000,
0.990393, 0.402455,
0.990393, 0.597545,
0.961940, 0.308658,
0.961940, 0.308658,
0.990393, 0.597545,
0.915735, 0.222215,
0.915735, 0.222215,
0.597545, 0.009607,
0.853553, 0.146447,
0.853553, 0.146447,
0.597545, 0.009607,
0.777785, 0.084265,
0.777785, 0.084265,
0.597545, 0.009607,
0.691342, 0.038060,
0.597545, 0.009607,
0.402455, 0.009607,
0.500000, 0.000000,
0.402455, 0.009607,
0.222215, 0.084265,
0.308658, 0.038060,
0.222215, 0.084265,
0.084265, 0.222215,
0.146446, 0.146447,
0.084265, 0.222215,
0.009607, 0.402455,
0.038060, 0.308659,
0.009607, 0.402455,
0.009607, 0.597546,
0.000000, 0.500000,
0.009607, 0.597546,
0.009607, 0.402455,
0.038060, 0.691342,
0.038060, 0.691342,
0.009607, 0.402455,
0.084266, 0.777786,
0.084266, 0.777786,
0.222215, 0.915735,
0.146447, 0.853554,
0.222215, 0.915735,
0.402456, 0.990393,
0.308659, 0.961940,
0.777785, 0.915735,
0.402456, 0.990393,
0.915735, 0.777785,
0.915735, 0.777785,
0.402456, 0.990393,
0.990393, 0.597545,
0.597545, 0.009607,
0.009607, 0.402455,
0.402455, 0.009607,
0.402455, 0.009607,
0.009607, 0.402455,
0.222215, 0.084265,
0.222215, 0.084265,
0.009607, 0.402455,
0.084265, 0.222215,
0.084266, 0.777786,
0.009607, 0.402455,
0.222215, 0.915735,
0.222215, 0.915735,
0.009607, 0.402455,
0.402456, 0.990393,
0.990393, 0.597545,
0.597545, 0.009607,
0.915735, 0.222215,
0.402456, 0.990393,
0.009607, 0.402455,
0.990393, 0.597545,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
0.402456, 0.990393,
0.597545, 0.990393,
0.500000, 1.000000,
0.597545, 0.990393,
0.777785, 0.915735,
0.691342, 0.961940,
0.777785, 0.915735,
0.915735, 0.777785,
0.853553, 0.853553,
0.915735, 0.777785,
0.777785, 0.915735,
0.961940, 0.691342,
0.961940, 0.691342,
0.777785, 0.915735,
0.990393, 0.597545,
0.990393, 0.597545,
0.990393, 0.402455,
1.000000, 0.500000,
0.990393, 0.402455,
0.990393, 0.597545,
0.961940, 0.308658,
0.961940, 0.308658,
0.990393, 0.597545,
0.915735, 0.222215,
0.915735, 0.222215,
0.597545, 0.009607,
0.853553, 0.146447,
0.853553, 0.146447,
0.597545, 0.009607,
0.777785, 0.084265,
0.777785, 0.084265,
0.597545, 0.009607,
0.691342, 0.038060,
0.597545, 0.009607,
0.402455, 0.009607,
0.500000, 0.000000,
0.402455, 0.009607,
0.222215, 0.084265,
0.308658, 0.038060,
0.222215, 0.084265,
0.084265, 0.222215,
0.146446, 0.146447,
0.084265, 0.222215,
0.009607, 0.402455,
0.038060, 0.308659,
0.009607, 0.402455,
0.009607, 0.597546,
0.000000, 0.500000,
0.009607, 0.597546,
0.084266, 0.777786,
0.038060, 0.691342,
0.084266, 0.777786,
0.402456, 0.990393,
0.146447, 0.853554,
0.146447, 0.853554,
0.402456, 0.990393,
0.222215, 0.915735,
0.222215, 0.915735,
0.402456, 0.990393,
0.308659, 0.961940,
0.402456, 0.990393,
0.777785, 0.915735,
0.597545, 0.990393,
0.597545, 0.009607,
0.009607, 0.402455,
0.402455, 0.009607,
0.402455, 0.009607,
0.009607, 0.402455,
0.222215, 0.084265,
0.222215, 0.084265,
0.009607, 0.402455,
0.084265, 0.222215,
0.009607, 0.402455,
0.402456, 0.990393,
0.009607, 0.597546,
0.009607, 0.597546,
0.402456, 0.990393,
0.084266, 0.777786,
0.402456, 0.990393,
0.990393, 0.597545,
0.777785, 0.915735,
0.990393, 0.597545,
0.597545, 0.009607,
0.915735, 0.222215,
0.402456, 0.990393,
0.009607, 0.402455,
0.990393, 0.597545};
		}