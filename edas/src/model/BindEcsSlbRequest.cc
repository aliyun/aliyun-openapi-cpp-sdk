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

#include <alibabacloud/edas/model/BindEcsSlbRequest.h>

using AlibabaCloud::Edas::Model::BindEcsSlbRequest;

BindEcsSlbRequest::BindEcsSlbRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/slb/bind_slb");
	setMethod(HttpRequest::Method::Post);
}

BindEcsSlbRequest::~BindEcsSlbRequest()
{}

std::string BindEcsSlbRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void BindEcsSlbRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

int BindEcsSlbRequest::getListenerPort()const
{
	return listenerPort_;
}

void BindEcsSlbRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string BindEcsSlbRequest::getVForwardingUrlRule()const
{
	return vForwardingUrlRule_;
}

void BindEcsSlbRequest::setVForwardingUrlRule(const std::string& vForwardingUrlRule)
{
	vForwardingUrlRule_ = vForwardingUrlRule;
	setParameter("VForwardingUrlRule", vForwardingUrlRule);
}

std::string BindEcsSlbRequest::getSlbId()const
{
	return slbId_;
}

void BindEcsSlbRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

std::string BindEcsSlbRequest::getDeployGroupId()const
{
	return deployGroupId_;
}

void BindEcsSlbRequest::setDeployGroupId(const std::string& deployGroupId)
{
	deployGroupId_ = deployGroupId;
	setParameter("DeployGroupId", deployGroupId);
}

std::string BindEcsSlbRequest::getListenerHealthCheckUrl()const
{
	return listenerHealthCheckUrl_;
}

void BindEcsSlbRequest::setListenerHealthCheckUrl(const std::string& listenerHealthCheckUrl)
{
	listenerHealthCheckUrl_ = listenerHealthCheckUrl;
	setParameter("ListenerHealthCheckUrl", listenerHealthCheckUrl);
}

std::string BindEcsSlbRequest::getAppId()const
{
	return appId_;
}

void BindEcsSlbRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string BindEcsSlbRequest::getListenerProtocol()const
{
	return listenerProtocol_;
}

void BindEcsSlbRequest::setListenerProtocol(const std::string& listenerProtocol)
{
	listenerProtocol_ = listenerProtocol;
	setParameter("ListenerProtocol", listenerProtocol);
}

std::string BindEcsSlbRequest::getVServerGroupName()const
{
	return vServerGroupName_;
}

void BindEcsSlbRequest::setVServerGroupName(const std::string& vServerGroupName)
{
	vServerGroupName_ = vServerGroupName;
	setParameter("VServerGroupName", vServerGroupName);
}

