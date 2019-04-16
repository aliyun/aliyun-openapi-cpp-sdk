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

#include <alibabacloud/r-kvstore/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	auto allConfigParameters = value["ConfigParameters"]["Parameter"];
	for (auto value : allConfigParameters)
	{
		Parameter configParametersObject;
		if(!value["ParameterName"].isNull())
			configParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ParameterValue"].isNull())
			configParametersObject.parameterValue = value["ParameterValue"].asString();
		if(!value["ModifiableStatus"].isNull())
			configParametersObject.modifiableStatus = value["ModifiableStatus"].asString() == "true";
		if(!value["ForceRestart"].isNull())
			configParametersObject.forceRestart = value["ForceRestart"].asString() == "true";
		if(!value["CheckingCode"].isNull())
			configParametersObject.checkingCode = value["CheckingCode"].asString();
		if(!value["ParameterDescription"].isNull())
			configParametersObject.parameterDescription = value["ParameterDescription"].asString();
		configParameters_.push_back(configParametersObject);
	}
	auto allRunningParameters = value["RunningParameters"]["Parameter"];
	for (auto value : allRunningParameters)
	{
		Parameter runningParametersObject;
		if(!value["ParameterName"].isNull())
			runningParametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ParameterValue"].isNull())
			runningParametersObject.parameterValue = value["ParameterValue"].asString();
		if(!value["ModifiableStatus"].isNull())
			runningParametersObject.modifiableStatus = value["ModifiableStatus"].asString() == "true";
		if(!value["ForceRestart"].isNull())
			runningParametersObject.forceRestart = value["ForceRestart"].asString() == "true";
		if(!value["CheckingCode"].isNull())
			runningParametersObject.checkingCode = value["CheckingCode"].asString();
		if(!value["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = value["ParameterDescription"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();

}

std::vector<DescribeParametersResult::Parameter> DescribeParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeParametersResult::getEngineVersion()const
{
	return engineVersion_;
}

std::vector<DescribeParametersResult::Parameter> DescribeParametersResult::getConfigParameters()const
{
	return configParameters_;
}

std::string DescribeParametersResult::getEngine()const
{
	return engine_;
}

