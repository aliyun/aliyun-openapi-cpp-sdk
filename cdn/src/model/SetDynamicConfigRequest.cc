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

#include <alibabacloud/cdn/model/SetDynamicConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetDynamicConfigRequest;

SetDynamicConfigRequest::SetDynamicConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetDynamicConfig")
{}

SetDynamicConfigRequest::~SetDynamicConfigRequest()
{}

std::string SetDynamicConfigRequest::getDynamicOrigin()const
{
	return dynamicOrigin_;
}

void SetDynamicConfigRequest::setDynamicOrigin(const std::string& dynamicOrigin)
{
	dynamicOrigin_ = dynamicOrigin;
	setCoreParameter("DynamicOrigin", dynamicOrigin);
}

std::string SetDynamicConfigRequest::getStaticType()const
{
	return staticType_;
}

void SetDynamicConfigRequest::setStaticType(const std::string& staticType)
{
	staticType_ = staticType;
	setCoreParameter("StaticType", staticType);
}

std::string SetDynamicConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDynamicConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetDynamicConfigRequest::getStaticUri()const
{
	return staticUri_;
}

void SetDynamicConfigRequest::setStaticUri(const std::string& staticUri)
{
	staticUri_ = staticUri;
	setCoreParameter("StaticUri", staticUri);
}

std::string SetDynamicConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetDynamicConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetDynamicConfigRequest::getStaticPath()const
{
	return staticPath_;
}

void SetDynamicConfigRequest::setStaticPath(const std::string& staticPath)
{
	staticPath_ = staticPath;
	setCoreParameter("StaticPath", staticPath);
}

std::string SetDynamicConfigRequest::getDynamicCacheControl()const
{
	return dynamicCacheControl_;
}

void SetDynamicConfigRequest::setDynamicCacheControl(const std::string& dynamicCacheControl)
{
	dynamicCacheControl_ = dynamicCacheControl;
	setCoreParameter("DynamicCacheControl", dynamicCacheControl);
}

long SetDynamicConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDynamicConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

