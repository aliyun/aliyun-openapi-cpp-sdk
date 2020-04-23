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

#include <alibabacloud/onsmqtt/model/RevokeTokenRequest.h>

using AlibabaCloud::OnsMqtt::Model::RevokeTokenRequest;

RevokeTokenRequest::RevokeTokenRequest() :
	RpcServiceRequest("onsmqtt", "2020-04-20", "RevokeToken")
{
	setMethod(HttpRequest::Method::Post);
}

RevokeTokenRequest::~RevokeTokenRequest()
{}

std::string RevokeTokenRequest::getToken()const
{
	return token_;
}

void RevokeTokenRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string RevokeTokenRequest::getInstanceId()const
{
	return instanceId_;
}

void RevokeTokenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

