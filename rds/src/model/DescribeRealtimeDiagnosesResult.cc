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

#include <alibabacloud/rds/model/DescribeRealtimeDiagnosesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRealtimeDiagnosesResult::DescribeRealtimeDiagnosesResult() :
	ServiceResult()
{}

DescribeRealtimeDiagnosesResult::DescribeRealtimeDiagnosesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRealtimeDiagnosesResult::~DescribeRealtimeDiagnosesResult()
{}

void DescribeRealtimeDiagnosesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["RealtimeDiagnoseTasks"];
	for (auto value : allTasks)
	{
		RealtimeDiagnoseTasks tasksObject;
		if(!value["CreateTime"].isNull())
			tasksObject.createTime = value["CreateTime"].asString();
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["HealthScore"].isNull())
			tasksObject.healthScore = value["HealthScore"].asString();
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeRealtimeDiagnosesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeRealtimeDiagnosesResult::RealtimeDiagnoseTasks> DescribeRealtimeDiagnosesResult::getTasks()const
{
	return tasks_;
}

int DescribeRealtimeDiagnosesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeRealtimeDiagnosesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeRealtimeDiagnosesResult::getEngine()const
{
	return engine_;
}

