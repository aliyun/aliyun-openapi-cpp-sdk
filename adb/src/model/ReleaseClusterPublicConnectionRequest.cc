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

#include <alibabacloud/adb/model/ReleaseClusterPublicConnectionRequest.h>

using AlibabaCloud::Adb::Model::ReleaseClusterPublicConnectionRequest;

ReleaseClusterPublicConnectionRequest::ReleaseClusterPublicConnectionRequest() :
	RpcServiceRequest("adb", "2019-03-15", "ReleaseClusterPublicConnection")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseClusterPublicConnectionRequest::~ReleaseClusterPublicConnectionRequest()
{}

long ReleaseClusterPublicConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseClusterPublicConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReleaseClusterPublicConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseClusterPublicConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseClusterPublicConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseClusterPublicConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReleaseClusterPublicConnectionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ReleaseClusterPublicConnectionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ReleaseClusterPublicConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleaseClusterPublicConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ReleaseClusterPublicConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseClusterPublicConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

