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
		RealtimeDiagnoseTasks realtimeDiagnoseTasksObject;
		realtimeDiagnoseTasksObject.createTime = value["CreateTime"].asString();
		realtimeDiagnoseTasksObject.taskId = value["TaskId"].asString();
		realtimeDiagnoseTasksObject.healthScore = value["HealthScore"].asString();
		realtimeDiagnoseTasksObject.status = value["Status"].asString();
		tasks_.push_back(realtimeDiagnoseTasksObject);
	}
	engine_ = value["Engine"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeRealtimeDiagnosesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeRealtimeDiagnosesResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeRealtimeDiagnosesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeRealtimeDiagnosesResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeRealtimeDiagnosesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRealtimeDiagnosesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeRealtimeDiagnosesResult::getEngine()const
{
	return engine_;
}

void DescribeRealtimeDiagnosesResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

