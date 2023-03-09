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

#include <alibabacloud/adb/model/DescribeDiagnosisTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDiagnosisTasksResult::DescribeDiagnosisTasksResult() :
	ServiceResult()
{}

DescribeDiagnosisTasksResult::DescribeDiagnosisTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisTasksResult::~DescribeDiagnosisTasksResult()
{}

void DescribeDiagnosisTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskListNode = value["TaskList"]["SqlTasks"];
	for (auto valueTaskListSqlTasks : allTaskListNode)
	{
		SqlTasks taskListObject;
		if(!valueTaskListSqlTasks["ScanCost"].isNull())
			taskListObject.scanCost = std::stol(valueTaskListSqlTasks["ScanCost"].asString());
		if(!valueTaskListSqlTasks["OutputDataSize"].isNull())
			taskListObject.outputDataSize = std::stol(valueTaskListSqlTasks["OutputDataSize"].asString());
		if(!valueTaskListSqlTasks["InputDataSize"].isNull())
			taskListObject.inputDataSize = std::stol(valueTaskListSqlTasks["InputDataSize"].asString());
		if(!valueTaskListSqlTasks["State"].isNull())
			taskListObject.state = valueTaskListSqlTasks["State"].asString();
		if(!valueTaskListSqlTasks["OperatorCost"].isNull())
			taskListObject.operatorCost = std::stol(valueTaskListSqlTasks["OperatorCost"].asString());
		if(!valueTaskListSqlTasks["OutputRows"].isNull())
			taskListObject.outputRows = std::stol(valueTaskListSqlTasks["OutputRows"].asString());
		if(!valueTaskListSqlTasks["ScanDataSize"].isNull())
			taskListObject.scanDataSize = std::stol(valueTaskListSqlTasks["ScanDataSize"].asString());
		if(!valueTaskListSqlTasks["ElapsedTime"].isNull())
			taskListObject.elapsedTime = std::stol(valueTaskListSqlTasks["ElapsedTime"].asString());
		if(!valueTaskListSqlTasks["ScanRows"].isNull())
			taskListObject.scanRows = std::stol(valueTaskListSqlTasks["ScanRows"].asString());
		if(!valueTaskListSqlTasks["PeakMemory"].isNull())
			taskListObject.peakMemory = std::stol(valueTaskListSqlTasks["PeakMemory"].asString());
		if(!valueTaskListSqlTasks["TaskId"].isNull())
			taskListObject.taskId = valueTaskListSqlTasks["TaskId"].asString();
		if(!valueTaskListSqlTasks["InputRows"].isNull())
			taskListObject.inputRows = std::stol(valueTaskListSqlTasks["InputRows"].asString());
		if(!valueTaskListSqlTasks["TaskCreateTime"].isNull())
			taskListObject.taskCreateTime = std::stol(valueTaskListSqlTasks["TaskCreateTime"].asString());
		if(!valueTaskListSqlTasks["TaskEndTime"].isNull())
			taskListObject.taskEndTime = std::stol(valueTaskListSqlTasks["TaskEndTime"].asString());
		if(!valueTaskListSqlTasks["TaskHost"].isNull())
			taskListObject.taskHost = valueTaskListSqlTasks["TaskHost"].asString();
		if(!valueTaskListSqlTasks["Drivers"].isNull())
			taskListObject.drivers = valueTaskListSqlTasks["Drivers"].asString();
		if(!valueTaskListSqlTasks["QueuedTime"].isNull())
			taskListObject.queuedTime = valueTaskListSqlTasks["QueuedTime"].asString();
		if(!valueTaskListSqlTasks["ComputeTimeRatio"].isNull())
			taskListObject.computeTimeRatio = valueTaskListSqlTasks["ComputeTimeRatio"].asString();
		taskList_.push_back(taskListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDiagnosisTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDiagnosisTasksResult::SqlTasks> DescribeDiagnosisTasksResult::getTaskList()const
{
	return taskList_;
}

