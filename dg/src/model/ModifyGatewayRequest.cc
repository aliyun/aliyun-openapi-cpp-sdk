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

#include <alibabacloud/dg/model/ModifyGatewayRequest.h>

using AlibabaCloud::Dg::Model::ModifyGatewayRequest;

ModifyGatewayRequest::ModifyGatewayRequest() :
	RpcServiceRequest("dg", "2019-03-27", "ModifyGateway")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGatewayRequest::~ModifyGatewayRequest()
{}

std::string ModifyGatewayRequest::getGatewayDesc()const
{
	return gatewayDesc_;
}

void ModifyGatewayRequest::setGatewayDesc(const std::string& gatewayDesc)
{
	gatewayDesc_ = gatewayDesc;
	setBodyParameter("GatewayDesc", gatewayDesc);
}

std::string ModifyGatewayRequest::getGatewayName()const
{
	return gatewayName_;
}

void ModifyGatewayRequest::setGatewayName(const std::string& gatewayName)
{
	gatewayName_ = gatewayName;
	setBodyParameter("GatewayName", gatewayName);
}

std::string ModifyGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void ModifyGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setBodyParameter("GatewayId", gatewayId);
}

