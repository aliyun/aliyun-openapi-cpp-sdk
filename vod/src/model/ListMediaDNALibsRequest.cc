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

#include <alibabacloud/vod/model/ListMediaDNALibsRequest.h>

using AlibabaCloud::Vod::Model::ListMediaDNALibsRequest;

ListMediaDNALibsRequest::ListMediaDNALibsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListMediaDNALibs")
{
	setMethod(HttpRequest::Method::Post);
}

ListMediaDNALibsRequest::~ListMediaDNALibsRequest()
{}

std::string ListMediaDNALibsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListMediaDNALibsRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListMediaDNALibsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListMediaDNALibsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListMediaDNALibsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListMediaDNALibsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListMediaDNALibsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListMediaDNALibsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListMediaDNALibsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMediaDNALibsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListMediaDNALibsRequest::getLibRegion()const
{
	return libRegion_;
}

void ListMediaDNALibsRequest::setLibRegion(const std::string& libRegion)
{
	libRegion_ = libRegion;
	setParameter("LibRegion", libRegion);
}

