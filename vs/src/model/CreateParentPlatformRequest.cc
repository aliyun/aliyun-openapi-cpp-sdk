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

#include <alibabacloud/vs/model/CreateParentPlatformRequest.h>

using AlibabaCloud::Vs::Model::CreateParentPlatformRequest;

CreateParentPlatformRequest::CreateParentPlatformRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateParentPlatform")
{
	setMethod(HttpRequest::Method::Post);
}

CreateParentPlatformRequest::~CreateParentPlatformRequest()
{}

std::string CreateParentPlatformRequest::getGbId()const
{
	return gbId_;
}

void CreateParentPlatformRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

bool CreateParentPlatformRequest::getClientAuth()const
{
	return clientAuth_;
}

void CreateParentPlatformRequest::setClientAuth(bool clientAuth)
{
	clientAuth_ = clientAuth;
	setParameter("ClientAuth", clientAuth ? "true" : "false");
}

std::string CreateParentPlatformRequest::getDescription()const
{
	return description_;
}

void CreateParentPlatformRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool CreateParentPlatformRequest::getAutoStart()const
{
	return autoStart_;
}

void CreateParentPlatformRequest::setAutoStart(bool autoStart)
{
	autoStart_ = autoStart;
	setParameter("AutoStart", autoStart ? "true" : "false");
}

std::string CreateParentPlatformRequest::getProtocol()const
{
	return protocol_;
}

void CreateParentPlatformRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

std::string CreateParentPlatformRequest::getClientPassword()const
{
	return clientPassword_;
}

void CreateParentPlatformRequest::setClientPassword(const std::string& clientPassword)
{
	clientPassword_ = clientPassword;
	setParameter("ClientPassword", clientPassword);
}

std::string CreateParentPlatformRequest::getShowLog()const
{
	return showLog_;
}

void CreateParentPlatformRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateParentPlatformRequest::getIp()const
{
	return ip_;
}

void CreateParentPlatformRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

long CreateParentPlatformRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateParentPlatformRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long CreateParentPlatformRequest::getPort()const
{
	return port_;
}

void CreateParentPlatformRequest::setPort(long port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string CreateParentPlatformRequest::getName()const
{
	return name_;
}

void CreateParentPlatformRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateParentPlatformRequest::getClientUsername()const
{
	return clientUsername_;
}

void CreateParentPlatformRequest::setClientUsername(const std::string& clientUsername)
{
	clientUsername_ = clientUsername;
	setParameter("ClientUsername", clientUsername);
}

