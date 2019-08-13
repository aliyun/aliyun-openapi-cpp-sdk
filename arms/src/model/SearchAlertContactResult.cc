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
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	auto allContacts = value["Contacts"]["Contact"];
	for (auto value : allContacts)
	{
		PageBean::Contact contactObject;
		if(!value["ContactId"].isNull())
			contactObject.contactId = std::stol(value["ContactId"].asString());
		if(!value["ContactName"].isNull())
			contactObject.contactName = value["ContactName"].asString();
		if(!value["Phone"].isNull())
			contactObject.phone = value["Phone"].asString();
		if(!value["Email"].isNull())
			contactObject.email = value["Email"].asString();
		if(!value["UserId"].isNull())
			contactObject.userId = value["UserId"].asString();
		if(!value["DingRobot"].isNull())
			contactObject.dingRobot = value["DingRobot"].asString();
		if(!value["CreateTime"].isNull())
			contactObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			contactObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["SystemNoc"].isNull())
			contactObject.systemNoc = value["SystemNoc"].asString() == "true";
		pageBean_.contacts.push_back(contactObject);
	}

}

SearchAlertContactResult::PageBean SearchAlertContactResult::getPageBean()const
{
	return pageBean_;
}

