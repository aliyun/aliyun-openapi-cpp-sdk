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

#include <alibabacloud/vs/model/BatchStopDevicesRequest.h>

using AlibabaCloud::Vs::Model::BatchStopDevicesRequest;

BatchStopDevicesRequest::BatchStopDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchStopDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchStopDevicesRequest::~BatchStopDevicesRequest()
{}

std::string BatchStopDevicesRequest::getStartTime()const
{
	return startTime_;
}

void BatchStopDevicesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string BatchStopDevicesRequest::getId()const
{
	return id_;
}

void BatchStopDevicesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string BatchStopDevicesRequest::getShowLog()const
{
	return showLog_;
}

void BatchStopDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchStopDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchStopDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

