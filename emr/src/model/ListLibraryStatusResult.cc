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

#include <alibabacloud/emr/model/ListLibraryStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListLibraryStatusResult::ListLibraryStatusResult() :
	ServiceResult()
{}

ListLibraryStatusResult::ListLibraryStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLibraryStatusResult::~ListLibraryStatusResult()
{}

void ListLibraryStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["LibraryBizId"].isNull())
			itemsObject.libraryBizId = valueItemsItem["LibraryBizId"].asString();
		if(!valueItemsItem["LibraryName"].isNull())
			itemsObject.libraryName = valueItemsItem["LibraryName"].asString();
		if(!valueItemsItem["ClusterBizId"].isNull())
			itemsObject.clusterBizId = valueItemsItem["ClusterBizId"].asString();
		if(!valueItemsItem["ClusterName"].isNull())
			itemsObject.clusterName = valueItemsItem["ClusterName"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListLibraryStatusResult::getTotalCount()const
{
	return totalCount_;
}

int ListLibraryStatusResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLibraryStatusResult::getNextToken()const
{
	return nextToken_;
}

int ListLibraryStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListLibraryStatusResult::Item> ListLibraryStatusResult::getItems()const
{
	return items_;
}

