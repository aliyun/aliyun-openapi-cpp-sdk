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

#include <alibabacloud/smc/model/UntagResourcesRequest.h>

using AlibabaCloud::Smc::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("smc", "2019-06-01", "UntagResources")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest()
{}

std::string UntagResourcesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UntagResourcesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool UntagResourcesRequest::getAll()const
{
	return all_;
}

void UntagResourcesRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

std::vector<std::string> UntagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
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

long UntagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UntagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UntagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
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

