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

#include <alibabacloud/emr/model/ListBackupPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListBackupPlansResult::ListBackupPlansResult() :
	ServiceResult()
{}

ListBackupPlansResult::ListBackupPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBackupPlansResult::~ListBackupPlansResult()
{}

void ListBackupPlansResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
		if(!value["ClusterId"].isNull())
			itemsObject.clusterId = value["ClusterId"].asString();
		if(!value["RootPath"].isNull())
			itemsObject.rootPath = value["RootPath"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListBackupPlansResult::getTotalCount()const
{
	return totalCount_;
}

int ListBackupPlansResult::getPageSize()const
{
	return pageSize_;
}

int ListBackupPlansResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListBackupPlansResult::Item> ListBackupPlansResult::getItems()const
{
	return items_;
}

