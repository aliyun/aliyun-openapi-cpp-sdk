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

std::string ListInstanceRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ListInstanceRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long ListInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListInstanceRequest::getPageNum()const
{
	return pageNum_;
}

void ListInstanceRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

long ListInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstanceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
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
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1);
		setCoreParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setCoreParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

