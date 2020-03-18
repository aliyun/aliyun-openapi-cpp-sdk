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

#include <alibabacloud/tag/model/UntagResourcesRequest.h>

using AlibabaCloud::Tag::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("tag", "2018-08-28", "UntagResources")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest()
{}

long UntagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UntagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UntagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void UntagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> UntagResourcesRequest::getResourceARN()const
{
	return resourceARN_;
}

void UntagResourcesRequest::setResourceARN(const std::vector<std::string>& resourceARN)
{
	resourceARN_ = resourceARN;
	for(int dep1 = 0; dep1!= resourceARN.size(); dep1++) {
		setParameter("ResourceARN."+ std::to_string(dep1), resourceARN.at(dep1));
	}
}

std::string UntagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UntagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UntagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UntagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UntagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UntagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> UntagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int dep1 = 0; dep1!= tagKey.size(); dep1++) {
		setParameter("TagKey."+ std::to_string(dep1), tagKey.at(dep1));
	}
}

