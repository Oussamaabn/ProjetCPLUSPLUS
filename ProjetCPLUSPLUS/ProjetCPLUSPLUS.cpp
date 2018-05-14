// ProjetCPLUSPLUS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BinaryExpression.h"
#include "ValueModel.h"
#include "And.h"
#include "BinaryExpressionModel.h"
#include "UnaryExpressionModel.h"
using namespace core;
using namespace fuzzy;

int _tmain(int argc, char* argv[])
{
	//pro avec =0
	//BinaryExpression<int> b;

	core::ValueModel<int> t();
	core::BinaryExpressionModel<int> b();
	core::UnaryExpressionModel<int> u();

	
	return 0;
}

