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

#include <alibabacloud/sgw/model/OperateGatewayRequest.h>

using AlibabaCloud::Sgw::Model::OperateGatewayRequest;

OperateGatewayRequest::OperateGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "OperateGateway")
{
	setMethod(HttpRequest::Method::Post);
}

OperateGatewayRequest::~OperateGatewayRequest()
{}

std::string OperateGatewayRequest::getOperateAction()const
{
	return operateAction_;
}

void OperateGatewayRequest::setOperateAction(const std::string& operateAction)
{
	operateAction_ = operateAction;
	setParameter("OperateAction", operateAction);
}

std::string OperateGatewayRequest::getParams()const
{
	return params_;
}

void OperateGatewayRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string OperateGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OperateGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OperateGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void OperateGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string OperateGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void OperateGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

