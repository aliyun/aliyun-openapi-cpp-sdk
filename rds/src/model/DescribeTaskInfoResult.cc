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
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["BeginTime"].isNull())
		beginTime_ = value["BeginTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["TaskAction"].isNull())
		taskAction_ = value["TaskAction"].asString();
	if(!value["DBName"].isNull())
		dBName_ = value["DBName"].asString();
	if(!value["TaskErrorCode"].isNull())
		taskErrorCode_ = value["TaskErrorCode"].asString();
	if(!value["Progress"].isNull())
		progress_ = value["Progress"].asString();
	if(!value["ExpectedFinishTime"].isNull())
		expectedFinishTime_ = value["ExpectedFinishTime"].asString();
	if(!value["TaskErrorMessage"].isNull())
		taskErrorMessage_ = value["TaskErrorMessage"].asString();
	if(!value["ProgressInfo"].isNull())
		progressInfo_ = value["ProgressInfo"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeTaskInfoResult::getExpectedFinishTime()const
{
	return expectedFinishTime_;
}

std::string DescribeTaskInfoResult::getStatus()const
{
	return status_;
}

std::string DescribeTaskInfoResult::getProgress()const
{
	return progress_;
}

std::string DescribeTaskInfoResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeTaskInfoResult::getFinishTime()const
{
	return finishTime_;
}

std::string DescribeTaskInfoResult::getTaskAction()const
{
	return taskAction_;
}

std::string DescribeTaskInfoResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeTaskInfoResult::getProgressInfo()const
{
	return progressInfo_;
}

std::string DescribeTaskInfoResult::getBeginTime()const
{
	return beginTime_;
}

std::string DescribeTaskInfoResult::getDBName()const
{
	return dBName_;
}

std::string DescribeTaskInfoResult::getTaskErrorCode()const
{
	return taskErrorCode_;
}

std::string DescribeTaskInfoResult::getTaskErrorMessage()const
{
	return taskErrorMessage_;
}

