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

#include <alibabacloud/emr/model/ListClusterOperationHostTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterOperationHostTaskResult::ListClusterOperationHostTaskResult() :
	ServiceResult()
{}

ListClusterOperationHostTaskResult::ListClusterOperationHostTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterOperationHostTaskResult::~ListClusterOperationHostTaskResult()
{}

void ListClusterOperationHostTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterOperationHostTaskListNode = value["ClusterOperationHostTaskList"]["ClusterOperationHostTask"];
	for (auto valueClusterOperationHostTaskListClusterOperationHostTask : allClusterOperationHostTaskListNode)
	{
		ClusterOperationHostTask clusterOperationHostTaskListObject;
		if(!valueClusterOperationHostTaskListClusterOperationHostTask["TaskId"].isNull())
			clusterOperationHostTaskListObject.taskId = valueClusterOperationHostTaskListClusterOperationHostTask["TaskId"].asString();
		if(!valueClusterOperationHostTaskListClusterOperationHostTask["TaskName"].isNull())
			clusterOperationHostTaskListObject.taskName = valueClusterOperationHostTaskListClusterOperationHostTask["TaskName"].asString();
		if(!valueClusterOperationHostTaskListClusterOperationHostTask["Status"].isNull())
			clusterOperationHostTaskListObject.status = valueClusterOperationHostTaskListClusterOperationHostTask["Status"].asString();
		if(!valueClusterOperationHostTaskListClusterOperationHostTask["Percentage"].isNull())
			clusterOperationHostTaskListObject.percentage = valueClusterOperationHostTaskListClusterOperationHostTask["Percentage"].asString();
		clusterOperationHostTaskList_.push_back(clusterOperationHostTaskListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClusterOperationHostTaskResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterOperationHostTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterOperationHostTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClusterOperationHostTaskResult::ClusterOperationHostTask> ListClusterOperationHostTaskResult::getClusterOperationHostTaskList()const
{
	return clusterOperationHostTaskList_;
}

