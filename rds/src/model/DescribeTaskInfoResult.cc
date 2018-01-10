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

#include <alibabacloud/rds/model/DescribeTaskInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeTaskInfoResult::DescribeTaskInfoResult() :
	ServiceResult()
{}

DescribeTaskInfoResult::DescribeTaskInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTaskInfoResult::~DescribeTaskInfoResult()
{}

void DescribeTaskInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	taskId_ = value["TaskId"].asString();
	beginTime_ = value["BeginTime"].asString();
	finishTime_ = value["FinishTime"].asString();
	createTime_ = value["CreateTime"].asString();
	taskAction_ = value["TaskAction"].asString();
	dBName_ = value["DBName"].asString();
	taskErrorCode_ = value["TaskErrorCode"].asString();
	progress_ = value["Progress"].asString();
	expectedFinishTime_ = value["ExpectedFinishTime"].asString();
	taskErrorMessage_ = value["TaskErrorMessage"].asString();
	progressInfo_ = value["ProgressInfo"].asString();
	status_ = value["Status"].asString();

}

std::string DescribeTaskInfoResult::getExpectedFinishTime()const
{
	return expectedFinishTime_;
}

void DescribeTaskInfoResult::setExpectedFinishTime(const std::string& expectedFinishTime)
{
	expectedFinishTime_ = expectedFinishTime;
}

std::string DescribeTaskInfoResult::getStatus()const
{
	return status_;
}

void DescribeTaskInfoResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeTaskInfoResult::getProgress()const
{
	return progress_;
}

void DescribeTaskInfoResult::setProgress(const std::string& progress)
{
	progress_ = progress;
}

std::string DescribeTaskInfoResult::getTaskId()const
{
	return taskId_;
}

void DescribeTaskInfoResult::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
}

std::string DescribeTaskInfoResult::getFinishTime()const
{
	return finishTime_;
}

void DescribeTaskInfoResult::setFinishTime(const std::string& finishTime)
{
	finishTime_ = finishTime;
}

std::string DescribeTaskInfoResult::getTaskAction()const
{
	return taskAction_;
}

void DescribeTaskInfoResult::setTaskAction(const std::string& taskAction)
{
	taskAction_ = taskAction;
}

std::string DescribeTaskInfoResult::getCreateTime()const
{
	return createTime_;
}

void DescribeTaskInfoResult::setCreateTime(const std::string& createTime)
{
	createTime_ = createTime;
}

std::string DescribeTaskInfoResult::getProgressInfo()const
{
	return progressInfo_;
}

void DescribeTaskInfoResult::setProgressInfo(const std::string& progressInfo)
{
	progressInfo_ = progressInfo;
}

std::string DescribeTaskInfoResult::getBeginTime()const
{
	return beginTime_;
}

void DescribeTaskInfoResult::setBeginTime(const std::string& beginTime)
{
	beginTime_ = beginTime;
}

std::string DescribeTaskInfoResult::getDBName()const
{
	return dBName_;
}

void DescribeTaskInfoResult::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
}

std::string DescribeTaskInfoResult::getTaskErrorCode()const
{
	return taskErrorCode_;
}

void DescribeTaskInfoResult::setTaskErrorCode(const std::string& taskErrorCode)
{
	taskErrorCode_ = taskErrorCode;
}

std::string DescribeTaskInfoResult::getTaskErrorMessage()const
{
	return taskErrorMessage_;
}

void DescribeTaskInfoResult::setTaskErrorMessage(const std::string& taskErrorMessage)
{
	taskErrorMessage_ = taskErrorMessage;
}

