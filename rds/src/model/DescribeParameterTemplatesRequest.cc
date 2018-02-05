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

#include <alibabacloud/rds/model/DescribeParameterTemplatesRequest.h>

using AlibabaCloud::Rds::Model::DescribeParameterTemplatesRequest;

DescribeParameterTemplatesRequest::DescribeParameterTemplatesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeParameterTemplates")
{}

DescribeParameterTemplatesRequest::~DescribeParameterTemplatesRequest()
{}

long DescribeParameterTemplatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeParameterTemplatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeParameterTemplatesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeParameterTemplatesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeParameterTemplatesRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeParameterTemplatesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeParameterTemplatesRequest::getEngine()const
{
	return engine_;
}

void DescribeParameterTemplatesRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeParameterTemplatesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeParameterTemplatesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeParameterTemplatesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeParameterTemplatesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

long DescribeParameterTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParameterTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParameterTemplatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeParameterTemplatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

