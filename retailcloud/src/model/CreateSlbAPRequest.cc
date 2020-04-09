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

#include <alibabacloud/retailcloud/model/CreateSlbAPRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateSlbAPRequest;

CreateSlbAPRequest::CreateSlbAPRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateSlbAP")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSlbAPRequest::~CreateSlbAPRequest()
{}

std::string CreateSlbAPRequest::getSslCertId()const
{
	return sslCertId_;
}

void CreateSlbAPRequest::setSslCertId(const std::string& sslCertId)
{
	sslCertId_ = sslCertId;
	setParameter("SslCertId", sslCertId);
}

int CreateSlbAPRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateSlbAPRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateSlbAPRequest::getProtocol()const
{
	return protocol_;
}

void CreateSlbAPRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setParameter("Protocol", protocol);
}

int CreateSlbAPRequest::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

void CreateSlbAPRequest::setEstablishedTimeout(int establishedTimeout)
{
	establishedTimeout_ = establishedTimeout;
	setParameter("EstablishedTimeout", std::to_string(establishedTimeout));
}

std::string CreateSlbAPRequest::getSlbId()const
{
	return slbId_;
}

void CreateSlbAPRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

int CreateSlbAPRequest::getRealServerPort()const
{
	return realServerPort_;
}

void CreateSlbAPRequest::setRealServerPort(int realServerPort)
{
	realServerPort_ = realServerPort;
	setParameter("RealServerPort", std::to_string(realServerPort));
}

int CreateSlbAPRequest::getStickySession()const
{
	return stickySession_;
}

void CreateSlbAPRequest::setStickySession(int stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", std::to_string(stickySession));
}

int CreateSlbAPRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void CreateSlbAPRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string CreateSlbAPRequest::getName()const
{
	return name_;
}

void CreateSlbAPRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long CreateSlbAPRequest::getEnvId()const
{
	return envId_;
}

void CreateSlbAPRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

