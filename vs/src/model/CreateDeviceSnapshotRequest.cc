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

#include <alibabacloud/vs/model/CreateDeviceSnapshotRequest.h>

using AlibabaCloud::Vs::Model::CreateDeviceSnapshotRequest;

CreateDeviceSnapshotRequest::CreateDeviceSnapshotRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateDeviceSnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceSnapshotRequest::~CreateDeviceSnapshotRequest()
{}

std::string CreateDeviceSnapshotRequest::getSnapshotConfig()const
{
	return snapshotConfig_;
}

void CreateDeviceSnapshotRequest::setSnapshotConfig(const std::string& snapshotConfig)
{
	snapshotConfig_ = snapshotConfig;
	setParameter("SnapshotConfig", snapshotConfig);
}

std::string CreateDeviceSnapshotRequest::getMode()const
{
	return mode_;
}

void CreateDeviceSnapshotRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string CreateDeviceSnapshotRequest::getShowLog()const
{
	return showLog_;
}

void CreateDeviceSnapshotRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateDeviceSnapshotRequest::getStreamId()const
{
	return streamId_;
}

void CreateDeviceSnapshotRequest::setStreamId(const std::string& streamId)
{
	streamId_ = streamId;
	setParameter("StreamId", streamId);
}

long CreateDeviceSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDeviceSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDeviceSnapshotRequest::getDeviceId()const
{
	return deviceId_;
}

void CreateDeviceSnapshotRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

