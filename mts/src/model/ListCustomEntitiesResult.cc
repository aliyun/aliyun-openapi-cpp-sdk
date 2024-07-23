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

#include <alibabacloud/mts/model/ListCustomEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListCustomEntitiesResult::ListCustomEntitiesResult() :
	ServiceResult()
{}

ListCustomEntitiesResult::ListCustomEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomEntitiesResult::~ListCustomEntitiesResult()
{}

void ListCustomEntitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomEntitiesNode = value["CustomEntities"]["CustomEntity"];
	for (auto valueCustomEntitiesCustomEntity : allCustomEntitiesNode)
	{
		CustomEntity customEntitiesObject;
		if(!valueCustomEntitiesCustomEntity["CustomEntityId"].isNull())
			customEntitiesObject.customEntityId = valueCustomEntitiesCustomEntity["CustomEntityId"].asString();
		if(!valueCustomEntitiesCustomEntity["CustomEntityName"].isNull())
			customEntitiesObject.customEntityName = valueCustomEntitiesCustomEntity["CustomEntityName"].asString();
		if(!valueCustomEntitiesCustomEntity["CustomEntityInfo"].isNull())
			customEntitiesObject.customEntityInfo = valueCustomEntitiesCustomEntity["CustomEntityInfo"].asString();
		customEntities_.push_back(customEntitiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListCustomEntitiesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListCustomEntitiesResult::CustomEntity> ListCustomEntitiesResult::getCustomEntities()const
{
	return customEntities_;
}

int ListCustomEntitiesResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomEntitiesResult::getPageNumber()const
{
	return pageNumber_;
}

