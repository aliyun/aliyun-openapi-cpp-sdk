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

#include <alibabacloud/sgw/model/DeleteGatewayRequest.h>

using AlibabaCloud::Sgw::Model::DeleteGatewayRequest;

DeleteGatewayRequest::DeleteGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeleteGateway")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGatewayRequest::~DeleteGatewayRequest()
{}

std::string DeleteGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteGatewayRequest::getReasonDetail()const
{
	return reasonDetail_;
}

void DeleteGatewayRequest::setReasonDetail(const std::string& reasonDetail)
{
	reasonDetail_ = reasonDetail;
	setParameter("ReasonDetail", reasonDetail);
}

std::string DeleteGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeleteGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string DeleteGatewayRequest::getReasonType()const
{
	return reasonType_;
}

void DeleteGatewayRequest::setReasonType(const std::string& reasonType)
{
	reasonType_ = reasonType;
	setParameter("ReasonType", reasonType);
}

