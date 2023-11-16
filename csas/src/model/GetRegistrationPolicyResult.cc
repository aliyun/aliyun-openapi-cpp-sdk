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

#include <alibabacloud/csas/model/GetRegistrationPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetRegistrationPolicyResult::GetRegistrationPolicyResult() :
	ServiceResult()
{}

GetRegistrationPolicyResult::GetRegistrationPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRegistrationPolicyResult::~GetRegistrationPolicyResult()
{}

void GetRegistrationPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLimitDetailNode = value["LimitDetail"]["limitDetailItem"];
	for (auto valueLimitDetaillimitDetailItem : allLimitDetailNode)
	{
		LimitDetailItem limitDetailObject;
		if(!valueLimitDetaillimitDetailItem["DeviceBelong"].isNull())
			limitDetailObject.deviceBelong = valueLimitDetaillimitDetailItem["DeviceBelong"].asString();
		if(!valueLimitDetaillimitDetailItem["LimitType"].isNull())
			limitDetailObject.limitType = valueLimitDetaillimitDetailItem["LimitType"].asString();
		auto limitCountNode = value["LimitCount"];
		if(!limitCountNode["All"].isNull())
			limitDetailObject.limitCount.all = std::stoi(limitCountNode["All"].asString());
		if(!limitCountNode["PC"].isNull())
			limitDetailObject.limitCount.pC = std::stoi(limitCountNode["PC"].asString());
		if(!limitCountNode["Mobile"].isNull())
			limitDetailObject.limitCount.mobile = std::stoi(limitCountNode["Mobile"].asString());
		limitDetail_.push_back(limitDetailObject);
	}
	auto allWhitelist = value["Whitelist"]["whitelist"];
	for (const auto &item : allWhitelist)
		whitelist_.push_back(item.asString());
	auto allUserGroupIds = value["UserGroupIds"]["userGroupIds"];
	for (const auto &item : allUserGroupIds)
		userGroupIds_.push_back(item.asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["PolicyId"].isNull())
		policyId_ = value["PolicyId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Priority"].isNull())
		priority_ = std::stol(value["Priority"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["MatchMode"].isNull())
		matchMode_ = value["MatchMode"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string GetRegistrationPolicyResult::getStatus()const
{
	return status_;
}

std::string GetRegistrationPolicyResult::getMatchMode()const
{
	return matchMode_;
}

std::string GetRegistrationPolicyResult::getDescription()const
{
	return description_;
}

long GetRegistrationPolicyResult::getPriority()const
{
	return priority_;
}

std::vector<std::string> GetRegistrationPolicyResult::getUserGroupIds()const
{
	return userGroupIds_;
}

std::string GetRegistrationPolicyResult::getCreateTime()const
{
	return createTime_;
}

std::vector<GetRegistrationPolicyResult::LimitDetailItem> GetRegistrationPolicyResult::getLimitDetail()const
{
	return limitDetail_;
}

std::vector<std::string> GetRegistrationPolicyResult::getWhitelist()const
{
	return whitelist_;
}

std::string GetRegistrationPolicyResult::getPolicyId()const
{
	return policyId_;
}

std::string GetRegistrationPolicyResult::getName()const
{
	return name_;
}

