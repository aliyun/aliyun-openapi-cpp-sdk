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

#include <alibabacloud/sgw/model/ReportBlockVolumesRequest.h>

using AlibabaCloud::Sgw::Model::ReportBlockVolumesRequest;

ReportBlockVolumesRequest::ReportBlockVolumesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ReportBlockVolumes")
{
	setMethod(HttpRequest::Method::Post);
}

ReportBlockVolumesRequest::~ReportBlockVolumesRequest()
{}

std::string ReportBlockVolumesRequest::getClientUUID()const
{
	return clientUUID_;
}

void ReportBlockVolumesRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string ReportBlockVolumesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportBlockVolumesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportBlockVolumesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReportBlockVolumesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReportBlockVolumesRequest::getGatewayId()const
{
	return gatewayId_;
}

void ReportBlockVolumesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string ReportBlockVolumesRequest::getInfo()const
{
	return info_;
}

void ReportBlockVolumesRequest::setInfo(const std::string& info)
{
	info_ = info;
	setParameter("Info", info);
}

