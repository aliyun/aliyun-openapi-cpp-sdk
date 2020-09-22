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

#include <alibabacloud/vs/model/ModifyDeviceChannelsRequest.h>

using AlibabaCloud::Vs::Model::ModifyDeviceChannelsRequest;

ModifyDeviceChannelsRequest::ModifyDeviceChannelsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyDeviceChannels")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDeviceChannelsRequest::~ModifyDeviceChannelsRequest()
{}

std::string ModifyDeviceChannelsRequest::getDeviceStatus()const
{
	return deviceStatus_;
}

void ModifyDeviceChannelsRequest::setDeviceStatus(const std::string& deviceStatus)
{
	deviceStatus_ = deviceStatus;
	setParameter("DeviceStatus", deviceStatus);
}

std::string ModifyDeviceChannelsRequest::getId()const
{
	return id_;
}

void ModifyDeviceChannelsRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyDeviceChannelsRequest::getShowLog()const
{
	return showLog_;
}

void ModifyDeviceChannelsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ModifyDeviceChannelsRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDeviceChannelsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDeviceChannelsRequest::getChannels()const
{
	return channels_;
}

void ModifyDeviceChannelsRequest::setChannels(const std::string& channels)
{
	channels_ = channels;
	setParameter("Channels", channels);
}

std::string ModifyDeviceChannelsRequest::getDsn()const
{
	return dsn_;
}

void ModifyDeviceChannelsRequest::setDsn(const std::string& dsn)
{
	dsn_ = dsn;
	setParameter("Dsn", dsn);
}

