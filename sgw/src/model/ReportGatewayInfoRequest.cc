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

#include <alibabacloud/sgw/model/ReportGatewayInfoRequest.h>

using AlibabaCloud::Sgw::Model::ReportGatewayInfoRequest;

ReportGatewayInfoRequest::ReportGatewayInfoRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ReportGatewayInfo")
{
	setMethod(HttpRequest::Method::Post);
}

ReportGatewayInfoRequest::~ReportGatewayInfoRequest()
{}

std::string ReportGatewayInfoRequest::getClientUUID()const
{
	return clientUUID_;
}

void ReportGatewayInfoRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string ReportGatewayInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportGatewayInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportGatewayInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReportGatewayInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReportGatewayInfoRequest::getGatewayStatus()const
{
	return gatewayStatus_;
}

void ReportGatewayInfoRequest::setGatewayStatus(const std::string& gatewayStatus)
{
	gatewayStatus_ = gatewayStatus;
	setParameter("GatewayStatus", gatewayStatus);
}

long ReportGatewayInfoRequest::getTime()const
{
	return time_;
}

void ReportGatewayInfoRequest::setTime(long time)
{
	time_ = time;
	setParameter("Time", std::to_string(time));
}

std::string ReportGatewayInfoRequest::getGatewayId()const
{
	return gatewayId_;
}

void ReportGatewayInfoRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string ReportGatewayInfoRequest::getInfo()const
{
	return info_;
}

void ReportGatewayInfoRequest::setInfo(const std::string& info)
{
	info_ = info;
	setParameter("Info", info);
}

