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

#include <alibabacloud/emr/model/UntagResourcesSystemTagsRequest.h>

using AlibabaCloud::Emr::Model::UntagResourcesSystemTagsRequest;

UntagResourcesSystemTagsRequest::UntagResourcesSystemTagsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UntagResourcesSystemTags")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesSystemTagsRequest::~UntagResourcesSystemTagsRequest()
{}

bool UntagResourcesSystemTagsRequest::getAll()const
{
	return all_;
}

void UntagResourcesSystemTagsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

long UntagResourcesSystemTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UntagResourcesSystemTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> UntagResourcesSystemTagsRequest::getResourceId()const
{
	return resourceId_;
}

void UntagResourcesSystemTagsRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

long UntagResourcesSystemTagsRequest::getTagOwnerUid()const
{
	return tagOwnerUid_;
}

void UntagResourcesSystemTagsRequest::setTagOwnerUid(long tagOwnerUid)
{
	tagOwnerUid_ = tagOwnerUid;
	setParameter("TagOwnerUid", std::to_string(tagOwnerUid));
}

std::string UntagResourcesSystemTagsRequest::getResourceType()const
{
	return resourceType_;
}

void UntagResourcesSystemTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string UntagResourcesSystemTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UntagResourcesSystemTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UntagResourcesSystemTagsRequest::getRegionId()const
{
	return regionId_;
}

void UntagResourcesSystemTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> UntagResourcesSystemTagsRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesSystemTagsRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int dep1 = 0; dep1!= tagKey.size(); dep1++) {
		setParameter("TagKey."+ std::to_string(dep1), tagKey.at(dep1));
	}
}

