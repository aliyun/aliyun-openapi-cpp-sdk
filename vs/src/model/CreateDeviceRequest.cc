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

#include <alibabacloud/vs/model/CreateDeviceRequest.h>

using AlibabaCloud::Vs::Model::CreateDeviceRequest;

CreateDeviceRequest::CreateDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateDevice")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceRequest::~CreateDeviceRequest()
{}

std::string CreateDeviceRequest::getGbId()const
{
	return gbId_;
}

void CreateDeviceRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

std::string CreateDeviceRequest::getLatitude()const
{
	return latitude_;
}

void CreateDeviceRequest::setLatitude(const std::string& latitude)
{
	latitude_ = latitude;
	setParameter("Latitude", latitude);
}

std::string CreateDeviceRequest::getDescription()const
{
	return description_;
}

void CreateDeviceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDeviceRequest::getType()const
{
	return type_;
}

void CreateDeviceRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool CreateDeviceRequest::getAutoStart()const
{
	return autoStart_;
}

void CreateDeviceRequest::setAutoStart(bool autoStart)
{
	autoStart_ = autoStart;
	setParameter("AutoStart", autoStart ? "true" : "false");
}

std::string CreateDeviceRequest::getParentId()const
{
	return parentId_;
}

void CreateDeviceRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string CreateDeviceRequest::getPassword()const
{
	return password_;
}

void CreateDeviceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateDeviceRequest::getVendor()const
{
	return vendor_;
}

void CreateDeviceRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setParameter("Vendor", vendor);
}

std::string CreateDeviceRequest::getAlarmMethod()const
{
	return alarmMethod_;
}

void CreateDeviceRequest::setAlarmMethod(const std::string& alarmMethod)
{
	alarmMethod_ = alarmMethod;
	setParameter("AlarmMethod", alarmMethod);
}

std::string CreateDeviceRequest::getDirectoryId()const
{
	return directoryId_;
}

void CreateDeviceRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string CreateDeviceRequest::getShowLog()const
{
	return showLog_;
}

void CreateDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateDeviceRequest::getLongitude()const
{
	return longitude_;
}

void CreateDeviceRequest::setLongitude(const std::string& longitude)
{
	longitude_ = longitude;
	setParameter("Longitude", longitude);
}

std::string CreateDeviceRequest::getGroupId()const
{
	return groupId_;
}

void CreateDeviceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string CreateDeviceRequest::getIp()const
{
	return ip_;
}

void CreateDeviceRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

long CreateDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDeviceRequest::getParams()const
{
	return params_;
}

void CreateDeviceRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string CreateDeviceRequest::getUrl()const
{
	return url_;
}

void CreateDeviceRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

long CreateDeviceRequest::getPort()const
{
	return port_;
}

void CreateDeviceRequest::setPort(long port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string CreateDeviceRequest::getName()const
{
	return name_;
}

void CreateDeviceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long CreateDeviceRequest::getPosInterval()const
{
	return posInterval_;
}

void CreateDeviceRequest::setPosInterval(long posInterval)
{
	posInterval_ = posInterval;
	setParameter("PosInterval", std::to_string(posInterval));
}

std::string CreateDeviceRequest::getDsn()const
{
	return dsn_;
}

void CreateDeviceRequest::setDsn(const std::string& dsn)
{
	dsn_ = dsn;
	setParameter("Dsn", dsn);
}

std::string CreateDeviceRequest::getUsername()const
{
	return username_;
}

void CreateDeviceRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

bool CreateDeviceRequest::getAutoPos()const
{
	return autoPos_;
}

void CreateDeviceRequest::setAutoPos(bool autoPos)
{
	autoPos_ = autoPos;
	setParameter("AutoPos", autoPos ? "true" : "false");
}

