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

#include <alibabacloud/sgw/model/ExpandCacheDiskRequest.h>

using AlibabaCloud::Sgw::Model::ExpandCacheDiskRequest;

ExpandCacheDiskRequest::ExpandCacheDiskRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ExpandCacheDisk")
{
	setMethod(HttpRequest::Method::Post);
}

ExpandCacheDiskRequest::~ExpandCacheDiskRequest()
{}

std::string ExpandCacheDiskRequest::getLocalFilePath()const
{
	return localFilePath_;
}

void ExpandCacheDiskRequest::setLocalFilePath(const std::string& localFilePath)
{
	localFilePath_ = localFilePath;
	setParameter("LocalFilePath", localFilePath);
}

std::string ExpandCacheDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExpandCacheDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ExpandCacheDiskRequest::getNewSizeInGB()const
{
	return newSizeInGB_;
}

void ExpandCacheDiskRequest::setNewSizeInGB(int newSizeInGB)
{
	newSizeInGB_ = newSizeInGB;
	setParameter("NewSizeInGB", std::to_string(newSizeInGB));
}

std::string ExpandCacheDiskRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExpandCacheDiskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ExpandCacheDiskRequest::getGatewayId()const
{
	return gatewayId_;
}

void ExpandCacheDiskRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

