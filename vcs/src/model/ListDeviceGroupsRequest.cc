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

#include <alibabacloud/vcs/model/ListDeviceGroupsRequest.h>

using AlibabaCloud::Vcs::Model::ListDeviceGroupsRequest;

ListDeviceGroupsRequest::ListDeviceGroupsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListDeviceGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceGroupsRequest::~ListDeviceGroupsRequest()
{}

int ListDeviceGroupsRequest::getIsPage()const
{
	return isPage_;
}

void ListDeviceGroupsRequest::setIsPage(int isPage)
{
	isPage_ = isPage;
	setBodyParameter("IsPage", std::to_string(isPage));
}

int ListDeviceGroupsRequest::getPageNum()const
{
	return pageNum_;
}

void ListDeviceGroupsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setBodyParameter("PageNum", std::to_string(pageNum));
}

std::string ListDeviceGroupsRequest::getCorpIdList()const
{
	return corpIdList_;
}

void ListDeviceGroupsRequest::setCorpIdList(const std::string& corpIdList)
{
	corpIdList_ = corpIdList;
	setBodyParameter("CorpIdList", corpIdList);
}

std::string ListDeviceGroupsRequest::getDeviceCodeList()const
{
	return deviceCodeList_;
}

void ListDeviceGroupsRequest::setDeviceCodeList(const std::string& deviceCodeList)
{
	deviceCodeList_ = deviceCodeList;
	setBodyParameter("DeviceCodeList", deviceCodeList);
}

std::string ListDeviceGroupsRequest::getName()const
{
	return name_;
}

void ListDeviceGroupsRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

int ListDeviceGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListDeviceGroupsRequest::getGroup()const
{
	return group_;
}

void ListDeviceGroupsRequest::setGroup(const std::string& group)
{
	group_ = group;
	setBodyParameter("Group", group);
}

