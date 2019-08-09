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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["TaskInfo"];
	for (auto value : allData)
	{
		TaskInfo dataObject;
		if(!value["TaskType"].isNull())
			dataObject.taskType = value["TaskType"].asString();
		if(!value["TaskNum"].isNull())
			dataObject.taskNum = std::stoi(value["TaskNum"].asString());
		if(!value["TaskStatus"].isNull())
			dataObject.taskStatus = value["TaskStatus"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = value["CreateTime"].asString();
		if(!value["Clientip"].isNull())
			dataObject.clientip = value["Clientip"].asString();
		if(!value["TaskNo"].isNull())
			dataObject.taskNo = value["TaskNo"].asString();
		if(!value["TaskStatusCode"].isNull())
			dataObject.taskStatusCode = std::stoi(value["TaskStatusCode"].asString());
		if(!value["TaskTypeDescription"].isNull())
			dataObject.taskTypeDescription = value["TaskTypeDescription"].asString();
		if(!value["TaskCancelStatus"].isNull())
			dataObject.taskCancelStatus = value["TaskCancelStatus"].asString();
		if(!value["TaskCancelStatusCode"].isNull())
			dataObject.taskCancelStatusCode = std::stoi(value["TaskCancelStatusCode"].asString());
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
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

