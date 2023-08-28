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

#include <alibabacloud/paifeaturestore/model/ListTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListTasksResult::ListTasksResult() :
	ServiceResult()
{}

ListTasksResult::ListTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTasksResult::~ListTasksResult()
{}

void ListTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["TasksItem"];
	for (auto valueTasksTasksItem : allTasksNode)
	{
		TasksItem tasksObject;
		if(!valueTasksTasksItem["GmtCreateTime"].isNull())
			tasksObject.gmtCreateTime = valueTasksTasksItem["GmtCreateTime"].asString();
		if(!valueTasksTasksItem["GmtExecutedTime"].isNull())
			tasksObject.gmtExecutedTime = valueTasksTasksItem["GmtExecutedTime"].asString();
		if(!valueTasksTasksItem["GmtFinishedTime"].isNull())
			tasksObject.gmtFinishedTime = valueTasksTasksItem["GmtFinishedTime"].asString();
		if(!valueTasksTasksItem["ObjectId"].isNull())
			tasksObject.objectId = valueTasksTasksItem["ObjectId"].asString();
		if(!valueTasksTasksItem["ObjectType"].isNull())
			tasksObject.objectType = valueTasksTasksItem["ObjectType"].asString();
		if(!valueTasksTasksItem["ProjectId"].isNull())
			tasksObject.projectId = valueTasksTasksItem["ProjectId"].asString();
		if(!valueTasksTasksItem["ProjectName"].isNull())
			tasksObject.projectName = valueTasksTasksItem["ProjectName"].asString();
		if(!valueTasksTasksItem["Status"].isNull())
			tasksObject.status = valueTasksTasksItem["Status"].asString();
		if(!valueTasksTasksItem["TaskId"].isNull())
			tasksObject.taskId = valueTasksTasksItem["TaskId"].asString();
		if(!valueTasksTasksItem["Type"].isNull())
			tasksObject.type = valueTasksTasksItem["Type"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTasksResult::TasksItem> ListTasksResult::getTasks()const
{
	return tasks_;
}

