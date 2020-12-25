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

#include <alibabacloud/emr/model/ListLibrariesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListLibrariesResult::ListLibrariesResult() :
	ServiceResult()
{}

ListLibrariesResult::ListLibrariesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLibrariesResult::~ListLibrariesResult()
{}

void ListLibrariesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["BizId"].isNull())
			itemsObject.bizId = valueItemsItem["BizId"].asString();
		if(!valueItemsItem["CreateTime"].isNull())
			itemsObject.createTime = std::stol(valueItemsItem["CreateTime"].asString());
		if(!valueItemsItem["Type"].isNull())
			itemsObject.type = valueItemsItem["Type"].asString();
		if(!valueItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItem["Name"].asString();
		if(!valueItemsItem["LibraryVersion"].isNull())
			itemsObject.libraryVersion = valueItemsItem["LibraryVersion"].asString();
		if(!valueItemsItem["SourceType"].isNull())
			itemsObject.sourceType = valueItemsItem["SourceType"].asString();
		if(!valueItemsItem["SourceLocation"].isNull())
			itemsObject.sourceLocation = valueItemsItem["SourceLocation"].asString();
		if(!valueItemsItem["Scope"].isNull())
			itemsObject.scope = valueItemsItem["Scope"].asString();
		if(!valueItemsItem["Properties"].isNull())
			itemsObject.properties = valueItemsItem["Properties"].asString();
		if(!valueItemsItem["UserId"].isNull())
			itemsObject.userId = valueItemsItem["UserId"].asString();
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

int ListLibrariesResult::getTotalCount()const
{
	return totalCount_;
}

int ListLibrariesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLibrariesResult::getNextToken()const
{
	return nextToken_;
}

int ListLibrariesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListLibrariesResult::Item> ListLibrariesResult::getItems()const
{
	return items_;
}

