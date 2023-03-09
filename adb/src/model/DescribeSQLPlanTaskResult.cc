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

#include <alibabacloud/adb/model/DescribeSQLPlanTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSQLPlanTaskResult::DescribeSQLPlanTaskResult() :
	ServiceResult()
{}

DescribeSQLPlanTaskResult::DescribeSQLPlanTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLPlanTaskResult::~DescribeSQLPlanTaskResult()
{}

void DescribeSQLPlanTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskListNode = value["TaskList"]["SqlPlanTask"];
	for (auto valueTaskListSqlPlanTask : allTaskListNode)
	{
		SqlPlanTask taskListObject;
		if(!valueTaskListSqlPlanTask["ScanCost"].isNull())
			taskListObject.scanCost = std::stol(valueTaskListSqlPlanTask["ScanCost"].asString());
		if(!valueTaskListSqlPlanTask["OutputSize"].isNull())
			taskListObject.outputSize = std::stol(valueTaskListSqlPlanTask["OutputSize"].asString());
		if(!valueTaskListSqlPlanTask["InputSize"].isNull())
			taskListObject.inputSize = std::stol(valueTaskListSqlPlanTask["InputSize"].asString());
		if(!valueTaskListSqlPlanTask["State"].isNull())
			taskListObject.state = valueTaskListSqlPlanTask["State"].asString();
		if(!valueTaskListSqlPlanTask["OperatorCost"].isNull())
			taskListObject.operatorCost = std::stol(valueTaskListSqlPlanTask["OperatorCost"].asString());
		if(!valueTaskListSqlPlanTask["OutputRows"].isNull())
			taskListObject.outputRows = std::stol(valueTaskListSqlPlanTask["OutputRows"].asString());
		if(!valueTaskListSqlPlanTask["ScanSize"].isNull())
			taskListObject.scanSize = std::stol(valueTaskListSqlPlanTask["ScanSize"].asString());
		if(!valueTaskListSqlPlanTask["ElapsedTime"].isNull())
			taskListObject.elapsedTime = std::stol(valueTaskListSqlPlanTask["ElapsedTime"].asString());
		if(!valueTaskListSqlPlanTask["ScanRows"].isNull())
			taskListObject.scanRows = std::stol(valueTaskListSqlPlanTask["ScanRows"].asString());
		if(!valueTaskListSqlPlanTask["PeakMemory"].isNull())
			taskListObject.peakMemory = std::stol(valueTaskListSqlPlanTask["PeakMemory"].asString());
		if(!valueTaskListSqlPlanTask["TaskId"].isNull())
			taskListObject.taskId = std::stoi(valueTaskListSqlPlanTask["TaskId"].asString());
		if(!valueTaskListSqlPlanTask["InputRows"].isNull())
			taskListObject.inputRows = std::stol(valueTaskListSqlPlanTask["InputRows"].asString());
		taskList_.push_back(taskListObject);
	}

}

std::vector<DescribeSQLPlanTaskResult::SqlPlanTask> DescribeSQLPlanTaskResult::getTaskList()const
{
	return taskList_;
}

