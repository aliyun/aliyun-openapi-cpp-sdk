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
{}

ListTagsRequest::~ListTagsRequest()
{}

std::string ListTagsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ListTagsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long ListTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListTagsRequest::getInstanceName()const
{
	return instanceName_;
}

void ListTagsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

long ListTagsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListTagsRequest::getPageNum()const
{
	return pageNum_;
}

void ListTagsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::vector<ListTagsRequest::TagInfo> ListTagsRequest::getTagInfo()const
{
	return tagInfo_;
}

void ListTagsRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	int i = 0;
	for(int i = 0; i!= tagInfo.size(); i++)	{
		auto obj = tagInfo.at(i);
		std::string str ="TagInfo."+ std::to_string(i);
		setCoreParameter(str + ".TagValue", std::to_string(obj.tagValue));
		setCoreParameter(str + ".TagKey", std::to_string(obj.tagKey));
	}
}

