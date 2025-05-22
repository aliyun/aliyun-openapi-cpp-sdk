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

#include <alibabacloud/rds/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeParametersResult::DescribeParametersResult() :
	ServiceResult()
{}

DescribeParametersResult::DescribeParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParametersResult::~DescribeParametersResult()
{}

void DescribeParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigParametersNode = value["ConfigParameters"]["DBInstanceParameter"];
	for (auto valueConfigParametersDBInstanceParameter : allConfigParametersNode)
	{
		DBInstanceParameter configParametersObject;
		if(!valueConfigParametersDBInstanceParameter["ParameterDescription"].isNull())
			configParametersObject.parameterDescription = valueConfigParametersDBInstanceParameter["ParameterDescription"].asString();
		if(!valueConfigParametersDBInstanceParameter["ParameterName"].isNull())
			configParametersObject.parameterName = valueConfigParametersDBInstanceParameter["ParameterName"].asString();
		if(!valueConfigParametersDBInstanceParameter["ParameterValue"].isNull())
			configParametersObject.parameterValue = valueConfigParametersDBInstanceParameter["ParameterValue"].asString();
		configParameters_.push_back(configParametersObject);
	}
	auto allRunningParametersNode = value["RunningParameters"]["DBInstanceParameter"];
	for (auto valueRunningParametersDBInstanceParameter : allRunningParametersNode)
	{
		DBInstanceParameter1 runningParametersObject;
		if(!valueRunningParametersDBInstanceParameter["ParameterDefaultValue"].isNull())
			runningParametersObject.parameterDefaultValue = valueRunningParametersDBInstanceParameter["ParameterDefaultValue"].asString();
		if(!valueRunningParametersDBInstanceParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersDBInstanceParameter["ParameterDescription"].asString();
		if(!valueRunningParametersDBInstanceParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersDBInstanceParameter["ParameterName"].asString();
		if(!valueRunningParametersDBInstanceParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersDBInstanceParameter["ParameterValue"].asString();
		if(!valueRunningParametersDBInstanceParameter["ParameterValueRange"].isNull())
			runningParametersObject.parameterValueRange = valueRunningParametersDBInstanceParameter["ParameterValueRange"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	auto paramGroupInfoNode = value["ParamGroupInfo"];
	if(!paramGroupInfoNode["ParamGroupId"].isNull())
		paramGroupInfo_.paramGroupId = paramGroupInfoNode["ParamGroupId"].asString();
	if(!paramGroupInfoNode["ParameterGroupDesc"].isNull())
		paramGroupInfo_.parameterGroupDesc = paramGroupInfoNode["ParameterGroupDesc"].asString();
	if(!paramGroupInfoNode["ParameterGroupName"].isNull())
		paramGroupInfo_.parameterGroupName = paramGroupInfoNode["ParameterGroupName"].asString();
	if(!paramGroupInfoNode["ParameterGroupType"].isNull())
		paramGroupInfo_.parameterGroupType = paramGroupInfoNode["ParameterGroupType"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();

}

std::vector<DescribeParametersResult::DBInstanceParameter1> DescribeParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeParametersResult::getEngineVersion()const
{
	return engineVersion_;
}

DescribeParametersResult::ParamGroupInfo DescribeParametersResult::getParamGroupInfo()const
{
	return paramGroupInfo_;
}

std::vector<DescribeParametersResult::DBInstanceParameter> DescribeParametersResult::getConfigParameters()const
{
	return configParameters_;
}

std::string DescribeParametersResult::getEngine()const
{
	return engine_;
}

