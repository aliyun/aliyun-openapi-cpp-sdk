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

#include <alibabacloud/emr/model/TagResourcesSystemTagsRequest.h>

using AlibabaCloud::Emr::Model::TagResourcesSystemTagsRequest;

TagResourcesSystemTagsRequest::TagResourcesSystemTagsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "TagResourcesSystemTags")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesSystemTagsRequest::~TagResourcesSystemTagsRequest()
{}

long TagResourcesSystemTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TagResourcesSystemTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> TagResourcesSystemTagsRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesSystemTagsRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

long TagResourcesSystemTagsRequest::getTagOwnerUid()const
{
	return tagOwnerUid_;
}

void TagResourcesSystemTagsRequest::setTagOwnerUid(long tagOwnerUid)
{
	tagOwnerUid_ = tagOwnerUid;
	setParameter("TagOwnerUid", std::to_string(tagOwnerUid));
}

std::string TagResourcesSystemTagsRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesSystemTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string TagResourcesSystemTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TagResourcesSystemTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string TagResourcesSystemTagsRequest::getRegionId()const
{
	return regionId_;
}

void TagResourcesSystemTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string TagResourcesSystemTagsRequest::getScope()const
{
	return scope_;
}

void TagResourcesSystemTagsRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::vector<TagResourcesSystemTagsRequest::Tag> TagResourcesSystemTagsRequest::getTag()const
{
	return tag_;
}

void TagResourcesSystemTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

