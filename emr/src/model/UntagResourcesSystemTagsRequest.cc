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
	RpcServiceRequest("emr", "2021-03-20", "UntagResourcesSystemTags")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesSystemTagsRequest::~UntagResourcesSystemTagsRequest()
{}

std::string UntagResourcesSystemTagsRequest::getClientToken()const
{
	return clientToken_;
}

void UntagResourcesSystemTagsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
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

std::string UntagResourcesSystemTagsRequest::getRegionId()const
{
	return regionId_;
}

void UntagResourcesSystemTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool UntagResourcesSystemTagsRequest::getAll()const
{
	return all_;
}

void UntagResourcesSystemTagsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
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

Array UntagResourcesSystemTagsRequest::getTagKeys()const
{
	return tagKeys_;
}

void UntagResourcesSystemTagsRequest::setTagKeys(const Array& tagKeys)
{
	tagKeys_ = tagKeys;
	setParameter("TagKeys", std::to_string(tagKeys));
}

std::string UntagResourcesSystemTagsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UntagResourcesSystemTagsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array UntagResourcesSystemTagsRequest::getResourceIds()const
{
	return resourceIds_;
}

void UntagResourcesSystemTagsRequest::setResourceIds(const Array& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", std::to_string(resourceIds));
}

