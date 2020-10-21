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

#include <alibabacloud/sgw/model/ValidateExpressSyncConfigRequest.h>

using AlibabaCloud::Sgw::Model::ValidateExpressSyncConfigRequest;

ValidateExpressSyncConfigRequest::ValidateExpressSyncConfigRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "ValidateExpressSyncConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ValidateExpressSyncConfigRequest::~ValidateExpressSyncConfigRequest()
{}

std::string ValidateExpressSyncConfigRequest::getBucketRegion()const
{
	return bucketRegion_;
}

void ValidateExpressSyncConfigRequest::setBucketRegion(const std::string& bucketRegion)
{
	bucketRegion_ = bucketRegion;
	setParameter("BucketRegion", bucketRegion);
}

std::string ValidateExpressSyncConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ValidateExpressSyncConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ValidateExpressSyncConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ValidateExpressSyncConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ValidateExpressSyncConfigRequest::getBucketName()const
{
	return bucketName_;
}

void ValidateExpressSyncConfigRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string ValidateExpressSyncConfigRequest::getName()const
{
	return name_;
}

void ValidateExpressSyncConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ValidateExpressSyncConfigRequest::getBucketPrefix()const
{
	return bucketPrefix_;
}

void ValidateExpressSyncConfigRequest::setBucketPrefix(const std::string& bucketPrefix)
{
	bucketPrefix_ = bucketPrefix;
	setParameter("BucketPrefix", bucketPrefix);
}

