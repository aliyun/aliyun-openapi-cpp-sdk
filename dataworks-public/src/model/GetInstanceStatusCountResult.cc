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

#include <alibabacloud/dataworks-public/model/GetInstanceStatusCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetInstanceStatusCountResult::GetInstanceStatusCountResult() :
	ServiceResult()
{}

GetInstanceStatusCountResult::GetInstanceStatusCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceStatusCountResult::~GetInstanceStatusCountResult()
{}

void GetInstanceStatusCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto statusCountNode = value["StatusCount"];
	if(!statusCountNode["FailureCount"].isNull())
		statusCount_.failureCount = std::stoi(statusCountNode["FailureCount"].asString());
	if(!statusCountNode["WaitTimeCount"].isNull())
		statusCount_.waitTimeCount = std::stoi(statusCountNode["WaitTimeCount"].asString());
	if(!statusCountNode["RunningCount"].isNull())
		statusCount_.runningCount = std::stoi(statusCountNode["RunningCount"].asString());
	if(!statusCountNode["SuccessCount"].isNull())
		statusCount_.successCount = std::stoi(statusCountNode["SuccessCount"].asString());
	if(!statusCountNode["TotalCount"].isNull())
		statusCount_.totalCount = std::stoi(statusCountNode["TotalCount"].asString());
	if(!statusCountNode["NotRunCount"].isNull())
		statusCount_.notRunCount = std::stoi(statusCountNode["NotRunCount"].asString());
	if(!statusCountNode["WaitResCount"].isNull())
		statusCount_.waitResCount = std::stoi(statusCountNode["WaitResCount"].asString());

}

GetInstanceStatusCountResult::StatusCount GetInstanceStatusCountResult::getStatusCount()const
{
	return statusCount_;
}

