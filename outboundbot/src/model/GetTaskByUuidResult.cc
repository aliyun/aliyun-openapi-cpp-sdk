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

#include <alibabacloud/outboundbot/model/GetTaskByUuidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetTaskByUuidResult::GetTaskByUuidResult() :
	ServiceResult()
{}

GetTaskByUuidResult::GetTaskByUuidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskByUuidResult::~GetTaskByUuidResult()
{}

void GetTaskByUuidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskNode = value["Task"];
	if(!taskNode["JobGroupId"].isNull())
		task_.jobGroupId = taskNode["JobGroupId"].asString();
	if(!taskNode["EndTime"].isNull())
		task_.endTime = std::stol(taskNode["EndTime"].asString());
	if(!taskNode["EndReason"].isNull())
		task_.endReason = std::stoi(taskNode["EndReason"].asString());
	if(!taskNode["PlannedTime"].isNull())
		task_.plannedTime = std::stol(taskNode["PlannedTime"].asString());
	if(!taskNode["JobId"].isNull())
		task_.jobId = taskNode["JobId"].asString();
	if(!taskNode["CallId"].isNull())
		task_.callId = taskNode["CallId"].asString();
	if(!taskNode["CallingNumber"].isNull())
		task_.callingNumber = taskNode["CallingNumber"].asString();
	if(!taskNode["ActualTime"].isNull())
		task_.actualTime = std::stol(taskNode["ActualTime"].asString());
	if(!taskNode["InstanceId"].isNull())
		task_.instanceId = taskNode["InstanceId"].asString();
	if(!taskNode["CalledNumber"].isNull())
		task_.calledNumber = taskNode["CalledNumber"].asString();
	if(!taskNode["Id"].isNull())
		task_.id = taskNode["Id"].asString();

}

GetTaskByUuidResult::Task GetTaskByUuidResult::getTask()const
{
	return task_;
}

