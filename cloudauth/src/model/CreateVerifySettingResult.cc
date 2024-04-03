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

#include <alibabacloud/cloudauth/model/CreateVerifySettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

CreateVerifySettingResult::CreateVerifySettingResult() :
	ServiceResult()
{}

CreateVerifySettingResult::CreateVerifySettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVerifySettingResult::~CreateVerifySettingResult()
{}

void CreateVerifySettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStepList = value["StepList"]["Step"];
	for (const auto &item : allStepList)
		stepList_.push_back(item.asString());
	if(!value["BizName"].isNull())
		bizName_ = value["BizName"].asString();
	if(!value["Solution"].isNull())
		solution_ = value["Solution"].asString();
	if(!value["BizType"].isNull())
		bizType_ = value["BizType"].asString();

}

std::vector<std::string> CreateVerifySettingResult::getStepList()const
{
	return stepList_;
}

std::string CreateVerifySettingResult::getBizName()const
{
	return bizName_;
}

std::string CreateVerifySettingResult::getBizType()const
{
	return bizType_;
}

std::string CreateVerifySettingResult::getSolution()const
{
	return solution_;
}

