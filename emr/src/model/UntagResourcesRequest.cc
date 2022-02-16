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

#include <alibabacloud/emr/model/UntagResourcesRequest.h>

using AlibabaCloud::Emr::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UntagResources")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest()
{}

std::string UntagResourcesRequest::getClientToken()const
{
	return clientToken_;
}

void UntagResourcesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
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

bool UntagResourcesRequest::getAll()const
{
	return all_;
}

void UntagResourcesRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
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

bool UntagResourcesRequest::getUntagAll()const
{
	return untagAll_;
}

void UntagResourcesRequest::setUntagAll(bool untagAll)
{
	untagAll_ = untagAll;
	setParameter("UntagAll", untagAll ? "true" : "false");
}

Array UntagResourcesRequest::getTagKeys()const
{
	return tagKeys_;
}

void UntagResourcesRequest::setTagKeys(const Array& tagKeys)
{
	tagKeys_ = tagKeys;
	setParameter("TagKeys", std::to_string(tagKeys));
}

std::string UntagResourcesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UntagResourcesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array UntagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesRequest::setTagKey(const Array& tagKey)
{
	tagKey_ = tagKey;
	setParameter("TagKey", std::to_string(tagKey));
}

Array UntagResourcesRequest::getResourceIds()const
{
	return resourceIds_;
}

void UntagResourcesRequest::setResourceIds(const Array& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", std::to_string(resourceIds));
}

