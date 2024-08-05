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

#include <alibabacloud/arms/model/SearchAlertContactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertContactResult::SearchAlertContactResult() :
	ServiceResult()
{}

SearchAlertContactResult::SearchAlertContactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertContactResult::~SearchAlertContactResult()
{}

void SearchAlertContactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allContactsNode = pageBeanNode["Contacts"]["Contact"];
	for (auto pageBeanNodeContactsContact : allContactsNode)
	{
		PageBean::Contact contactObject;
		if(!pageBeanNodeContactsContact["UpdateTime"].isNull())
			contactObject.updateTime = std::stol(pageBeanNodeContactsContact["UpdateTime"].asString());
		if(!pageBeanNodeContactsContact["DingRobot"].isNull())
			contactObject.dingRobot = pageBeanNodeContactsContact["DingRobot"].asString();
		if(!pageBeanNodeContactsContact["Webhook"].isNull())
			contactObject.webhook = pageBeanNodeContactsContact["Webhook"].asString();
		if(!pageBeanNodeContactsContact["Email"].isNull())
			contactObject.email = pageBeanNodeContactsContact["Email"].asString();
		if(!pageBeanNodeContactsContact["ContactId"].isNull())
			contactObject.contactId = std::stol(pageBeanNodeContactsContact["ContactId"].asString());
		if(!pageBeanNodeContactsContact["CreateTime"].isNull())
			contactObject.createTime = std::stol(pageBeanNodeContactsContact["CreateTime"].asString());
		if(!pageBeanNodeContactsContact["UserId"].isNull())
			contactObject.userId = pageBeanNodeContactsContact["UserId"].asString();
		if(!pageBeanNodeContactsContact["ContactName"].isNull())
			contactObject.contactName = pageBeanNodeContactsContact["ContactName"].asString();
		if(!pageBeanNodeContactsContact["SystemNoc"].isNull())
			contactObject.systemNoc = pageBeanNodeContactsContact["SystemNoc"].asString() == "true";
		if(!pageBeanNodeContactsContact["Content"].isNull())
			contactObject.content = pageBeanNodeContactsContact["Content"].asString();
		if(!pageBeanNodeContactsContact["Phone"].isNull())
			contactObject.phone = pageBeanNodeContactsContact["Phone"].asString();
		if(!pageBeanNodeContactsContact["ResourceGroupId"].isNull())
			contactObject.resourceGroupId = pageBeanNodeContactsContact["ResourceGroupId"].asString();
		pageBean_.contacts.push_back(contactObject);
	}

}

SearchAlertContactResult::PageBean SearchAlertContactResult::getPageBean()const
{
	return pageBean_;
}

