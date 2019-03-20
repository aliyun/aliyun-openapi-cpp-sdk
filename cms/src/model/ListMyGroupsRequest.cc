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

#include <alibabacloud/cms/model/ListMyGroupsRequest.h>

using AlibabaCloud::Cms::Model::ListMyGroupsRequest;

ListMyGroupsRequest::ListMyGroupsRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListMyGroups")
{}

ListMyGroupsRequest::~ListMyGroupsRequest()
{}

bool ListMyGroupsRequest::getSelectContactGroups()const
{
	return selectContactGroups_;
}

void ListMyGroupsRequest::setSelectContactGroups(bool selectContactGroups)
{
	selectContactGroups_ = selectContactGroups;
	setParameter("SelectContactGroups", selectContactGroups ? "true" : "false");
}

std::string ListMyGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListMyGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListMyGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMyGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListMyGroupsRequest::getType()const
{
	return type_;
}

void ListMyGroupsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ListMyGroupsRequest::getKeyword()const
{
	return keyword_;
}

void ListMyGroupsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string ListMyGroupsRequest::getGroupName()const
{
	return groupName_;
}

void ListMyGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

int ListMyGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMyGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListMyGroupsRequest::getBindUrls()const
{
	return bindUrls_;
}

void ListMyGroupsRequest::setBindUrls(const std::string& bindUrls)
{
	bindUrls_ = bindUrls;
	setParameter("BindUrls", bindUrls);
}

