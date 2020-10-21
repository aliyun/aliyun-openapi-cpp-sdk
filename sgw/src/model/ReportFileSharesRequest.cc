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

#include <alibabacloud/sgw/model/ReportFileSharesRequest.h>

using AlibabaCloud::Sgw::Model::ReportFileSharesRequest;

ReportFileSharesRequest::ReportFileSharesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ReportFileShares")
{
	setMethod(HttpRequest::Method::Post);
}

ReportFileSharesRequest::~ReportFileSharesRequest()
{}

std::string ReportFileSharesRequest::getClientUUID()const
{
	return clientUUID_;
}

void ReportFileSharesRequest::setClientUUID(const std::string& clientUUID)
{
	clientUUID_ = clientUUID;
	setParameter("ClientUUID", clientUUID);
}

std::string ReportFileSharesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportFileSharesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReportFileSharesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReportFileSharesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReportFileSharesRequest::getGatewayId()const
{
	return gatewayId_;
}

void ReportFileSharesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string ReportFileSharesRequest::getInfo()const
{
	return info_;
}

void ReportFileSharesRequest::setInfo(const std::string& info)
{
	info_ = info;
	setParameter("Info", info);
}

