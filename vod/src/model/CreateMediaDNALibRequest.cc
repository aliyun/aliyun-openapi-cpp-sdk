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

#include <alibabacloud/vod/model/CreateMediaDNALibRequest.h>

using AlibabaCloud::Vod::Model::CreateMediaDNALibRequest;

CreateMediaDNALibRequest::CreateMediaDNALibRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateMediaDNALib")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMediaDNALibRequest::~CreateMediaDNALibRequest()
{}

std::string CreateMediaDNALibRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMediaDNALibRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateMediaDNALibRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMediaDNALibRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateMediaDNALibRequest::getModelType()const
{
	return modelType_;
}

void CreateMediaDNALibRequest::setModelType(const std::string& modelType)
{
	modelType_ = modelType;
	setParameter("ModelType", modelType);
}

std::string CreateMediaDNALibRequest::getLibRegion()const
{
	return libRegion_;
}

void CreateMediaDNALibRequest::setLibRegion(const std::string& libRegion)
{
	libRegion_ = libRegion;
	setParameter("LibRegion", libRegion);
}

std::string CreateMediaDNALibRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMediaDNALibRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateMediaDNALibRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateMediaDNALibRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateMediaDNALibRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMediaDNALibRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

