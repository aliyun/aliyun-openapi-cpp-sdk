/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/polardb/model/DescribeDBInitializeVariableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBInitializeVariableResult::DescribeDBInitializeVariableResult() :
	ServiceResult()
{}

DescribeDBInitializeVariableResult::DescribeDBInitializeVariableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInitializeVariableResult::~DescribeDBInitializeVariableResult()
{}

void DescribeDBInitializeVariableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVariablesNode = value["Variables"]["Variable"];
	for (auto valueVariablesVariable : allVariablesNode)
	{
		Variable variablesObject;
		if(!valueVariablesVariable["Charset"].isNull())
			variablesObject.charset = valueVariablesVariable["Charset"].asString();
		if(!valueVariablesVariable["Collate"].isNull())
			variablesObject.collate = valueVariablesVariable["Collate"].asString();
		if(!valueVariablesVariable["Ctype"].isNull())
			variablesObject.ctype = valueVariablesVariable["Ctype"].asString();
		variables_.push_back(variablesObject);
	}
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();

}

std::vector<DescribeDBInitializeVariableResult::Variable> DescribeDBInitializeVariableResult::getVariables()const
{
	return variables_;
}

std::string DescribeDBInitializeVariableResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBInitializeVariableResult::getDBType()const
{
	return dBType_;
}

