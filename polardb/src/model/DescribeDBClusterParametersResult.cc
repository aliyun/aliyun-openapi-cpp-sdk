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

#include <alibabacloud/polardb/model/DescribeDBClusterParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult() :
	ServiceResult()
{}

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterParametersResult::~DescribeDBClusterParametersResult()
{}

void DescribeDBClusterParametersResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRunningParameters = value["RunningParameters"]["Parameter"];
	for (auto value : allRunningParameters)
	{
		Parameter runningParametersObject;
		if(!value["ParameterName"].isNull())
			runningParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["DataType"].isNull())
			runningParametersObject.dataType = value["DataType"].asString();
		if(!value["DefaultParameterValue"].isNull())
			runningParametersObject.defaultParameterValue = value["DefaultParameterValue"].asString();
		if(!value["ParameterValue"].isNull())
			runningParametersObject.parameterValue = value["ParameterValue"].asString();
		if(!value["IsModifiable"].isNull())
			runningParametersObject.isModifiable = value["IsModifiable"].asString() == "true";
		if(!value["ForceRestart"].isNull())
			runningParametersObject.forceRestart = value["ForceRestart"].asString() == "true";
		if(!value["ParameterStatus"].isNull())
			runningParametersObject.parameterStatus = value["ParameterStatus"].asString();
		if(!value["CheckingCode"].isNull())
			runningParametersObject.checkingCode = value["CheckingCode"].asString();
		if(!value["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = value["ParameterDescription"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();

}

std::vector<DescribeDBClusterParametersResult::Parameter> DescribeDBClusterParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeDBClusterParametersResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBClusterParametersResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBClusterParametersResult::getEngine()const
{
	return engine_;
}

