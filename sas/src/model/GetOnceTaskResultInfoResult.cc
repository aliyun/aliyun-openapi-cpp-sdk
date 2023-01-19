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

#include <alibabacloud/sas/model/GetOnceTaskResultInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetOnceTaskResultInfoResult::GetOnceTaskResultInfoResult() :
	ServiceResult()
{}

GetOnceTaskResultInfoResult::GetOnceTaskResultInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOnceTaskResultInfoResult::~GetOnceTaskResultInfoResult()
{}

void GetOnceTaskResultInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskInfoNode = value["TaskInfo"];
	if(!taskInfoNode["Status"].isNull())
		taskInfo_.status = taskInfoNode["Status"].asString();
	if(!value["CollectTime"].isNull())
		collectTime_ = std::stol(value["CollectTime"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());
	if(!value["FinishCount"].isNull())
		finishCount_ = std::stoi(value["FinishCount"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());

}

GetOnceTaskResultInfoResult::TaskInfo GetOnceTaskResultInfoResult::getTaskInfo()const
{
	return taskInfo_;
}

int GetOnceTaskResultInfoResult::getTotalCount()const
{
	return totalCount_;
}

long GetOnceTaskResultInfoResult::getTaskId()const
{
	return taskId_;
}

long GetOnceTaskResultInfoResult::getCollectTime()const
{
	return collectTime_;
}

int GetOnceTaskResultInfoResult::getFinishCount()const
{
	return finishCount_;
}

int GetOnceTaskResultInfoResult::getFailedCount()const
{
	return failedCount_;
}

int GetOnceTaskResultInfoResult::getSuccessCount()const
{
	return successCount_;
}

