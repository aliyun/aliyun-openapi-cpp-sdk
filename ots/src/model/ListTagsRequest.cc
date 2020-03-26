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

#include <alibabacloud/ots/model/ListTagsRequest.h>

using AlibabaCloud::Ots::Model::ListTagsRequest;

ListTagsRequest::ListTagsRequest() :
	RpcServiceRequest("ots", "2016-06-20", "ListTags")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagsRequest::~ListTagsRequest()
{}

long ListTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListTagsRequest::getPageNum()const
{
	return pageNum_;
}

void ListTagsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListTagsRequest::getInstanceName()const
{
	return instanceName_;
}

void ListTagsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

long ListTagsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<ListTagsRequest::TagInfo> ListTagsRequest::getTagInfo()const
{
	return tagInfo_;
}

void ListTagsRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	for(int dep1 = 0; dep1!= tagInfo.size(); dep1++) {
		auto tagInfoObj = tagInfo.at(dep1);
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1 + 1);
		setParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

