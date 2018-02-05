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

#include <alibabacloud/cdn/model/SetOssLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetOssLogConfigRequest;

SetOssLogConfigRequest::SetOssLogConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetOssLogConfig")
{}

SetOssLogConfigRequest::~SetOssLogConfigRequest()
{}

std::string SetOssLogConfigRequest::getBucket()const
{
	return bucket_;
}

void SetOssLogConfigRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setParameter("Bucket", bucket);
}

std::string SetOssLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetOssLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetOssLogConfigRequest::getEnable()const
{
	return enable_;
}

void SetOssLogConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetOssLogConfigRequest::getPrefix()const
{
	return prefix_;
}

void SetOssLogConfigRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setParameter("Prefix", prefix);
}

long SetOssLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetOssLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetOssLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetOssLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

