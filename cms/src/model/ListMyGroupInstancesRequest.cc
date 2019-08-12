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

#include <alibabacloud/cms/model/ListMyGroupInstancesRequest.h>

using AlibabaCloud::Cms::Model::ListMyGroupInstancesRequest;

ListMyGroupInstancesRequest::ListMyGroupInstancesRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListMyGroupInstances")
{}

ListMyGroupInstancesRequest::~ListMyGroupInstancesRequest()
{}

bool ListMyGroupInstancesRequest::getTotal()const
{
	return total_;
}

void ListMyGroupInstancesRequest::setTotal(bool total)
{
	total_ = total;
	setCoreParameter("Total", total);
}

std::string ListMyGroupInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ListMyGroupInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

long ListMyGroupInstancesRequest::getGroupId()const
{
	return groupId_;
}

void ListMyGroupInstancesRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int ListMyGroupInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListMyGroupInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListMyGroupInstancesRequest::getCategory()const
{
	return category_;
}

void ListMyGroupInstancesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string ListMyGroupInstancesRequest::getKeyword()const
{
	return keyword_;
}

void ListMyGroupInstancesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

int ListMyGroupInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMyGroupInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

