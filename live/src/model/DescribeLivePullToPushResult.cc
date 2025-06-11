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

#include <alibabacloud/live/model/DescribeLivePullToPushResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePullToPushResult::DescribeLivePullToPushResult() :
	ServiceResult()
{}

DescribeLivePullToPushResult::DescribeLivePullToPushResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePullToPushResult::~DescribeLivePullToPushResult()
{}

void DescribeLivePullToPushResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskInfoNode = value["TaskInfo"];
	if(!taskInfoNode["TaskId"].isNull())
		taskInfo_.taskId = taskInfoNode["TaskId"].asString();
	if(!taskInfoNode["TaskName"].isNull())
		taskInfo_.taskName = taskInfoNode["TaskName"].asString();
	if(!taskInfoNode["StartTime"].isNull())
		taskInfo_.startTime = taskInfoNode["StartTime"].asString();
	if(!taskInfoNode["EndTime"].isNull())
		taskInfo_.endTime = taskInfoNode["EndTime"].asString();
	if(!taskInfoNode["SourceType"].isNull())
		taskInfo_.sourceType = taskInfoNode["SourceType"].asString();
	if(!taskInfoNode["SourceProtocol"].isNull())
		taskInfo_.sourceProtocol = taskInfoNode["SourceProtocol"].asString();
	if(!taskInfoNode["DstUrl"].isNull())
		taskInfo_.dstUrl = taskInfoNode["DstUrl"].asString();
	if(!taskInfoNode["CallbackURL"].isNull())
		taskInfo_.callbackURL = taskInfoNode["CallbackURL"].asString();
	if(!taskInfoNode["Offset"].isNull())
		taskInfo_.offset = std::stoi(taskInfoNode["Offset"].asString());
	if(!taskInfoNode["FileIndex"].isNull())
		taskInfo_.fileIndex = std::stoi(taskInfoNode["FileIndex"].asString());
	if(!taskInfoNode["RetryCount"].isNull())
		taskInfo_.retryCount = std::stoi(taskInfoNode["RetryCount"].asString());
	if(!taskInfoNode["RetryInterval"].isNull())
		taskInfo_.retryInterval = std::stoi(taskInfoNode["RetryInterval"].asString());
	if(!taskInfoNode["RepeatNumber"].isNull())
		taskInfo_.repeatNumber = std::stoi(taskInfoNode["RepeatNumber"].asString());
		auto allSourceUrls = taskInfoNode["SourceUrls"]["SourceUrls"];
		for (auto value : allSourceUrls)
			taskInfo_.sourceUrls.push_back(value.asString());
	if(!value["RetCode"].isNull())
		retCode_ = std::stoi(value["RetCode"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = std::stoi(value["TaskStatus"].asString());
	if(!value["TaskInvalidReason"].isNull())
		taskInvalidReason_ = value["TaskInvalidReason"].asString();
	if(!value["TaskExitTime"].isNull())
		taskExitTime_ = std::stoi(value["TaskExitTime"].asString());
	if(!value["TaskExitReason"].isNull())
		taskExitReason_ = value["TaskExitReason"].asString();
	if(!value["CurrentOffset"].isNull())
		currentOffset_ = std::stoi(value["CurrentOffset"].asString());
	if(!value["CurrentFileIndex"].isNull())
		currentFileIndex_ = std::stoi(value["CurrentFileIndex"].asString());

}

DescribeLivePullToPushResult::TaskInfo DescribeLivePullToPushResult::getTaskInfo()const
{
	return taskInfo_;
}

std::string DescribeLivePullToPushResult::getTaskExitReason()const
{
	return taskExitReason_;
}

std::string DescribeLivePullToPushResult::getDescription()const
{
	return description_;
}

std::string DescribeLivePullToPushResult::getTaskId()const
{
	return taskId_;
}

int DescribeLivePullToPushResult::getRetCode()const
{
	return retCode_;
}

int DescribeLivePullToPushResult::getCurrentFileIndex()const
{
	return currentFileIndex_;
}

int DescribeLivePullToPushResult::getCurrentOffset()const
{
	return currentOffset_;
}

int DescribeLivePullToPushResult::getTaskStatus()const
{
	return taskStatus_;
}

int DescribeLivePullToPushResult::getTaskExitTime()const
{
	return taskExitTime_;
}

std::string DescribeLivePullToPushResult::getTaskInvalidReason()const
{
	return taskInvalidReason_;
}

