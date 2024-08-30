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

#include <alibabacloud/domain/model/QueryTaskDetailListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTaskDetailListResult::QueryTaskDetailListResult() :
	ServiceResult()
{}

QueryTaskDetailListResult::QueryTaskDetailListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskDetailListResult::~QueryTaskDetailListResult()
{}

void QueryTaskDetailListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TaskDetail"];
	for (auto valueDataTaskDetail : allDataNode)
	{
		TaskDetail dataObject;
		if(!valueDataTaskDetail["UpdateTime"].isNull())
			dataObject.updateTime = valueDataTaskDetail["UpdateTime"].asString();
		if(!valueDataTaskDetail["TaskDetailNo"].isNull())
			dataObject.taskDetailNo = valueDataTaskDetail["TaskDetailNo"].asString();
		if(!valueDataTaskDetail["CreateTime"].isNull())
			dataObject.createTime = valueDataTaskDetail["CreateTime"].asString();
		if(!valueDataTaskDetail["InstanceId"].isNull())
			dataObject.instanceId = valueDataTaskDetail["InstanceId"].asString();
		if(!valueDataTaskDetail["DomainName"].isNull())
			dataObject.domainName = valueDataTaskDetail["DomainName"].asString();
		if(!valueDataTaskDetail["TaskType"].isNull())
			dataObject.taskType = valueDataTaskDetail["TaskType"].asString();
		if(!valueDataTaskDetail["TaskNo"].isNull())
			dataObject.taskNo = valueDataTaskDetail["TaskNo"].asString();
		if(!valueDataTaskDetail["TaskResult"].isNull())
			dataObject.taskResult = valueDataTaskDetail["TaskResult"].asString();
		if(!valueDataTaskDetail["TaskStatusCode"].isNull())
			dataObject.taskStatusCode = std::stoi(valueDataTaskDetail["TaskStatusCode"].asString());
		if(!valueDataTaskDetail["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataTaskDetail["TaskStatus"].asString();
		if(!valueDataTaskDetail["TaskTypeDescription"].isNull())
			dataObject.taskTypeDescription = valueDataTaskDetail["TaskTypeDescription"].asString();
		if(!valueDataTaskDetail["TryCount"].isNull())
			dataObject.tryCount = std::stoi(valueDataTaskDetail["TryCount"].asString());
		if(!valueDataTaskDetail["ErrorMsg"].isNull())
			dataObject.errorMsg = valueDataTaskDetail["ErrorMsg"].asString();
		if(!valueDataTaskDetail["FailReason"].isNull())
			dataObject.failReason = valueDataTaskDetail["FailReason"].asString();
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

bool QueryTaskDetailListResult::getPrePage()const
{
	return prePage_;
}

int QueryTaskDetailListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTaskDetailListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTaskDetailListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTaskDetailListResult::TaskDetail> QueryTaskDetailListResult::getData()const
{
	return data_;
}

int QueryTaskDetailListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryTaskDetailListResult::getNextPage()const
{
	return nextPage_;
}

