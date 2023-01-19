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

#include <alibabacloud/sas/model/GenerateOnceTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GenerateOnceTaskResult::GenerateOnceTaskResult() :
	ServiceResult()
{}

GenerateOnceTaskResult::GenerateOnceTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateOnceTaskResult::~GenerateOnceTaskResult()
{}

void GenerateOnceTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CanCreate"].isNull())
		canCreate_ = value["CanCreate"].asString() == "true";
	if(!value["LastTask"].isNull())
		lastTask_ = value["LastTask"].asString();
	if(!value["CollectTime"].isNull())
		collectTime_ = std::stol(value["CollectTime"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["FinishCount"].isNull())
		finishCount_ = std::stoi(value["FinishCount"].asString());

}

int GenerateOnceTaskResult::getTotalCount()const
{
	return totalCount_;
}

std::string GenerateOnceTaskResult::getTaskId()const
{
	return taskId_;
}

std::string GenerateOnceTaskResult::getLastTask()const
{
	return lastTask_;
}

long GenerateOnceTaskResult::getCollectTime()const
{
	return collectTime_;
}

int GenerateOnceTaskResult::getFinishCount()const
{
	return finishCount_;
}

bool GenerateOnceTaskResult::getCanCreate()const
{
	return canCreate_;
}

