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

#include <alibabacloud/emr/model/MetastoreListTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListTaskResult::MetastoreListTaskResult() :
	ServiceResult()
{}

MetastoreListTaskResult::MetastoreListTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListTaskResult::~MetastoreListTaskResult()
{}

void MetastoreListTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTaskList = value["TaskList"]["Task"];
	for (auto value : allTaskList)
	{
		Task taskListObject;
		if(!value["BizId"].isNull())
			taskListObject.bizId = value["BizId"].asString();
		if(!value["TaskType"].isNull())
			taskListObject.taskType = value["TaskType"].asString();
		if(!value["TaskObject"].isNull())
			taskListObject.taskObject = value["TaskObject"].asString();
		if(!value["TaskStatus"].isNull())
			taskListObject.taskStatus = value["TaskStatus"].asString();
		if(!value["StartTime"].isNull())
			taskListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			taskListObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["TaskProcess"].isNull())
			taskListObject.taskProcess = std::stoi(value["TaskProcess"].asString());
		if(!value["TriggerUser"].isNull())
			taskListObject.triggerUser = value["TriggerUser"].asString();
		if(!value["TriggerType"].isNull())
			taskListObject.triggerType = value["TriggerType"].asString();
		if(!value["GmtCreate"].isNull())
			taskListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			taskListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["ExecuteTime"].isNull())
			taskListObject.executeTime = std::stol(value["ExecuteTime"].asString());
		taskList_.push_back(taskListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListTaskResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListTaskResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<MetastoreListTaskResult::Task> MetastoreListTaskResult::getTaskList()const
{
	return taskList_;
}

