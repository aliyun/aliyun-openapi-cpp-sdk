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

#include <alibabacloud/cms/model/DescribeContactListByContactGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeContactListByContactGroupResult::DescribeContactListByContactGroupResult() :
	ServiceResult()
{}

DescribeContactListByContactGroupResult::DescribeContactListByContactGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactListByContactGroupResult::~DescribeContactListByContactGroupResult()
{}

void DescribeContactListByContactGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactsNode = value["Contacts"]["Contact"];
	for (auto valueContactsContact : allContactsNode)
	{
		Contact contactsObject;
		if(!valueContactsContact["UpdateTime"].isNull())
			contactsObject.updateTime = std::stol(valueContactsContact["UpdateTime"].asString());
		if(!valueContactsContact["Name"].isNull())
			contactsObject.name = valueContactsContact["Name"].asString();
		if(!valueContactsContact["CreateTime"].isNull())
			contactsObject.createTime = std::stol(valueContactsContact["CreateTime"].asString());
		if(!valueContactsContact["Desc"].isNull())
			contactsObject.desc = valueContactsContact["Desc"].asString();
		auto channelsNode = value["Channels"];
		if(!channelsNode["Mail"].isNull())
			contactsObject.channels.mail = channelsNode["Mail"].asString();
		if(!channelsNode["AliIM"].isNull())
			contactsObject.channels.aliIM = channelsNode["AliIM"].asString();
		if(!channelsNode["DingWebHook"].isNull())
			contactsObject.channels.dingWebHook = channelsNode["DingWebHook"].asString();
		if(!channelsNode["SMS"].isNull())
			contactsObject.channels.sMS = channelsNode["SMS"].asString();
		contacts_.push_back(contactsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeContactListByContactGroupResult::Contact> DescribeContactListByContactGroupResult::getContacts()const
{
	return contacts_;
}

std::string DescribeContactListByContactGroupResult::getMessage()const
{
	return message_;
}

std::string DescribeContactListByContactGroupResult::getCode()const
{
	return code_;
}

bool DescribeContactListByContactGroupResult::getSuccess()const
{
	return success_;
}

