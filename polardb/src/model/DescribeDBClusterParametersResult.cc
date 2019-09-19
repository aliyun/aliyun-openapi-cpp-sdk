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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRunningParametersNode = value["RunningParameters"]["Parameter"];
	for (auto valueRunningParametersParameter : allRunningParametersNode)
	{
		Parameter runningParametersObject;
		if(!valueRunningParametersParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersParameter["ParameterName"].asString();
		if(!valueRunningParametersParameter["DataType"].isNull())
			runningParametersObject.dataType = valueRunningParametersParameter["DataType"].asString();
		if(!valueRunningParametersParameter["DefaultParameterValue"].isNull())
			runningParametersObject.defaultParameterValue = valueRunningParametersParameter["DefaultParameterValue"].asString();
		if(!valueRunningParametersParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersParameter["ParameterValue"].asString();
		if(!valueRunningParametersParameter["IsModifiable"].isNull())
			runningParametersObject.isModifiable = valueRunningParametersParameter["IsModifiable"].asString() == "true";
		if(!valueRunningParametersParameter["ForceRestart"].isNull())
			runningParametersObject.forceRestart = valueRunningParametersParameter["ForceRestart"].asString() == "true";
		if(!valueRunningParametersParameter["ParameterStatus"].isNull())
			runningParametersObject.parameterStatus = valueRunningParametersParameter["ParameterStatus"].asString();
		if(!valueRunningParametersParameter["CheckingCode"].isNull())
			runningParametersObject.checkingCode = valueRunningParametersParameter["CheckingCode"].asString();
		if(!valueRunningParametersParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersParameter["ParameterDescription"].asString();
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

