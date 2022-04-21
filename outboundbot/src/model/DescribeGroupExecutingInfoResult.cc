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

#include <alibabacloud/outboundbot/model/DescribeGroupExecutingInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeGroupExecutingInfoResult::DescribeGroupExecutingInfoResult() :
	ServiceResult()
{}

DescribeGroupExecutingInfoResult::DescribeGroupExecutingInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupExecutingInfoResult::~DescribeGroupExecutingInfoResult()
{}

void DescribeGroupExecutingInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto executingInfoNode = value["ExecutingInfo"];
	if(!executingInfoNode["EndTime"].isNull())
		executingInfo_.endTime = std::stol(executingInfoNode["EndTime"].asString());
	if(!executingInfoNode["StartTime"].isNull())
		executingInfo_.startTime = std::stol(executingInfoNode["StartTime"].asString());
	if(!executingInfoNode["HangUpByClientNum"].isNull())
		executingInfo_.hangUpByClientNum = std::stoi(executingInfoNode["HangUpByClientNum"].asString());
	if(!executingInfoNode["CreatorName"].isNull())
		executingInfo_.creatorName = executingInfoNode["CreatorName"].asString();
	if(!executingInfoNode["TransferByNoAnswer"].isNull())
		executingInfo_.transferByNoAnswer = std::stoi(executingInfoNode["TransferByNoAnswer"].asString());
	if(!executingInfoNode["FinishedNum"].isNull())
		executingInfo_.finishedNum = std::stoi(executingInfoNode["FinishedNum"].asString());
	if(!executingInfoNode["TransferByIntentNum"].isNull())
		executingInfo_.transferByIntentNum = std::stoi(executingInfoNode["TransferByIntentNum"].asString());
	if(!executingInfoNode["CallNum"].isNull())
		executingInfo_.callNum = std::stoi(executingInfoNode["CallNum"].asString());
	if(!executingInfoNode["CallFailedNum"].isNull())
		executingInfo_.callFailedNum = std::stoi(executingInfoNode["CallFailedNum"].asString());
	auto jobsProgressNode = executingInfoNode["JobsProgress"];
	if(!jobsProgressNode["SchedulingNum"].isNull())
		executingInfo_.jobsProgress.schedulingNum = std::stoi(jobsProgressNode["SchedulingNum"].asString());
	if(!jobsProgressNode["TotalCompletedNum"].isNull())
		executingInfo_.jobsProgress.totalCompletedNum = std::stoi(jobsProgressNode["TotalCompletedNum"].asString());
	if(!jobsProgressNode["FailedNum"].isNull())
		executingInfo_.jobsProgress.failedNum = std::stoi(jobsProgressNode["FailedNum"].asString());
	if(!jobsProgressNode["PausedNum"].isNull())
		executingInfo_.jobsProgress.pausedNum = std::stoi(jobsProgressNode["PausedNum"].asString());
	if(!jobsProgressNode["CancelledNum"].isNull())
		executingInfo_.jobsProgress.cancelledNum = std::stoi(jobsProgressNode["CancelledNum"].asString());
	if(!jobsProgressNode["TotalJobs"].isNull())
		executingInfo_.jobsProgress.totalJobs = std::stoi(jobsProgressNode["TotalJobs"].asString());
	if(!jobsProgressNode["TotalNotAnsweredNum"].isNull())
		executingInfo_.jobsProgress.totalNotAnsweredNum = std::stoi(jobsProgressNode["TotalNotAnsweredNum"].asString());
	if(!jobsProgressNode["ExecutingNum"].isNull())
		executingInfo_.jobsProgress.executingNum = std::stoi(jobsProgressNode["ExecutingNum"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeGroupExecutingInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeGroupExecutingInfoResult::getInstanceId()const
{
	return instanceId_;
}

DescribeGroupExecutingInfoResult::ExecutingInfo DescribeGroupExecutingInfoResult::getExecutingInfo()const
{
	return executingInfo_;
}

int DescribeGroupExecutingInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeGroupExecutingInfoResult::getCode()const
{
	return code_;
}

bool DescribeGroupExecutingInfoResult::getSuccess()const
{
	return success_;
}

std::string DescribeGroupExecutingInfoResult::getGroupId()const
{
	return groupId_;
}

