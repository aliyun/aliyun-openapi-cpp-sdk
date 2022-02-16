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

#include <alibabacloud/emr/model/TagResourcesRequest.h>

using AlibabaCloud::Emr::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "TagResources")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest()
{}

std::string TagResourcesRequest::getClientToken()const
{
	return clientToken_;
}

void TagResourcesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
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

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

Array TagResourcesRequest::getTags()const
{
	return tags_;
}

void TagResourcesRequest::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

std::string TagResourcesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void TagResourcesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array TagResourcesRequest::getResourceIds()const
{
	return resourceIds_;
}

void TagResourcesRequest::setResourceIds(const Array& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", std::to_string(resourceIds));
}

