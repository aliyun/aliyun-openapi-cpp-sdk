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
{}

TagResourcesRequest::~TagResourcesRequest()
{}

std::vector<std::string> TagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), std::to_string(resourceId.at(i)));
}

std::string TagResourcesRequest::getSourceIp()const
{
	return sourceIp_;
}

void TagResourcesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string TagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string TagResourcesRequest::getScope()const
{
	return scope_;
}

void TagResourcesRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", std::to_string(scope));
}

std::string TagResourcesRequest::getTagOwnerUid()const
{
	return tagOwnerUid_;
}

void TagResourcesRequest::setTagOwnerUid(const std::string& tagOwnerUid)
{
	tagOwnerUid_ = tagOwnerUid;
	setCoreParameter("TagOwnerUid", std::to_string(tagOwnerUid));
}

std::string TagResourcesRequest::getTagOwnerBid()const
{
	return tagOwnerBid_;
}

void TagResourcesRequest::setTagOwnerBid(const std::string& tagOwnerBid)
{
	tagOwnerBid_ = tagOwnerBid;
	setCoreParameter("TagOwnerBid", std::to_string(tagOwnerBid));
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag()const
{
	return tag_;
}

void TagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

