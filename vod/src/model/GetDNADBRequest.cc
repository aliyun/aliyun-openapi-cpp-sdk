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

#include <alibabacloud/vod/model/GetDNADBRequest.h>

using AlibabaCloud::Vod::Model::GetDNADBRequest;

GetDNADBRequest::GetDNADBRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetDNADB")
{
	setMethod(HttpRequest::Method::Post);
}

GetDNADBRequest::~GetDNADBRequest()
{}

std::string GetDNADBRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetDNADBRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetDNADBRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetDNADBRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetDNADBRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetDNADBRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetDNADBRequest::getOwnerId()const
{
	return ownerId_;
}

void GetDNADBRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetDNADBRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetDNADBRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetDNADBRequest::getDBId()const
{
	return dBId_;
}

void GetDNADBRequest::setDBId(const std::string& dBId)
{
	dBId_ = dBId;
	setParameter("DBId", dBId);
}

