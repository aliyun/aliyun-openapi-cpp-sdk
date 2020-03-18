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

#include <alibabacloud/tag/model/TagResourcesRequest.h>

using AlibabaCloud::Tag::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("tag", "2018-08-28", "TagResources")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest()
{}

long TagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string TagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> TagResourcesRequest::getResourceARN()const
{
	return resourceARN_;
}

void TagResourcesRequest::setResourceARN(const std::vector<std::string>& resourceARN)
{
	resourceARN_ = resourceARN;
	for(int dep1 = 0; dep1!= resourceARN.size(); dep1++) {
		setParameter("ResourceARN."+ std::to_string(dep1), resourceARN.at(dep1));
	}
}

std::string TagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long TagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void TagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string TagResourcesRequest::getTags()const
{
	return tags_;
}

void TagResourcesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

