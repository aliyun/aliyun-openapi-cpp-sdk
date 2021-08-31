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

#include <alibabacloud/edas/model/BindSlbRequest.h>

using AlibabaCloud::Edas::Model::BindSlbRequest;

BindSlbRequest::BindSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/app/bind_slb_json");
	setMethod(HttpRequest::Method::Post);
}

BindSlbRequest::~BindSlbRequest()
{}

std::string BindSlbRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void BindSlbRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int BindSlbRequest::getListenerPort()const
{
	return listenerPort_;
}

void BindSlbRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string BindSlbRequest::getSlbId()const
{
	return slbId_;
}

void BindSlbRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

std::string BindSlbRequest::getAppId()const
{
	return appId_;
}

void BindSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string BindSlbRequest::getSlbIp()const
{
	return slbIp_;
}

void BindSlbRequest::setSlbIp(const std::string& slbIp)
{
	slbIp_ = slbIp;
	setParameter("SlbIp", slbIp);
}

std::string BindSlbRequest::getType()const
{
	return type_;
}

void BindSlbRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

