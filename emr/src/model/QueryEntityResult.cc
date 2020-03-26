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

#include <alibabacloud/emr/model/QueryEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

QueryEntityResult::QueryEntityResult() :
	ServiceResult()
{}

QueryEntityResult::QueryEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEntityResult::~QueryEntityResult()
{}

void QueryEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["TagId"].isNull())
			itemsObject.tagId = std::stol(valueItemsItem["TagId"].asString());
		if(!valueItemsItem["EntityType"].isNull())
			itemsObject.entityType = valueItemsItem["EntityType"].asString();
		if(!valueItemsItem["EntityId"].isNull())
			itemsObject.entityId = valueItemsItem["EntityId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryEntityResult::getTotalCount()const
{
	return totalCount_;
}

int QueryEntityResult::getPageSize()const
{
	return pageSize_;
}

int QueryEntityResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryEntityResult::Item> QueryEntityResult::getItems()const
{
	return items_;
}

