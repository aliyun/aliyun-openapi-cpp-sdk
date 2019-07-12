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

#include <alibabacloud/live/model/RealTimeSnapshotCommandRequest.h>

using AlibabaCloud::Live::Model::RealTimeSnapshotCommandRequest;

RealTimeSnapshotCommandRequest::RealTimeSnapshotCommandRequest() :
	RpcServiceRequest("live", "2016-11-01", "RealTimeSnapshotCommand")
{}

RealTimeSnapshotCommandRequest::~RealTimeSnapshotCommandRequest()
{}

int RealTimeSnapshotCommandRequest::getMode()const
{
	return mode_;
}

void RealTimeSnapshotCommandRequest::setMode(int mode)
{
	mode_ = mode;
	setCoreParameter("Mode", std::to_string(mode));
}

std::string RealTimeSnapshotCommandRequest::getAppName()const
{
	return appName_;
}

void RealTimeSnapshotCommandRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string RealTimeSnapshotCommandRequest::getRegionId()const
{
	return regionId_;
}

void RealTimeSnapshotCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RealTimeSnapshotCommandRequest::getDomainName()const
{
	return domainName_;
}

void RealTimeSnapshotCommandRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int RealTimeSnapshotCommandRequest::getInterval()const
{
	return interval_;
}

void RealTimeSnapshotCommandRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

long RealTimeSnapshotCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void RealTimeSnapshotCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RealTimeSnapshotCommandRequest::getCommand()const
{
	return command_;
}

void RealTimeSnapshotCommandRequest::setCommand(const std::string& command)
{
	command_ = command;
	setCoreParameter("Command", command);
}

std::string RealTimeSnapshotCommandRequest::getStreamName()const
{
	return streamName_;
}

void RealTimeSnapshotCommandRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

