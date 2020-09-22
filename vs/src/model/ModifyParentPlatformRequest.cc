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

#include <alibabacloud/vs/model/ModifyParentPlatformRequest.h>

using AlibabaCloud::Vs::Model::ModifyParentPlatformRequest;

ModifyParentPlatformRequest::ModifyParentPlatformRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyParentPlatform")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyParentPlatformRequest::~ModifyParentPlatformRequest()
{}

std::string ModifyParentPlatformRequest::getGbId()const
{
	return gbId_;
}

void ModifyParentPlatformRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

bool ModifyParentPlatformRequest::getClientAuth()const
{
	return clientAuth_;
}

void ModifyParentPlatformRequest::setClientAuth(bool clientAuth)
{
	clientAuth_ = clientAuth;
	setParameter("ClientAuth", clientAuth ? "true" : "false");
}

std::string ModifyParentPlatformRequest::getDescription()const
{
	return description_;
}

void ModifyParentPlatformRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool ModifyParentPlatformRequest::getAutoStart()const
{
	return autoStart_;
}

void ModifyParentPlatformRequest::setAutoStart(bool autoStart)
{
	autoStart_ = autoStart;
	setParameter("AutoStart", autoStart ? "true" : "false");
}

std::string ModifyParentPlatformRequest::getId()const
{
	return id_;
}

void ModifyParentPlatformRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyParentPlatformRequest::getClientPassword()const
{
	return clientPassword_;
}

void ModifyParentPlatformRequest::setClientPassword(const std::string& clientPassword)
{
	clientPassword_ = clientPassword;
	setParameter("ClientPassword", clientPassword);
}

std::string ModifyParentPlatformRequest::getShowLog()const
{
	return showLog_;
}

void ModifyParentPlatformRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ModifyParentPlatformRequest::getIp()const
{
	return ip_;
}

void ModifyParentPlatformRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

long ModifyParentPlatformRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyParentPlatformRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long ModifyParentPlatformRequest::getPort()const
{
	return port_;
}

void ModifyParentPlatformRequest::setPort(long port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string ModifyParentPlatformRequest::getName()const
{
	return name_;
}

void ModifyParentPlatformRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyParentPlatformRequest::getClientUsername()const
{
	return clientUsername_;
}

void ModifyParentPlatformRequest::setClientUsername(const std::string& clientUsername)
{
	clientUsername_ = clientUsername;
	setParameter("ClientUsername", clientUsername);
}

