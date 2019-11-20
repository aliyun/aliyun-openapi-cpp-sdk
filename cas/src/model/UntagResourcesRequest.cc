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

#include <alibabacloud/cas/model/UntagResourcesRequest.h>

using AlibabaCloud::Cas::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("cas", "2018-08-13", "UntagResources")
{
	setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest()
{}

std::string UntagResourcesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UntagResourcesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string UntagResourcesRequest::getSourceIp()const
{
	return sourceIp_;
}

void UntagResourcesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string UntagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void UntagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool UntagResourcesRequest::getAll()const
{
	return all_;
}

void UntagResourcesRequest::setAll(bool all)
{
	all_ = all;
	setCoreParameter("All", all ? "true" : "false");
}

std::vector<std::string> UntagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++)
		setCoreParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
}

std::string UntagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::vector<std::string> UntagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int dep1 = 0; dep1!= tagKey.size(); dep1++)
		setCoreParameter("TagKey."+ std::to_string(dep1), tagKey.at(dep1));
}

