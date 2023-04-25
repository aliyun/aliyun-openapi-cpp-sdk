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

#include <alibabacloud/ccc/model/ListPhoneNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPhoneNumbersResult::ListPhoneNumbersResult() :
	ServiceResult()
{}

ListPhoneNumbersResult::ListPhoneNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhoneNumbersResult::~ListPhoneNumbersResult()
{}

void ListPhoneNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["PhoneNumber"];
	for (auto dataNodeListPhoneNumber : allListNode)
	{
		Data::PhoneNumber phoneNumberObject;
		if(!dataNodeListPhoneNumber["Active"].isNull())
			phoneNumberObject.active = dataNodeListPhoneNumber["Active"].asString() == "true";
		if(!dataNodeListPhoneNumber["CreateTime"].isNull())
			phoneNumberObject.createTime = dataNodeListPhoneNumber["CreateTime"].asString();
		if(!dataNodeListPhoneNumber["UserId"].isNull())
			phoneNumberObject.userId = dataNodeListPhoneNumber["UserId"].asString();
		if(!dataNodeListPhoneNumber["Tags"].isNull())
			phoneNumberObject.tags = dataNodeListPhoneNumber["Tags"].asString();
		if(!dataNodeListPhoneNumber["City"].isNull())
			phoneNumberObject.city = dataNodeListPhoneNumber["City"].asString();
		if(!dataNodeListPhoneNumber["InstanceId"].isNull())
			phoneNumberObject.instanceId = dataNodeListPhoneNumber["InstanceId"].asString();
		if(!dataNodeListPhoneNumber["Usage"].isNull())
			phoneNumberObject.usage = dataNodeListPhoneNumber["Usage"].asString();
		if(!dataNodeListPhoneNumber["ContactFlowName"].isNull())
			phoneNumberObject.contactFlowName = dataNodeListPhoneNumber["ContactFlowName"].asString();
		if(!dataNodeListPhoneNumber["Provider"].isNull())
			phoneNumberObject.provider = dataNodeListPhoneNumber["Provider"].asString();
		if(!dataNodeListPhoneNumber["Number"].isNull())
			phoneNumberObject.number = dataNodeListPhoneNumber["Number"].asString();
		if(!dataNodeListPhoneNumber["ContactFlowId"].isNull())
			phoneNumberObject.contactFlowId = dataNodeListPhoneNumber["ContactFlowId"].asString();
		if(!dataNodeListPhoneNumber["Province"].isNull())
			phoneNumberObject.province = dataNodeListPhoneNumber["Province"].asString();
		auto allSkillGroupsNode = dataNodeListPhoneNumber["SkillGroups"]["SkillGroup"];
		for (auto dataNodeListPhoneNumberSkillGroupsSkillGroup : allSkillGroupsNode)
		{
			Data::PhoneNumber::SkillGroup skillGroupsObject;
			if(!dataNodeListPhoneNumberSkillGroupsSkillGroup["DisplayName"].isNull())
				skillGroupsObject.displayName = dataNodeListPhoneNumberSkillGroupsSkillGroup["DisplayName"].asString();
			if(!dataNodeListPhoneNumberSkillGroupsSkillGroup["InstanceId"].isNull())
				skillGroupsObject.instanceId = dataNodeListPhoneNumberSkillGroupsSkillGroup["InstanceId"].asString();
			if(!dataNodeListPhoneNumberSkillGroupsSkillGroup["Name"].isNull())
				skillGroupsObject.name = dataNodeListPhoneNumberSkillGroupsSkillGroup["Name"].asString();
			if(!dataNodeListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].isNull())
				skillGroupsObject.skillGroupId = dataNodeListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].asString();
			phoneNumberObject.skillGroups.push_back(skillGroupsObject);
		}
		data_.list.push_back(phoneNumberObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPhoneNumbersResult::getMessage()const
{
	return message_;
}

int ListPhoneNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListPhoneNumbersResult::Data ListPhoneNumbersResult::getData()const
{
	return data_;
}

std::string ListPhoneNumbersResult::getCode()const
{
	return code_;
}

