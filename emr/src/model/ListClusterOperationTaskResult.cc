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

#include <alibabacloud/emr/model/ListClusterOperationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterOperationTaskResult::ListClusterOperationTaskResult() :
	ServiceResult()
{}

ListClusterOperationTaskResult::ListClusterOperationTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterOperationTaskResult::~ListClusterOperationTaskResult()
{}

void ListClusterOperationTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterOperationTaskListNode = value["ClusterOperationTaskList"]["ClusterOperationTask"];
	for (auto valueClusterOperationTaskListClusterOperationTask : allClusterOperationTaskListNode)
	{
		ClusterOperationTask clusterOperationTaskListObject;
		if(!valueClusterOperationTaskListClusterOperationTask["TaskId"].isNull())
			clusterOperationTaskListObject.taskId = valueClusterOperationTaskListClusterOperationTask["TaskId"].asString();
		if(!valueClusterOperationTaskListClusterOperationTask["TaskName"].isNull())
			clusterOperationTaskListObject.taskName = valueClusterOperationTaskListClusterOperationTask["TaskName"].asString();
		if(!valueClusterOperationTaskListClusterOperationTask["Status"].isNull())
			clusterOperationTaskListObject.status = valueClusterOperationTaskListClusterOperationTask["Status"].asString();
		if(!valueClusterOperationTaskListClusterOperationTask["Percentage"].isNull())
			clusterOperationTaskListObject.percentage = valueClusterOperationTaskListClusterOperationTask["Percentage"].asString();
		clusterOperationTaskList_.push_back(clusterOperationTaskListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClusterOperationTaskResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterOperationTaskResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListClusterOperationTaskResult::ClusterOperationTask> ListClusterOperationTaskResult::getClusterOperationTaskList()const
{
	return clusterOperationTaskList_;
}

int ListClusterOperationTaskResult::getPageNumber()const
{
	return pageNumber_;
}

