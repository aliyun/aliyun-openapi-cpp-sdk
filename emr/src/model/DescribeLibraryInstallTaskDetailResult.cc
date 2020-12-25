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

#include <alibabacloud/emr/model/DescribeLibraryInstallTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeLibraryInstallTaskDetailResult::DescribeLibraryInstallTaskDetailResult() :
	ServiceResult()
{}

DescribeLibraryInstallTaskDetailResult::DescribeLibraryInstallTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLibraryInstallTaskDetailResult::~DescribeLibraryInstallTaskDetailResult()
{}

void DescribeLibraryInstallTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LibraryBizId"].isNull())
		libraryBizId_ = value["LibraryBizId"].asString();
	if(!value["TaskGroupId"].isNull())
		taskGroupId_ = value["TaskGroupId"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["ExecuteTime"].isNull())
		executeTime_ = std::stol(value["ExecuteTime"].asString());
	if(!value["TaskProcess"].isNull())
		taskProcess_ = std::stoi(value["TaskProcess"].asString());
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["Detail"].isNull())
		detail_ = value["Detail"].asString();
	if(!value["ClusterBizId"].isNull())
		clusterBizId_ = value["ClusterBizId"].asString();
	if(!value["Hostname"].isNull())
		hostname_ = value["Hostname"].asString();

}

std::string DescribeLibraryInstallTaskDetailResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeLibraryInstallTaskDetailResult::getLibraryBizId()const
{
	return libraryBizId_;
}

long DescribeLibraryInstallTaskDetailResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLibraryInstallTaskDetailResult::getTaskGroupId()const
{
	return taskGroupId_;
}

long DescribeLibraryInstallTaskDetailResult::getExecuteTime()const
{
	return executeTime_;
}

int DescribeLibraryInstallTaskDetailResult::getTaskProcess()const
{
	return taskProcess_;
}

std::string DescribeLibraryInstallTaskDetailResult::getClusterBizId()const
{
	return clusterBizId_;
}

std::string DescribeLibraryInstallTaskDetailResult::getTaskType()const
{
	return taskType_;
}

long DescribeLibraryInstallTaskDetailResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeLibraryInstallTaskDetailResult::getHostname()const
{
	return hostname_;
}

std::string DescribeLibraryInstallTaskDetailResult::getTaskStatus()const
{
	return taskStatus_;
}

std::string DescribeLibraryInstallTaskDetailResult::getDetail()const
{
	return detail_;
}

