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

#include <alibabacloud/sgw/model/RemoveTagsFromGatewayRequest.h>

using AlibabaCloud::Sgw::Model::RemoveTagsFromGatewayRequest;

RemoveTagsFromGatewayRequest::RemoveTagsFromGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "RemoveTagsFromGateway")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveTagsFromGatewayRequest::~RemoveTagsFromGatewayRequest()
{}

std::string RemoveTagsFromGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveTagsFromGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveTagsFromGatewayRequest::getTags()const
{
	return tags_;
}

void RemoveTagsFromGatewayRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string RemoveTagsFromGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveTagsFromGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RemoveTagsFromGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void RemoveTagsFromGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

