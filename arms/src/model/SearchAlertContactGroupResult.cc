<<<<<<< HEAD
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

#include <alibabacloud/arms/model/SearchAlertContactGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertContactGroupResult::SearchAlertContactGroupResult() :
	ServiceResult()
{}

SearchAlertContactGroupResult::SearchAlertContactGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertContactGroupResult::~SearchAlertContactGroupResult()
{}

void SearchAlertContactGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string SearchAlertContactGroupResult::getData()const
{
	return data_;
=======
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

#include <alibabacloud/arms/model/SearchAlertContactGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertContactGroupResult::SearchAlertContactGroupResult() :
	ServiceResult()
{}

SearchAlertContactGroupResult::SearchAlertContactGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertContactGroupResult::~SearchAlertContactGroupResult()
{}

void SearchAlertContactGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allContactGroups = value["ContactGroups"]["ContactGroup"];
	for (auto value : allContactGroups)
	{
		ContactGroup contactGroupsObject;
		if(!value["ContactGroupId"].isNull())
			contactGroupsObject.contactGroupId = std::stol(value["ContactGroupId"].asString());
		if(!value["ContactGroupName"].isNull())
			contactGroupsObject.contactGroupName = value["ContactGroupName"].asString();
		if(!value["UserId"].isNull())
			contactGroupsObject.userId = value["UserId"].asString();
		if(!value["CreateTime"].isNull())
			contactGroupsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			contactGroupsObject.updateTime = std::stol(value["UpdateTime"].asString());
		contactGroups_.push_back(contactGroupsObject);
	}

}

std::vector<SearchAlertContactGroupResult::ContactGroup> SearchAlertContactGroupResult::getContactGroups()const
{
	return contactGroups_;
>>>>>>> master
}

