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

#include <alibabacloud/arms/model/DescribeContactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeContactsResult::DescribeContactsResult() :
	ServiceResult()
{}

DescribeContactsResult::DescribeContactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactsResult::~DescribeContactsResult()
{}

void DescribeContactsResult::parse(const std::string &payload)
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
	auto allAlertContactsNode = pageBeanNode["AlertContacts"]["contacts"];
	for (auto pageBeanNodeAlertContactscontacts : allAlertContactsNode)
	{
		PageBean::Contacts contactsObject;
		if(!pageBeanNodeAlertContactscontacts["ContactId"].isNull())
			contactsObject.contactId = std::stof(pageBeanNodeAlertContactscontacts["ContactId"].asString());
		if(!pageBeanNodeAlertContactscontacts["ContactName"].isNull())
			contactsObject.contactName = pageBeanNodeAlertContactscontacts["ContactName"].asString();
		if(!pageBeanNodeAlertContactscontacts["Phone"].isNull())
			contactsObject.phone = pageBeanNodeAlertContactscontacts["Phone"].asString();
		if(!pageBeanNodeAlertContactscontacts["Email"].isNull())
			contactsObject.email = pageBeanNodeAlertContactscontacts["Email"].asString();
		if(!pageBeanNodeAlertContactscontacts["IsVerify"].isNull())
			contactsObject.isVerify = pageBeanNodeAlertContactscontacts["IsVerify"].asString() == "true";
		if(!pageBeanNodeAlertContactscontacts["ReissueSendNotice"].isNull())
			contactsObject.reissueSendNotice = std::stol(pageBeanNodeAlertContactscontacts["ReissueSendNotice"].asString());
		if(!pageBeanNodeAlertContactscontacts["IsEmailVerify"].isNull())
			contactsObject.isEmailVerify = pageBeanNodeAlertContactscontacts["IsEmailVerify"].asString() == "true";
		if(!pageBeanNodeAlertContactscontacts["ArmsContactId"].isNull())
			contactsObject.armsContactId = std::stol(pageBeanNodeAlertContactscontacts["ArmsContactId"].asString());
		if(!pageBeanNodeAlertContactscontacts["DingRobotUrl"].isNull())
			contactsObject.dingRobotUrl = pageBeanNodeAlertContactscontacts["DingRobotUrl"].asString();
		if(!pageBeanNodeAlertContactscontacts["Webhook"].isNull())
			contactsObject.webhook = pageBeanNodeAlertContactscontacts["Webhook"].asString();
		pageBean_.alertContacts.push_back(contactsObject);
	}

}

DescribeContactsResult::PageBean DescribeContactsResult::getPageBean()const
{
	return pageBean_;
}

