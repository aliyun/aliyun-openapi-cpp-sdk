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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstanceParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeDatabaseInstanceParametersResult::DescribeDatabaseInstanceParametersResult() :
	ServiceResult()
{}

DescribeDatabaseInstanceParametersResult::DescribeDatabaseInstanceParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabaseInstanceParametersResult::~DescribeDatabaseInstanceParametersResult()
{}

void DescribeDatabaseInstanceParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigParametersNode = value["ConfigParameters"]["ConfigParameter"];
	for (auto valueConfigParametersConfigParameter : allConfigParametersNode)
	{
		ConfigParameter configParametersObject;
		if(!valueConfigParametersConfigParameter["ParameterDescription"].isNull())
			configParametersObject.parameterDescription = valueConfigParametersConfigParameter["ParameterDescription"].asString();
		if(!valueConfigParametersConfigParameter["ParameterName"].isNull())
			configParametersObject.parameterName = valueConfigParametersConfigParameter["ParameterName"].asString();
		if(!valueConfigParametersConfigParameter["ParameterValue"].isNull())
			configParametersObject.parameterValue = valueConfigParametersConfigParameter["ParameterValue"].asString();
		if(!valueConfigParametersConfigParameter["ForceModify"].isNull())
			configParametersObject.forceModify = valueConfigParametersConfigParameter["ForceModify"].asString();
		if(!valueConfigParametersConfigParameter["ForceRestart"].isNull())
			configParametersObject.forceRestart = valueConfigParametersConfigParameter["ForceRestart"].asString();
		if(!valueConfigParametersConfigParameter["CheckingCode"].isNull())
			configParametersObject.checkingCode = valueConfigParametersConfigParameter["CheckingCode"].asString();
		configParameters_.push_back(configParametersObject);
	}
	auto allRunningParametersNode = value["RunningParameters"]["RunningParameter"];
	for (auto valueRunningParametersRunningParameter : allRunningParametersNode)
	{
		RunningParameter runningParametersObject;
		if(!valueRunningParametersRunningParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersRunningParameter["ParameterDescription"].asString();
		if(!valueRunningParametersRunningParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersRunningParameter["ParameterName"].asString();
		if(!valueRunningParametersRunningParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersRunningParameter["ParameterValue"].asString();
		if(!valueRunningParametersRunningParameter["ForceModify"].isNull())
			runningParametersObject.forceModify = valueRunningParametersRunningParameter["ForceModify"].asString();
		if(!valueRunningParametersRunningParameter["ForceRestart"].isNull())
			runningParametersObject.forceRestart = valueRunningParametersRunningParameter["ForceRestart"].asString();
		if(!valueRunningParametersRunningParameter["CheckingCode"].isNull())
			runningParametersObject.checkingCode = valueRunningParametersRunningParameter["CheckingCode"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();

}

std::vector<DescribeDatabaseInstanceParametersResult::RunningParameter> DescribeDatabaseInstanceParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeDatabaseInstanceParametersResult::getEngineVersion()const
{
	return engineVersion_;
}

std::vector<DescribeDatabaseInstanceParametersResult::ConfigParameter> DescribeDatabaseInstanceParametersResult::getConfigParameters()const
{
	return configParameters_;
}

std::string DescribeDatabaseInstanceParametersResult::getEngine()const
{
	return engine_;
}

