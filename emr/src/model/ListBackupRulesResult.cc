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

#include <alibabacloud/emr/model/ListBackupRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListBackupRulesResult::ListBackupRulesResult() :
	ServiceResult()
{}

ListBackupRulesResult::ListBackupRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBackupRulesResult::~ListBackupRulesResult()
{}

void ListBackupRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["MetadataType"].isNull())
			itemsObject.metadataType = value["MetadataType"].asString();
		if(!value["BackupMethodType"].isNull())
			itemsObject.backupMethodType = value["BackupMethodType"].asString();
		if(!value["BackupPlanId"].isNull())
			itemsObject.backupPlanId = value["BackupPlanId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListBackupRulesResult::getTotalCount()const
{
	return totalCount_;
}

int ListBackupRulesResult::getPageSize()const
{
	return pageSize_;
}

int ListBackupRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListBackupRulesResult::Item> ListBackupRulesResult::getItems()const
{
	return items_;
}

