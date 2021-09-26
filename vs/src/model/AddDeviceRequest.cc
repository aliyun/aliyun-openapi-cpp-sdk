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

#include <alibabacloud/vs/model/AddDeviceRequest.h>

using AlibabaCloud::Vs::Model::AddDeviceRequest;

AddDeviceRequest::AddDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "AddDevice")
{
	setMethod(HttpRequest::Method::Post);
}

AddDeviceRequest::~AddDeviceRequest()
{}

std::string AddDeviceRequest::getProtocol()const
{
	return protocol_;
}

void AddDeviceRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

std::string AddDeviceRequest::getShowLog()const
{
	return showLog_;
}

void AddDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string AddDeviceRequest::getGroupId()const
{
	return groupId_;
}

void AddDeviceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long AddDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void AddDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddDeviceRequest::getConfig()const
{
	return config_;
}

void AddDeviceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

