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
	RpcServiceRequest("emr", "2021-03-20", "TagResourcesSystemTags")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesSystemTagsRequest::~TagResourcesSystemTagsRequest()
{}

std::string TagResourcesSystemTagsRequest::getClientToken()const
{
	return clientToken_;
}

void TagResourcesSystemTagsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
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

std::string TagResourcesSystemTagsRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesSystemTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

Array TagResourcesSystemTagsRequest::getTags()const
{
	return tags_;
}

void TagResourcesSystemTagsRequest::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

std::string TagResourcesSystemTagsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void TagResourcesSystemTagsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array TagResourcesSystemTagsRequest::getResourceIds()const
{
	return resourceIds_;
}

void TagResourcesSystemTagsRequest::setResourceIds(const Array& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", std::to_string(resourceIds));
}

