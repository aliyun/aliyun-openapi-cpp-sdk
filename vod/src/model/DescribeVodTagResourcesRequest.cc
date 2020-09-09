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

#include <alibabacloud/vod/model/DescribeVodTagResourcesRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodTagResourcesRequest;

DescribeVodTagResourcesRequest::DescribeVodTagResourcesRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodTagResourcesRequest::~DescribeVodTagResourcesRequest()
{}

std::string DescribeVodTagResourcesRequest::getScope()const
{
	return scope_;
}

void DescribeVodTagResourcesRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::vector<DescribeVodTagResourcesRequest::Tag> DescribeVodTagResourcesRequest::getTag()const
{
	return tag_;
}

void DescribeVodTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::vector<std::string> DescribeVodTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeVodTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

long DescribeVodTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeVodTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

