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

#include <alibabacloud/sgw/model/UploadCSGClientLogRequest.h>

using AlibabaCloud::Sgw::Model::UploadCSGClientLogRequest;

UploadCSGClientLogRequest::UploadCSGClientLogRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "UploadCSGClientLog")
{
	setMethod(HttpRequest::Method::Post);
}

UploadCSGClientLogRequest::~UploadCSGClientLogRequest()
{}

std::string UploadCSGClientLogRequest::getClientId()const
{
	return clientId_;
}

void UploadCSGClientLogRequest::setClientId(const std::string& clientId)
{
	clientId_ = clientId;
	setParameter("ClientId", clientId);
}

std::string UploadCSGClientLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UploadCSGClientLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UploadCSGClientLogRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void UploadCSGClientLogRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

std::string UploadCSGClientLogRequest::getSecurityToken()const
{
	return securityToken_;
}

void UploadCSGClientLogRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

