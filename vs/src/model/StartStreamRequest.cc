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

#include <alibabacloud/vs/model/StartStreamRequest.h>

using AlibabaCloud::Vs::Model::StartStreamRequest;

StartStreamRequest::StartStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "StartStream")
{
	setMethod(HttpRequest::Method::Post);
}

StartStreamRequest::~StartStreamRequest()
{}

long StartStreamRequest::getStartTime()const
{
	return startTime_;
}

void StartStreamRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string StartStreamRequest::getId()const
{
	return id_;
}

void StartStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string StartStreamRequest::getShowLog()const
{
	return showLog_;
}

void StartStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long StartStreamRequest::getEndTime()const
{
	return endTime_;
}

void StartStreamRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long StartStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void StartStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

