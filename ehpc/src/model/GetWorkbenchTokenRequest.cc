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

#include <alibabacloud/ehpc/model/GetWorkbenchTokenRequest.h>

using AlibabaCloud::EHPC::Model::GetWorkbenchTokenRequest;

GetWorkbenchTokenRequest::GetWorkbenchTokenRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetWorkbenchToken")
{
	setMethod(HttpRequest::Method::Get);
}

GetWorkbenchTokenRequest::~GetWorkbenchTokenRequest()
{}

std::string GetWorkbenchTokenRequest::getClusterId()const
{
	return clusterId_;
}

void GetWorkbenchTokenRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetWorkbenchTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetWorkbenchTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetWorkbenchTokenRequest::getUserPassword()const
{
	return userPassword_;
}

void GetWorkbenchTokenRequest::setUserPassword(const std::string& userPassword)
{
	userPassword_ = userPassword;
	setParameter("UserPassword", userPassword);
}

std::string GetWorkbenchTokenRequest::getInstanceId()const
{
	return instanceId_;
}

void GetWorkbenchTokenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int GetWorkbenchTokenRequest::getPort()const
{
	return port_;
}

void GetWorkbenchTokenRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string GetWorkbenchTokenRequest::getAccountSessionTicket()const
{
	return accountSessionTicket_;
}

void GetWorkbenchTokenRequest::setAccountSessionTicket(const std::string& accountSessionTicket)
{
	accountSessionTicket_ = accountSessionTicket;
	setParameter("AccountSessionTicket", accountSessionTicket);
}

std::string GetWorkbenchTokenRequest::getAccountUid()const
{
	return accountUid_;
}

void GetWorkbenchTokenRequest::setAccountUid(const std::string& accountUid)
{
	accountUid_ = accountUid;
	setParameter("AccountUid", accountUid);
}

std::string GetWorkbenchTokenRequest::getUserName()const
{
	return userName_;
}

void GetWorkbenchTokenRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

