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

#include <alibabacloud/polardb/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["FinishTime"].isNull())
			tasksObject.finishTime = valueTasksTask["FinishTime"].asString();
		if(!valueTasksTask["StepsInfo"].isNull())
			tasksObject.stepsInfo = valueTasksTask["StepsInfo"].asString();
		if(!valueTasksTask["Progress"].isNull())
			tasksObject.progress = std::stoi(valueTasksTask["Progress"].asString());
		if(!valueTasksTask["ExpectedFinishTime"].isNull())
			tasksObject.expectedFinishTime = valueTasksTask["ExpectedFinishTime"].asString();
		if(!valueTasksTask["BeginTime"].isNull())
			tasksObject.beginTime = valueTasksTask["BeginTime"].asString();
		if(!valueTasksTask["TaskErrorCode"].isNull())
			tasksObject.taskErrorCode = valueTasksTask["TaskErrorCode"].asString();
		if(!valueTasksTask["ProgressInfo"].isNull())
			tasksObject.progressInfo = valueTasksTask["ProgressInfo"].asString();
		if(!valueTasksTask["CurrentStepName"].isNull())
			tasksObject.currentStepName = valueTasksTask["CurrentStepName"].asString();
		if(!valueTasksTask["StepProgressInfo"].isNull())
			tasksObject.stepProgressInfo = valueTasksTask["StepProgressInfo"].asString();
		if(!valueTasksTask["TaskErrorMessage"].isNull())
			tasksObject.taskErrorMessage = valueTasksTask["TaskErrorMessage"].asString();
		if(!valueTasksTask["TaskAction"].isNull())
			tasksObject.taskAction = valueTasksTask["TaskAction"].asString();
		if(!valueTasksTask["DBName"].isNull())
			tasksObject.dBName = valueTasksTask["DBName"].asString();
		if(!valueTasksTask["Remain"].isNull())
			tasksObject.remain = std::stoi(valueTasksTask["Remain"].asString());
		if(!valueTasksTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksTask["TaskId"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

int DescribeTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeTasksResult::Task> DescribeTasksResult::getTasks()const
{
	return tasks_;
}

int DescribeTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeTasksResult::getEndTime()const
{
	return endTime_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeTasksResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeTasksResult::getDBClusterId()const
{
	return dBClusterId_;
}

