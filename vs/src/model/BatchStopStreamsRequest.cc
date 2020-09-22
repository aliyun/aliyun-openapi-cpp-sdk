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

#include <alibabacloud/vs/model/BatchStopStreamsRequest.h>

using AlibabaCloud::Vs::Model::BatchStopStreamsRequest;

BatchStopStreamsRequest::BatchStopStreamsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchStopStreams")
{
	setMethod(HttpRequest::Method::Post);
}

BatchStopStreamsRequest::~BatchStopStreamsRequest()
{}

std::string BatchStopStreamsRequest::getStartTime()const
{
	return startTime_;
}

void BatchStopStreamsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string BatchStopStreamsRequest::getId()const
{
	return id_;
}

void BatchStopStreamsRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string BatchStopStreamsRequest::getShowLog()const
{
	return showLog_;
}

void BatchStopStreamsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchStopStreamsRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchStopStreamsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

