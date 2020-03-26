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

#include <alibabacloud/cas/model/TagResourcesRequest.h>

using AlibabaCloud::Cas::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("cas", "2018-08-13", "TagResources")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest()
{}

std::string TagResourcesRequest::getTagOwnerUid()const
{
	return tagOwnerUid_;
}

void TagResourcesRequest::setTagOwnerUid(const std::string& tagOwnerUid)
{
	tagOwnerUid_ = tagOwnerUid;
	setParameter("TagOwnerUid", tagOwnerUid);
}

std::string TagResourcesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void TagResourcesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string TagResourcesRequest::getSourceIp()const
{
	return sourceIp_;
}

void TagResourcesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
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

std::string TagResourcesRequest::getScope()const
{
	return scope_;
}

void TagResourcesRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string TagResourcesRequest::getTagOwnerBid()const
{
	return tagOwnerBid_;
}

void TagResourcesRequest::setTagOwnerBid(const std::string& tagOwnerBid)
{
	tagOwnerBid_ = tagOwnerBid;
	setParameter("TagOwnerBid", tagOwnerBid);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag()const
{
	return tag_;
}

void TagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::vector<std::string> TagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

