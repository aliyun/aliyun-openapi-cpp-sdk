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

#include <alibabacloud/vs/model/ModifyDeviceRequest.h>

using AlibabaCloud::Vs::Model::ModifyDeviceRequest;

ModifyDeviceRequest::ModifyDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyDevice")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDeviceRequest::~ModifyDeviceRequest()
{}

std::string ModifyDeviceRequest::getGbId()const
{
	return gbId_;
}

void ModifyDeviceRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

std::string ModifyDeviceRequest::getLatitude()const
{
	return latitude_;
}

void ModifyDeviceRequest::setLatitude(const std::string& latitude)
{
	latitude_ = latitude;
	setParameter("Latitude", latitude);
}

std::string ModifyDeviceRequest::getDescription()const
{
	return description_;
}

void ModifyDeviceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyDeviceRequest::getType()const
{
	return type_;
}

void ModifyDeviceRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool ModifyDeviceRequest::getAutoStart()const
{
	return autoStart_;
}

void ModifyDeviceRequest::setAutoStart(bool autoStart)
{
	autoStart_ = autoStart;
	setParameter("AutoStart", autoStart ? "true" : "false");
}

std::string ModifyDeviceRequest::getParentId()const
{
	return parentId_;
}

void ModifyDeviceRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string ModifyDeviceRequest::getPassword()const
{
	return password_;
}

void ModifyDeviceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string ModifyDeviceRequest::getVendor()const
{
	return vendor_;
}

void ModifyDeviceRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setParameter("Vendor", vendor);
}

std::string ModifyDeviceRequest::getAlarmMethod()const
{
	return alarmMethod_;
}

void ModifyDeviceRequest::setAlarmMethod(const std::string& alarmMethod)
{
	alarmMethod_ = alarmMethod;
	setParameter("AlarmMethod", alarmMethod);
}

std::string ModifyDeviceRequest::getDirectoryId()const
{
	return directoryId_;
}

void ModifyDeviceRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string ModifyDeviceRequest::getId()const
{
	return id_;
}

void ModifyDeviceRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyDeviceRequest::getShowLog()const
{
	return showLog_;
}

void ModifyDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ModifyDeviceRequest::getLongitude()const
{
	return longitude_;
}

void ModifyDeviceRequest::setLongitude(const std::string& longitude)
{
	longitude_ = longitude;
	setParameter("Longitude", longitude);
}

std::string ModifyDeviceRequest::getGroupId()const
{
	return groupId_;
}

void ModifyDeviceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string ModifyDeviceRequest::getIp()const
{
	return ip_;
}

void ModifyDeviceRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

long ModifyDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDeviceRequest::getParams()const
{
	return params_;
}

void ModifyDeviceRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string ModifyDeviceRequest::getUrl()const
{
	return url_;
}

void ModifyDeviceRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

long ModifyDeviceRequest::getPort()const
{
	return port_;
}

void ModifyDeviceRequest::setPort(long port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string ModifyDeviceRequest::getName()const
{
	return name_;
}

void ModifyDeviceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long ModifyDeviceRequest::getPosInterval()const
{
	return posInterval_;
}

void ModifyDeviceRequest::setPosInterval(long posInterval)
{
	posInterval_ = posInterval;
	setParameter("PosInterval", std::to_string(posInterval));
}

std::string ModifyDeviceRequest::getUsername()const
{
	return username_;
}

void ModifyDeviceRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

bool ModifyDeviceRequest::getAutoPos()const
{
	return autoPos_;
}

void ModifyDeviceRequest::setAutoPos(bool autoPos)
{
	autoPos_ = autoPos;
	setParameter("AutoPos", autoPos ? "true" : "false");
}

