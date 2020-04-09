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

#include <alibabacloud/retailcloud/model/ModifySlbAPRequest.h>

using AlibabaCloud::Retailcloud::Model::ModifySlbAPRequest;

ModifySlbAPRequest::ModifySlbAPRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ModifySlbAP")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySlbAPRequest::~ModifySlbAPRequest()
{}

std::string ModifySlbAPRequest::getSslCertId()const
{
	return sslCertId_;
}

void ModifySlbAPRequest::setSslCertId(const std::string& sslCertId)
{
	sslCertId_ = sslCertId;
	setParameter("SslCertId", sslCertId);
}

int ModifySlbAPRequest::getEstablishedTimeout()const
{
	return establishedTimeout_;
}

void ModifySlbAPRequest::setEstablishedTimeout(int establishedTimeout)
{
	establishedTimeout_ = establishedTimeout;
	setParameter("EstablishedTimeout", std::to_string(establishedTimeout));
}

int ModifySlbAPRequest::getRealServerPort()const
{
	return realServerPort_;
}

void ModifySlbAPRequest::setRealServerPort(int realServerPort)
{
	realServerPort_ = realServerPort;
	setParameter("RealServerPort", std::to_string(realServerPort));
}

int ModifySlbAPRequest::getStickySession()const
{
	return stickySession_;
}

void ModifySlbAPRequest::setStickySession(int stickySession)
{
	stickySession_ = stickySession;
	setParameter("StickySession", std::to_string(stickySession));
}

int ModifySlbAPRequest::getCookieTimeout()const
{
	return cookieTimeout_;
}

void ModifySlbAPRequest::setCookieTimeout(int cookieTimeout)
{
	cookieTimeout_ = cookieTimeout;
	setParameter("CookieTimeout", std::to_string(cookieTimeout));
}

std::string ModifySlbAPRequest::getName()const
{
	return name_;
}

void ModifySlbAPRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long ModifySlbAPRequest::getSlbAPId()const
{
	return slbAPId_;
}

void ModifySlbAPRequest::setSlbAPId(long slbAPId)
{
	slbAPId_ = slbAPId;
	setParameter("SlbAPId", std::to_string(slbAPId));
}

