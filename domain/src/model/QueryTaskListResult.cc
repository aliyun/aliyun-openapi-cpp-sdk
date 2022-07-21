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

#include <alibabacloud/domain/model/QueryTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTaskListResult::QueryTaskListResult() :
	ServiceResult()
{}

QueryTaskListResult::QueryTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskListResult::~QueryTaskListResult()
{}

void QueryTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TaskInfo"];
	for (auto valueDataTaskInfo : allDataNode)
	{
		TaskInfo dataObject;
		if(!valueDataTaskInfo["TaskType"].isNull())
			dataObject.taskType = valueDataTaskInfo["TaskType"].asString();
		if(!valueDataTaskInfo["TaskCancelStatus"].isNull())
			dataObject.taskCancelStatus = valueDataTaskInfo["TaskCancelStatus"].asString();
		if(!valueDataTaskInfo["TaskNo"].isNull())
			dataObject.taskNo = valueDataTaskInfo["TaskNo"].asString();
		if(!valueDataTaskInfo["TaskCancelStatusCode"].isNull())
			dataObject.taskCancelStatusCode = std::stoi(valueDataTaskInfo["TaskCancelStatusCode"].asString());
		if(!valueDataTaskInfo["TaskStatusCode"].isNull())
			dataObject.taskStatusCode = std::stoi(valueDataTaskInfo["TaskStatusCode"].asString());
		if(!valueDataTaskInfo["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataTaskInfo["TaskStatus"].asString();
		if(!valueDataTaskInfo["TaskTypeDescription"].isNull())
			dataObject.taskTypeDescription = valueDataTaskInfo["TaskTypeDescription"].asString();
		if(!valueDataTaskInfo["TaskNum"].isNull())
			dataObject.taskNum = std::stoi(valueDataTaskInfo["TaskNum"].asString());
		if(!valueDataTaskInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataTaskInfo["CreateTime"].asString();
		if(!valueDataTaskInfo["Clientip"].isNull())
			dataObject.clientip = valueDataTaskInfo["Clientip"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool QueryTaskListResult::getPrePage()const
{
	return prePage_;
}

int QueryTaskListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTaskListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTaskListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTaskListResult::TaskInfo> QueryTaskListResult::getData()const
{
	return data_;
}

int QueryTaskListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryTaskListResult::getNextPage()const
{
	return nextPage_;
}

