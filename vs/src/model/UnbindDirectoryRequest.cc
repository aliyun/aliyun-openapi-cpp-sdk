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

#include <alibabacloud/vs/model/UnbindDirectoryRequest.h>

using AlibabaCloud::Vs::Model::UnbindDirectoryRequest;

UnbindDirectoryRequest::UnbindDirectoryRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UnbindDirectory")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindDirectoryRequest::~UnbindDirectoryRequest()
{}

std::string UnbindDirectoryRequest::getDirectoryId()const
{
	return directoryId_;
}

void UnbindDirectoryRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string UnbindDirectoryRequest::getShowLog()const
{
	return showLog_;
}

void UnbindDirectoryRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long UnbindDirectoryRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindDirectoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnbindDirectoryRequest::getDeviceId()const
{
	return deviceId_;
}

void UnbindDirectoryRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

