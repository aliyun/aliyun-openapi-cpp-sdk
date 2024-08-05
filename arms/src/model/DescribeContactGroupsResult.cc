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

#include <alibabacloud/arms/model/DescribeContactGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeContactGroupsResult::DescribeContactGroupsResult() :
	ServiceResult()
{}

DescribeContactGroupsResult::DescribeContactGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactGroupsResult::~DescribeContactGroupsResult()
{}

void DescribeContactGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allAlertContactGroupsNode = pageBeanNode["AlertContactGroups"]["contactGroups"];
	for (auto pageBeanNodeAlertContactGroupscontactGroups : allAlertContactGroupsNode)
	{
		PageBean::ContactGroups contactGroupsObject;
		if(!pageBeanNodeAlertContactGroupscontactGroups["ContactGroupId"].isNull())
			contactGroupsObject.contactGroupId = std::stof(pageBeanNodeAlertContactGroupscontactGroups["ContactGroupId"].asString());
		if(!pageBeanNodeAlertContactGroupscontactGroups["ContactGroupName"].isNull())
			contactGroupsObject.contactGroupName = pageBeanNodeAlertContactGroupscontactGroups["ContactGroupName"].asString();
		if(!pageBeanNodeAlertContactGroupscontactGroups["ArmsContactGroupId"].isNull())
			contactGroupsObject.armsContactGroupId = std::stol(pageBeanNodeAlertContactGroupscontactGroups["ArmsContactGroupId"].asString());
		auto allContactsNode = pageBeanNodeAlertContactGroupscontactGroups["Contacts"]["contactsItem"];
		for (auto pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem : allContactsNode)
		{
			PageBean::ContactGroups::ContactsItem contactsObject;
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ContactId"].isNull())
				contactsObject.contactId = std::stof(pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ContactId"].asString());
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ContactName"].isNull())
				contactsObject.contactName = pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ContactName"].asString();
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Phone"].isNull())
				contactsObject.phone = pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Phone"].asString();
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Email"].isNull())
				contactsObject.email = pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Email"].asString();
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ArmsContactId"].isNull())
				contactsObject.armsContactId = std::stol(pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["ArmsContactId"].asString());
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Webhook"].isNull())
				contactsObject.webhook = pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["Webhook"].asString();
			if(!pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["DingRobotUrl"].isNull())
				contactsObject.dingRobotUrl = pageBeanNodeAlertContactGroupscontactGroupsContactscontactsItem["DingRobotUrl"].asString();
			contactGroupsObject.contacts.push_back(contactsObject);
		}
		pageBean_.alertContactGroups.push_back(contactGroupsObject);
	}

}

DescribeContactGroupsResult::PageBean DescribeContactGroupsResult::getPageBean()const
{
	return pageBean_;
}

