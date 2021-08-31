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

#include <alibabacloud/edas/model/UntagResourcesRequest.h>

using AlibabaCloud::Edas::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/tag/tags");
	setMethod(HttpRequest::Method::Delete);
}

UntagResourcesRequest::~UntagResourcesRequest()
{}

std::string UntagResourcesRequest::getTagKeys()const
{
	return tagKeys_;
}

void UntagResourcesRequest::setTagKeys(const std::string& tagKeys)
{
	tagKeys_ = tagKeys;
	setParameter("TagKeys", tagKeys);
}

bool UntagResourcesRequest::getDeleteAll()const
{
	return deleteAll_;
}

void UntagResourcesRequest::setDeleteAll(bool deleteAll)
{
	deleteAll_ = deleteAll;
	setParameter("DeleteAll", deleteAll ? "true" : "false");
}

std::string UntagResourcesRequest::getResourceRegionId()const
{
	return resourceRegionId_;
}

void UntagResourcesRequest::setResourceRegionId(const std::string& resourceRegionId)
{
	resourceRegionId_ = resourceRegionId;
	setParameter("ResourceRegionId", resourceRegionId);
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

std::string UntagResourcesRequest::getResourceIds()const
{
	return resourceIds_;
}

void UntagResourcesRequest::setResourceIds(const std::string& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", resourceIds);
}

