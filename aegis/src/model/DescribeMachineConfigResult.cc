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

#include <alibabacloud/aegis/model/DescribeMachineConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeMachineConfigResult::DescribeMachineConfigResult() :
	ServiceResult()
{}

DescribeMachineConfigResult::DescribeMachineConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMachineConfigResult::~DescribeMachineConfigResult()
{}

void DescribeMachineConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allConfigTargets = value["ConfigTargets"]["ConfigTarget"];
	for (auto value : allConfigTargets)
	{
		ConfigTarget configTargetsObject;
		if(!value["TargetType"].isNull())
			configTargetsObject.targetType = value["TargetType"].asString();
		if(!value["Target"].isNull())
			configTargetsObject.target = value["Target"].asString();
		if(!value["Flag"].isNull())
			configTargetsObject.flag = value["Flag"].asString();
		configTargets_.push_back(configTargetsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeMachineConfigResult::getCount()const
{
	return count_;
}

std::vector<DescribeMachineConfigResult::ConfigTarget> DescribeMachineConfigResult::getConfigTargets()const
{
	return configTargets_;
}

