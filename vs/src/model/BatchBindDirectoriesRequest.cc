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

#include <alibabacloud/vs/model/BatchBindDirectoriesRequest.h>

using AlibabaCloud::Vs::Model::BatchBindDirectoriesRequest;

BatchBindDirectoriesRequest::BatchBindDirectoriesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchBindDirectories")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindDirectoriesRequest::~BatchBindDirectoriesRequest()
{}

std::string BatchBindDirectoriesRequest::getDirectoryId()const
{
	return directoryId_;
}

void BatchBindDirectoriesRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string BatchBindDirectoriesRequest::getShowLog()const
{
	return showLog_;
}

void BatchBindDirectoriesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchBindDirectoriesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchBindDirectoriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchBindDirectoriesRequest::getDeviceId()const
{
	return deviceId_;
}

void BatchBindDirectoriesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

