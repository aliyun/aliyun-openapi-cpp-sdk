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

#include <alibabacloud/adb/model/ListSparkLogAnalyzeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

ListSparkLogAnalyzeTasksResult::ListSparkLogAnalyzeTasksResult() :
	ServiceResult()
{}

ListSparkLogAnalyzeTasksResult::ListSparkLogAnalyzeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSparkLogAnalyzeTasksResult::~ListSparkLogAnalyzeTasksResult()
{}

void ListSparkLogAnalyzeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allTaskListNode = dataNode["TaskList"]["Task"];
	for (auto dataNodeTaskListTask : allTaskListNode)
	{
		Data::Task taskObject;
		if(!dataNodeTaskListTask["TaskId"].isNull())
			taskObject.taskId = std::stol(dataNodeTaskListTask["TaskId"].asString());
		if(!dataNodeTaskListTask["UserId"].isNull())
			taskObject.userId = std::stol(dataNodeTaskListTask["UserId"].asString());
		if(!dataNodeTaskListTask["SubmittedTimeInMillis"].isNull())
			taskObject.submittedTimeInMillis = std::stol(dataNodeTaskListTask["SubmittedTimeInMillis"].asString());
		if(!dataNodeTaskListTask["TerminatedTimeInMillis"].isNull())
			taskObject.terminatedTimeInMillis = std::stol(dataNodeTaskListTask["TerminatedTimeInMillis"].asString());
		if(!dataNodeTaskListTask["TaskState"].isNull())
			taskObject.taskState = dataNodeTaskListTask["TaskState"].asString();
		if(!dataNodeTaskListTask["StartedTimeInMillis"].isNull())
			taskObject.startedTimeInMillis = std::stol(dataNodeTaskListTask["StartedTimeInMillis"].asString());
		if(!dataNodeTaskListTask["RuleMatched"].isNull())
			taskObject.ruleMatched = dataNodeTaskListTask["RuleMatched"].asString() == "true";
		if(!dataNodeTaskListTask["TaskErrMsg"].isNull())
			taskObject.taskErrMsg = dataNodeTaskListTask["TaskErrMsg"].asString();
		if(!dataNodeTaskListTask["DBClusterId"].isNull())
			taskObject.dBClusterId = dataNodeTaskListTask["DBClusterId"].asString();
		auto resultNode = value["Result"];
		if(!resultNode["AppErrorCode"].isNull())
			taskObject.result.appErrorCode = resultNode["AppErrorCode"].asString();
		if(!resultNode["AppErrorLog"].isNull())
			taskObject.result.appErrorLog = resultNode["AppErrorLog"].asString();
		if(!resultNode["AppErrorAdvice"].isNull())
			taskObject.result.appErrorAdvice = resultNode["AppErrorAdvice"].asString();
		data_.taskList.push_back(taskObject);
	}

}

ListSparkLogAnalyzeTasksResult::Data ListSparkLogAnalyzeTasksResult::getData()const
{
	return data_;
}

