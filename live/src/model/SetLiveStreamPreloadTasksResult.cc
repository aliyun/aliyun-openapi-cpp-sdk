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

#include <alibabacloud/live/model/SetLiveStreamPreloadTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

SetLiveStreamPreloadTasksResult::SetLiveStreamPreloadTasksResult() :
	ServiceResult()
{}

SetLiveStreamPreloadTasksResult::SetLiveStreamPreloadTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetLiveStreamPreloadTasksResult::~SetLiveStreamPreloadTasksResult()
{}

void SetLiveStreamPreloadTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreloadTasksMessagesNode = value["PreloadTasksMessages"]["PreloadTasksMessage"];
	for (auto valuePreloadTasksMessagesPreloadTasksMessage : allPreloadTasksMessagesNode)
	{
		PreloadTasksMessage preloadTasksMessagesObject;
		if(!valuePreloadTasksMessagesPreloadTasksMessage["Description"].isNull())
			preloadTasksMessagesObject.description = valuePreloadTasksMessagesPreloadTasksMessage["Description"].asString();
		if(!valuePreloadTasksMessagesPreloadTasksMessage["PlayUrl"].isNull())
			preloadTasksMessagesObject.playUrl = valuePreloadTasksMessagesPreloadTasksMessage["PlayUrl"].asString();
		if(!valuePreloadTasksMessagesPreloadTasksMessage["TaskId"].isNull())
			preloadTasksMessagesObject.taskId = valuePreloadTasksMessagesPreloadTasksMessage["TaskId"].asString();
		preloadTasksMessages_.push_back(preloadTasksMessagesObject);
	}
	if(!value["FailedURL"].isNull())
		failedURL_ = std::stoi(value["FailedURL"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SuccessURL"].isNull())
		successURL_ = std::stoi(value["SuccessURL"].asString());
	if(!value["TotalURL"].isNull())
		totalURL_ = std::stoi(value["TotalURL"].asString());

}

std::string SetLiveStreamPreloadTasksResult::getStatus()const
{
	return status_;
}

int SetLiveStreamPreloadTasksResult::getFailedURL()const
{
	return failedURL_;
}

std::vector<SetLiveStreamPreloadTasksResult::PreloadTasksMessage> SetLiveStreamPreloadTasksResult::getPreloadTasksMessages()const
{
	return preloadTasksMessages_;
}

int SetLiveStreamPreloadTasksResult::getTotalURL()const
{
	return totalURL_;
}

int SetLiveStreamPreloadTasksResult::getSuccessURL()const
{
	return successURL_;
}

