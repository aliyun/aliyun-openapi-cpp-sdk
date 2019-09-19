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
	auto allConfigParametersNode = value["ConfigParameters"]["Parameter"];
	for (auto valueConfigParametersParameter : allConfigParametersNode)
	{
		Parameter configParametersObject;
		if(!valueConfigParametersParameter["ParameterName"].isNull())
			configParametersObject.parameterName = valueConfigParametersParameter["ParameterName"].asString();
		if(!valueConfigParametersParameter["ParameterValue"].isNull())
			configParametersObject.parameterValue = valueConfigParametersParameter["ParameterValue"].asString();
		if(!valueConfigParametersParameter["ModifiableStatus"].isNull())
			configParametersObject.modifiableStatus = valueConfigParametersParameter["ModifiableStatus"].asString() == "true";
		if(!valueConfigParametersParameter["ForceRestart"].isNull())
			configParametersObject.forceRestart = valueConfigParametersParameter["ForceRestart"].asString() == "true";
		if(!valueConfigParametersParameter["CheckingCode"].isNull())
			configParametersObject.checkingCode = valueConfigParametersParameter["CheckingCode"].asString();
		if(!valueConfigParametersParameter["ParameterDescription"].isNull())
			configParametersObject.parameterDescription = valueConfigParametersParameter["ParameterDescription"].asString();
		configParameters_.push_back(configParametersObject);
	}
	auto allRunningParametersNode = value["RunningParameters"]["Parameter"];
	for (auto valueRunningParametersParameter : allRunningParametersNode)
	{
		Parameter runningParametersObject;
		if(!valueRunningParametersParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersParameter["ParameterName"].asString();
		if(!valueRunningParametersParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersParameter["ParameterValue"].asString();
		if(!valueRunningParametersParameter["ModifiableStatus"].isNull())
			runningParametersObject.modifiableStatus = valueRunningParametersParameter["ModifiableStatus"].asString() == "true";
		if(!valueRunningParametersParameter["ForceRestart"].isNull())
			runningParametersObject.forceRestart = valueRunningParametersParameter["ForceRestart"].asString() == "true";
		if(!valueRunningParametersParameter["CheckingCode"].isNull())
			runningParametersObject.checkingCode = valueRunningParametersParameter["CheckingCode"].asString();
		if(!valueRunningParametersParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersParameter["ParameterDescription"].asString();
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

