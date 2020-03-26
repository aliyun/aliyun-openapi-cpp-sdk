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

#include <alibabacloud/ccc/model/ListPhoneTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPhoneTagsResult::ListPhoneTagsResult() :
	ServiceResult()
{}

ListPhoneTagsResult::ListPhoneTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhoneTagsResult::~ListPhoneTagsResult()
{}

void ListPhoneTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto phoneNumbersNode = value["PhoneNumbers"];
	if(!phoneNumbersNode["TotalCount"].isNull())
		phoneNumbers_.totalCount = std::stoi(phoneNumbersNode["TotalCount"].asString());
	if(!phoneNumbersNode["PageNumber"].isNull())
		phoneNumbers_.pageNumber = std::stoi(phoneNumbersNode["PageNumber"].asString());
	if(!phoneNumbersNode["PageSize"].isNull())
		phoneNumbers_.pageSize = std::stoi(phoneNumbersNode["PageSize"].asString());
	auto allListNode = phoneNumbersNode["List"]["PhoneNumber"];
	for (auto phoneNumbersNodeListPhoneNumber : allListNode)
	{
		PhoneNumbers::PhoneNumber phoneNumberObject;
		if(!phoneNumbersNodeListPhoneNumber["PhoneNumberId"].isNull())
			phoneNumberObject.phoneNumberId = phoneNumbersNodeListPhoneNumber["PhoneNumberId"].asString();
		if(!phoneNumbersNodeListPhoneNumber["InstanceId"].isNull())
			phoneNumberObject.instanceId = phoneNumbersNodeListPhoneNumber["InstanceId"].asString();
		if(!phoneNumbersNodeListPhoneNumber["Number"].isNull())
			phoneNumberObject.number = phoneNumbersNodeListPhoneNumber["Number"].asString();
		if(!phoneNumbersNodeListPhoneNumber["PhoneNumberDescription"].isNull())
			phoneNumberObject.phoneNumberDescription = phoneNumbersNodeListPhoneNumber["PhoneNumberDescription"].asString();
		if(!phoneNumbersNodeListPhoneNumber["TestOnly"].isNull())
			phoneNumberObject.testOnly = phoneNumbersNodeListPhoneNumber["TestOnly"].asString() == "true";
		if(!phoneNumbersNodeListPhoneNumber["RemainingTime"].isNull())
			phoneNumberObject.remainingTime = std::stoi(phoneNumbersNodeListPhoneNumber["RemainingTime"].asString());
		if(!phoneNumbersNodeListPhoneNumber["AllowOutbound"].isNull())
			phoneNumberObject.allowOutbound = phoneNumbersNodeListPhoneNumber["AllowOutbound"].asString() == "true";
		if(!phoneNumbersNodeListPhoneNumber["Usage"].isNull())
			phoneNumberObject.usage = phoneNumbersNodeListPhoneNumber["Usage"].asString();
		if(!phoneNumbersNodeListPhoneNumber["Trunks"].isNull())
			phoneNumberObject.trunks = std::stoi(phoneNumbersNodeListPhoneNumber["Trunks"].asString());
		if(!phoneNumbersNodeListPhoneNumber["Province"].isNull())
			phoneNumberObject.province = phoneNumbersNodeListPhoneNumber["Province"].asString();
		if(!phoneNumbersNodeListPhoneNumber["City"].isNull())
			phoneNumberObject.city = phoneNumbersNodeListPhoneNumber["City"].asString();
		if(!phoneNumbersNodeListPhoneNumber["Assignee"].isNull())
			phoneNumberObject.assignee = phoneNumbersNodeListPhoneNumber["Assignee"].asString();
		if(!phoneNumbersNodeListPhoneNumber["NumberCommodityStatus"].isNull())
			phoneNumberObject.numberCommodityStatus = std::stoi(phoneNumbersNodeListPhoneNumber["NumberCommodityStatus"].asString());
		if(!phoneNumbersNodeListPhoneNumber["Type"].isNull())
			phoneNumberObject.type = std::stoi(phoneNumbersNodeListPhoneNumber["Type"].asString());
		if(!phoneNumbersNodeListPhoneNumber["Concurrency"].isNull())
			phoneNumberObject.concurrency = std::stoi(phoneNumbersNodeListPhoneNumber["Concurrency"].asString());
		if(!phoneNumbersNodeListPhoneNumber["ServiceTag"].isNull())
			phoneNumberObject.serviceTag = phoneNumbersNodeListPhoneNumber["ServiceTag"].asString();
		if(!phoneNumbersNodeListPhoneNumber["SipTelX"].isNull())
			phoneNumberObject.sipTelX = phoneNumbersNodeListPhoneNumber["SipTelX"].asString();
		if(!phoneNumbersNodeListPhoneNumber["NumberGroupId"].isNull())
			phoneNumberObject.numberGroupId = phoneNumbersNodeListPhoneNumber["NumberGroupId"].asString();
		if(!phoneNumbersNodeListPhoneNumber["NumberGroupName"].isNull())
			phoneNumberObject.numberGroupName = phoneNumbersNodeListPhoneNumber["NumberGroupName"].asString();
		if(!phoneNumbersNodeListPhoneNumber["Provider"].isNull())
			phoneNumberObject.provider = phoneNumbersNodeListPhoneNumber["Provider"].asString();
		if(!phoneNumbersNodeListPhoneNumber["CreateTime"].isNull())
			phoneNumberObject.createTime = std::stol(phoneNumbersNodeListPhoneNumber["CreateTime"].asString());
		auto allSkillGroupsNode = allListNode["SkillGroups"]["SkillGroup"];
		for (auto allListNodeSkillGroupsSkillGroup : allSkillGroupsNode)
		{
			PhoneNumbers::PhoneNumber::SkillGroup skillGroupsObject;
			if(!allListNodeSkillGroupsSkillGroup["SkillGroupId"].isNull())
				skillGroupsObject.skillGroupId = allListNodeSkillGroupsSkillGroup["SkillGroupId"].asString();
			if(!allListNodeSkillGroupsSkillGroup["SkillGroupName"].isNull())
				skillGroupsObject.skillGroupName = allListNodeSkillGroupsSkillGroup["SkillGroupName"].asString();
			phoneNumberObject.skillGroups.push_back(skillGroupsObject);
		}
		auto contactFlowNode = value["ContactFlow"];
		if(!contactFlowNode["ContactFlowId"].isNull())
			phoneNumberObject.contactFlow.contactFlowId = contactFlowNode["ContactFlowId"].asString();
		if(!contactFlowNode["InstanceId"].isNull())
			phoneNumberObject.contactFlow.instanceId = contactFlowNode["InstanceId"].asString();
		if(!contactFlowNode["ContactFlowName"].isNull())
			phoneNumberObject.contactFlow.contactFlowName = contactFlowNode["ContactFlowName"].asString();
		if(!contactFlowNode["ContactFlowDescription"].isNull())
			phoneNumberObject.contactFlow.contactFlowDescription = contactFlowNode["ContactFlowDescription"].asString();
		if(!contactFlowNode["Type"].isNull())
			phoneNumberObject.contactFlow.type = contactFlowNode["Type"].asString();
		auto privacyNumberNode = value["PrivacyNumber"];
		if(!privacyNumberNode["PoolId"].isNull())
			phoneNumberObject.privacyNumber.poolId = privacyNumberNode["PoolId"].asString();
		if(!privacyNumberNode["Type"].isNull())
			phoneNumberObject.privacyNumber.type = privacyNumberNode["Type"].asString();
		if(!privacyNumberNode["TelX"].isNull())
			phoneNumberObject.privacyNumber.telX = privacyNumberNode["TelX"].asString();
		if(!privacyNumberNode["PoolName"].isNull())
			phoneNumberObject.privacyNumber.poolName = privacyNumberNode["PoolName"].asString();
		if(!privacyNumberNode["PhoneNumber"].isNull())
			phoneNumberObject.privacyNumber.phoneNumber = privacyNumberNode["PhoneNumber"].asString();
		if(!privacyNumberNode["Extra"].isNull())
			phoneNumberObject.privacyNumber.extra = privacyNumberNode["Extra"].asString();
		if(!privacyNumberNode["BizId"].isNull())
			phoneNumberObject.privacyNumber.bizId = privacyNumberNode["BizId"].asString();
		if(!privacyNumberNode["SubId"].isNull())
			phoneNumberObject.privacyNumber.subId = privacyNumberNode["SubId"].asString();
		if(!privacyNumberNode["RegionNameCity"].isNull())
			phoneNumberObject.privacyNumber.regionNameCity = privacyNumberNode["RegionNameCity"].asString();
		phoneNumbers_.list.push_back(phoneNumberObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

ListPhoneTagsResult::PhoneNumbers ListPhoneTagsResult::getPhoneNumbers()const
{
	return phoneNumbers_;
}

std::string ListPhoneTagsResult::getMessage()const
{
	return message_;
}

int ListPhoneTagsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPhoneTagsResult::getCode()const
{
	return code_;
}

bool ListPhoneTagsResult::getSuccess()const
{
	return success_;
}

