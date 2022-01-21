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

#include <alibabacloud/cms/model/DescribeContactListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeContactListResult::DescribeContactListResult() :
	ServiceResult()
{}

DescribeContactListResult::DescribeContactListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactListResult::~DescribeContactListResult()
{}

void DescribeContactListResult::parse(const std::string &payload)
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
		if(!valueContactsContact["Lang"].isNull())
			contactsObject.lang = valueContactsContact["Lang"].asString();
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
		auto channelsStateNode = value["ChannelsState"];
		if(!channelsStateNode["Mail"].isNull())
			contactsObject.channelsState.mail = channelsStateNode["Mail"].asString();
		if(!channelsStateNode["AliIM"].isNull())
			contactsObject.channelsState.aliIM = channelsStateNode["AliIM"].asString();
		if(!channelsStateNode["DingWebHook"].isNull())
			contactsObject.channelsState.dingWebHook = channelsStateNode["DingWebHook"].asString();
		if(!channelsStateNode["SMS"].isNull())
			contactsObject.channelsState.sMS = channelsStateNode["SMS"].asString();
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			contactsObject.contactGroups.push_back(value.asString());
		contacts_.push_back(contactsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeContactListResult::Contact> DescribeContactListResult::getContacts()const
{
	return contacts_;
}

std::string DescribeContactListResult::getMessage()const
{
	return message_;
}

int DescribeContactListResult::getTotal()const
{
	return total_;
}

std::string DescribeContactListResult::getCode()const
{
	return code_;
}

bool DescribeContactListResult::getSuccess()const
{
	return success_;
}

