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

#include <alibabacloud/cms/model/ListMyGroupInstancesDetailsRequest.h>

using AlibabaCloud::Cms::Model::ListMyGroupInstancesDetailsRequest;

ListMyGroupInstancesDetailsRequest::ListMyGroupInstancesDetailsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListMyGroupInstancesDetails")
{}

ListMyGroupInstancesDetailsRequest::~ListMyGroupInstancesDetailsRequest()
{}

bool ListMyGroupInstancesDetailsRequest::getTotal()const
{
	return total_;
}

void ListMyGroupInstancesDetailsRequest::setTotal(bool total)
{
	total_ = total;
	setParameter("Total", total ? "true" : "false");
}

std::string ListMyGroupInstancesDetailsRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ListMyGroupInstancesDetailsRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

long ListMyGroupInstancesDetailsRequest::getGroupId()const
{
	return groupId_;
}

void ListMyGroupInstancesDetailsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

int ListMyGroupInstancesDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMyGroupInstancesDetailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListMyGroupInstancesDetailsRequest::getCategory()const
{
	return category_;
}

void ListMyGroupInstancesDetailsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string ListMyGroupInstancesDetailsRequest::getKeyword()const
{
	return keyword_;
}

void ListMyGroupInstancesDetailsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int ListMyGroupInstancesDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMyGroupInstancesDetailsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

