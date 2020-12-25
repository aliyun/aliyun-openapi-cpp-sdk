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

#include <alibabacloud/emr/model/ListLibraryInstallTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListLibraryInstallTasksResult::ListLibraryInstallTasksResult() :
	ServiceResult()
{}

ListLibraryInstallTasksResult::ListLibraryInstallTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLibraryInstallTasksResult::~ListLibraryInstallTasksResult()
{}

void ListLibraryInstallTasksResult::parse(const std::string &payload)
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
		if(!valueItemsItem["TaskGroupId"].isNull())
			itemsObject.taskGroupId = valueItemsItem["TaskGroupId"].asString();
		if(!valueItemsItem["TaskId"].isNull())
			itemsObject.taskId = valueItemsItem["TaskId"].asString();
		if(!valueItemsItem["TaskStatus"].isNull())
			itemsObject.taskStatus = valueItemsItem["TaskStatus"].asString();
		if(!valueItemsItem["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsItem["StartTime"].asString());
		if(!valueItemsItem["EndTime"].isNull())
			itemsObject.endTime = std::stol(valueItemsItem["EndTime"].asString());
		if(!valueItemsItem["ExecuteTime"].isNull())
			itemsObject.executeTime = std::stol(valueItemsItem["ExecuteTime"].asString());
		if(!valueItemsItem["TaskProcess"].isNull())
			itemsObject.taskProcess = std::stoi(valueItemsItem["TaskProcess"].asString());
		if(!valueItemsItem["TaskType"].isNull())
			itemsObject.taskType = valueItemsItem["TaskType"].asString();
		if(!valueItemsItem["Detail"].isNull())
			itemsObject.detail = valueItemsItem["Detail"].asString();
		if(!valueItemsItem["ClusterBizId"].isNull())
			itemsObject.clusterBizId = valueItemsItem["ClusterBizId"].asString();
		if(!valueItemsItem["Hostname"].isNull())
			itemsObject.hostname = valueItemsItem["Hostname"].asString();
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

int ListLibraryInstallTasksResult::getTotalCount()const
{
	return totalCount_;
}

int ListLibraryInstallTasksResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLibraryInstallTasksResult::getNextToken()const
{
	return nextToken_;
}

int ListLibraryInstallTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListLibraryInstallTasksResult::Item> ListLibraryInstallTasksResult::getItems()const
{
	return items_;
}

