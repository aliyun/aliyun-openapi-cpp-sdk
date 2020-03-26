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

#include <alibabacloud/trademark/model/QueryTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

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
	auto allDataNode = value["Data"]["TaskList"];
	for (auto valueDataTaskList : allDataNode)
	{
		TaskList dataObject;
		if(!valueDataTaskList["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataTaskList["TaskStatus"].asString();
		if(!valueDataTaskList["TaskType"].isNull())
			dataObject.taskType = valueDataTaskList["TaskType"].asString();
		if(!valueDataTaskList["ErrMsg"].isNull())
			dataObject.errMsg = valueDataTaskList["ErrMsg"].asString();
		if(!valueDataTaskList["Result"].isNull())
			dataObject.result = valueDataTaskList["Result"].asString();
		if(!valueDataTaskList["FileName"].isNull())
			dataObject.fileName = valueDataTaskList["FileName"].asString();
		if(!valueDataTaskList["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataTaskList["CreateTime"].asString());
		if(!valueDataTaskList["CompleteTime"].isNull())
			dataObject.completeTime = std::stol(valueDataTaskList["CompleteTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

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

std::vector<QueryTaskListResult::TaskList> QueryTaskListResult::getData()const
{
	return data_;
}

int QueryTaskListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

