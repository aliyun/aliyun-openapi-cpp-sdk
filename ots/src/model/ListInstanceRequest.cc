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

#include <alibabacloud/ots/model/ListInstanceRequest.h>

using AlibabaCloud::Ots::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RpcServiceRequest("ots", "2016-06-20", "ListInstance")
{
	setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest()
{}

long ListInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void ListInstanceRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ListInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstanceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<ListInstanceRequest::TagInfo> ListInstanceRequest::getTagInfo()const
{
	return tagInfo_;
}

void ListInstanceRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	for(int dep1 = 0; dep1!= tagInfo.size(); dep1++) {
		auto tagInfoObj = tagInfo.at(dep1);
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1 + 1);
		setParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

