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

#include <alibabacloud/vs/model/BatchUnbindDirectoriesRequest.h>

using AlibabaCloud::Vs::Model::BatchUnbindDirectoriesRequest;

BatchUnbindDirectoriesRequest::BatchUnbindDirectoriesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchUnbindDirectories")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUnbindDirectoriesRequest::~BatchUnbindDirectoriesRequest()
{}

std::string BatchUnbindDirectoriesRequest::getDirectoryId()const
{
	return directoryId_;
}

void BatchUnbindDirectoriesRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string BatchUnbindDirectoriesRequest::getShowLog()const
{
	return showLog_;
}

void BatchUnbindDirectoriesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchUnbindDirectoriesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchUnbindDirectoriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchUnbindDirectoriesRequest::getDeviceId()const
{
	return deviceId_;
}

void BatchUnbindDirectoriesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

