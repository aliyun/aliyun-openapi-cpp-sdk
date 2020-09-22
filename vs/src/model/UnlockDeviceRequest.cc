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

#include <alibabacloud/vs/model/UnlockDeviceRequest.h>

using AlibabaCloud::Vs::Model::UnlockDeviceRequest;

UnlockDeviceRequest::UnlockDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UnlockDevice")
{
	setMethod(HttpRequest::Method::Post);
}

UnlockDeviceRequest::~UnlockDeviceRequest()
{}

std::string UnlockDeviceRequest::getId()const
{
	return id_;
}

void UnlockDeviceRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string UnlockDeviceRequest::getShowLog()const
{
	return showLog_;
}

void UnlockDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long UnlockDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void UnlockDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

