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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["TaskDetail"];
	for (auto value : allData)
	{
		TaskDetail dataObject;
		if(!value["TaskNo"].isNull())
			dataObject.taskNo = value["TaskNo"].asString();
		if(!value["TaskDetailNo"].isNull())
			dataObject.taskDetailNo = value["TaskDetailNo"].asString();
		if(!value["TaskType"].isNull())
			dataObject.taskType = value["TaskType"].asString();
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["TaskStatus"].isNull())
			dataObject.taskStatus = value["TaskStatus"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = value["UpdateTime"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = value["CreateTime"].asString();
		if(!value["TryCount"].isNull())
			dataObject.tryCount = std::stoi(value["TryCount"].asString());
		if(!value["ErrorMsg"].isNull())
			dataObject.errorMsg = value["ErrorMsg"].asString();
		if(!value["TaskStatusCode"].isNull())
			dataObject.taskStatusCode = std::stoi(value["TaskStatusCode"].asString());
		if(!value["TaskResult"].isNull())
			dataObject.taskResult = value["TaskResult"].asString();
		if(!value["TaskTypeDescription"].isNull())
			dataObject.taskTypeDescription = value["TaskTypeDescription"].asString();
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

