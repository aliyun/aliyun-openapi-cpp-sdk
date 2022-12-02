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

#include <alibabacloud/dms-enterprise/model/GetOnlineDDLProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetOnlineDDLProgressResult::GetOnlineDDLProgressResult() :
	ServiceResult()
{}

GetOnlineDDLProgressResult::GetOnlineDDLProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOnlineDDLProgressResult::~GetOnlineDDLProgressResult()
{}

void GetOnlineDDLProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto onlineDDLTaskDetailNode = value["OnlineDDLTaskDetail"];
	if(!onlineDDLTaskDetailNode["JobStatus"].isNull())
		onlineDDLTaskDetail_.jobStatus = onlineDDLTaskDetailNode["JobStatus"].asString();
	if(!onlineDDLTaskDetailNode["StatusDesc"].isNull())
		onlineDDLTaskDetail_.statusDesc = onlineDDLTaskDetailNode["StatusDesc"].asString();
	if(!onlineDDLTaskDetailNode["DelaySeconds"].isNull())
		onlineDDLTaskDetail_.delaySeconds = std::stol(onlineDDLTaskDetailNode["DelaySeconds"].asString());
	if(!onlineDDLTaskDetailNode["CopyTotal"].isNull())
		onlineDDLTaskDetail_.copyTotal = std::stol(onlineDDLTaskDetailNode["CopyTotal"].asString());
	if(!onlineDDLTaskDetailNode["CopyCount"].isNull())
		onlineDDLTaskDetail_.copyCount = std::stol(onlineDDLTaskDetailNode["CopyCount"].asString());
	if(!onlineDDLTaskDetailNode["ProgressRatio"].isNull())
		onlineDDLTaskDetail_.progressRatio = onlineDDLTaskDetailNode["ProgressRatio"].asString();
	if(!onlineDDLTaskDetailNode["CutoverLockTimeSeconds"].isNull())
		onlineDDLTaskDetail_.cutoverLockTimeSeconds = std::stol(onlineDDLTaskDetailNode["CutoverLockTimeSeconds"].asString());
	if(!onlineDDLTaskDetailNode["CutoverFailRetryTimes"].isNull())
		onlineDDLTaskDetail_.cutoverFailRetryTimes = std::stol(onlineDDLTaskDetailNode["CutoverFailRetryTimes"].asString());
	if(!onlineDDLTaskDetailNode["CleanStrategy"].isNull())
		onlineDDLTaskDetail_.cleanStrategy = onlineDDLTaskDetailNode["CleanStrategy"].asString();
	if(!onlineDDLTaskDetailNode["CopyChunkSize"].isNull())
		onlineDDLTaskDetail_.copyChunkSize = std::stol(onlineDDLTaskDetailNode["CopyChunkSize"].asString());
	if(!onlineDDLTaskDetailNode["CopyChunkMode"].isNull())
		onlineDDLTaskDetail_.copyChunkMode = onlineDDLTaskDetailNode["CopyChunkMode"].asString();
	if(!onlineDDLTaskDetailNode["CutoverWindowStartTime"].isNull())
		onlineDDLTaskDetail_.cutoverWindowStartTime = onlineDDLTaskDetailNode["CutoverWindowStartTime"].asString();
	if(!onlineDDLTaskDetailNode["CutoverWindowEndTime"].isNull())
		onlineDDLTaskDetail_.cutoverWindowEndTime = onlineDDLTaskDetailNode["CutoverWindowEndTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetOnlineDDLProgressResult::OnlineDDLTaskDetail GetOnlineDDLProgressResult::getOnlineDDLTaskDetail()const
{
	return onlineDDLTaskDetail_;
}

std::string GetOnlineDDLProgressResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOnlineDDLProgressResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetOnlineDDLProgressResult::getSuccess()const
{
	return success_;
}

