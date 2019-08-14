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

#include <alibabacloud/cbn/model/UntagResourcesRequest.h>

using AlibabaCloud::Cbn::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "UntagResources")
{}

UntagResourcesRequest::~UntagResourcesRequest()
{}

long UntagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UntagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> UntagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), resourceId.at(i));
}

std::string UntagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UntagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UntagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UntagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UntagResourcesRequest::getTagOwnerUid()const
{
	return tagOwnerUid_;
}

void UntagResourcesRequest::setTagOwnerUid(long tagOwnerUid)
{
	tagOwnerUid_ = tagOwnerUid;
	setCoreParameter("TagOwnerUid", std::to_string(tagOwnerUid));
}

std::string UntagResourcesRequest::getTagOwnerBid()const
{
	return tagOwnerBid_;
}

void UntagResourcesRequest::setTagOwnerBid(const std::string& tagOwnerBid)
{
	tagOwnerBid_ = tagOwnerBid;
	setCoreParameter("TagOwnerBid", tagOwnerBid);
}

long UntagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UntagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> UntagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int i = 0; i!= tagKey.size(); i++)
		setCoreParameter("TagKey."+ std::to_string(i), tagKey.at(i));
}

std::string UntagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

