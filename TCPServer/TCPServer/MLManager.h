#pragma once

#define PY_SSIZE_T_CLEAN
#include <python3.9/Python.h>

class MLManager
{
public:
	MLManager();
	~MLManager();

	void Init();
	FeatureData ConvertToWAV(BYTE* data);
	int8 RunModel(const FeatureData& content);

	string _MLFileName;
	uint8 _numOfCall = 1;
	vector<string> _MLFunctionName;

	PyObject* _pName, * _pModule, * _pFunc;
};

