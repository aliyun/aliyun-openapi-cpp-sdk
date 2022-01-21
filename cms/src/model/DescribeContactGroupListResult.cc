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

#include <alibabacloud/cms/model/DescribeContactGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeContactGroupListResult::DescribeContactGroupListResult() :
	ServiceResult()
{}

DescribeContactGroupListResult::DescribeContactGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactGroupListResult::~DescribeContactGroupListResult()
{}

void DescribeContactGroupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactGroupListNode = value["ContactGroupList"]["ContactGroup"];
	for (auto valueContactGroupListContactGroup : allContactGroupListNode)
	{
		ContactGroup contactGroupListObject;
		if(!valueContactGroupListContactGroup["Describe"].isNull())
			contactGroupListObject.describe = valueContactGroupListContactGroup["Describe"].asString();
		if(!valueContactGroupListContactGroup["UpdateTime"].isNull())
			contactGroupListObject.updateTime = std::stol(valueContactGroupListContactGroup["UpdateTime"].asString());
		if(!valueContactGroupListContactGroup["CreateTime"].isNull())
			contactGroupListObject.createTime = std::stol(valueContactGroupListContactGroup["CreateTime"].asString());
		if(!valueContactGroupListContactGroup["EnabledWeeklyReport"].isNull())
			contactGroupListObject.enabledWeeklyReport = valueContactGroupListContactGroup["EnabledWeeklyReport"].asString() == "true";
		if(!valueContactGroupListContactGroup["Name"].isNull())
			contactGroupListObject.name = valueContactGroupListContactGroup["Name"].asString();
		if(!valueContactGroupListContactGroup["EnableSubscribed"].isNull())
			contactGroupListObject.enableSubscribed = valueContactGroupListContactGroup["EnableSubscribed"].asString() == "true";
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
			contactGroupListObject.contacts.push_back(value.asString());
		contactGroupList_.push_back(contactGroupListObject);
	}
	auto allContactGroups = value["ContactGroups"]["ContactGroup"];
	for (const auto &item : allContactGroups)
		contactGroups_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeContactGroupListResult::ContactGroup> DescribeContactGroupListResult::getContactGroupList()const
{
	return contactGroupList_;
}

std::vector<std::string> DescribeContactGroupListResult::getContactGroups()const
{
	return contactGroups_;
}

std::string DescribeContactGroupListResult::getMessage()const
{
	return message_;
}

int DescribeContactGroupListResult::getTotal()const
{
	return total_;
}

std::string DescribeContactGroupListResult::getCode()const
{
	return code_;
}

bool DescribeContactGroupListResult::getSuccess()const
{
	return success_;
}

