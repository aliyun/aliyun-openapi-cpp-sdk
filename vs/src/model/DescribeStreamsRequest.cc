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

#include <alibabacloud/vs/model/DescribeStreamsRequest.h>

using AlibabaCloud::Vs::Model::DescribeStreamsRequest;

DescribeStreamsRequest::DescribeStreamsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeStreams")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStreamsRequest::~DescribeStreamsRequest()
{}

std::string DescribeStreamsRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeStreamsRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

long DescribeStreamsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeStreamsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeStreamsRequest::getParentId()const
{
	return parentId_;
}

void DescribeStreamsRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

long DescribeStreamsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStreamsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeStreamsRequest::getId()const
{
	return id_;
}

void DescribeStreamsRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeStreamsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeStreamsRequest::getApp()const
{
	return app_;
}

void DescribeStreamsRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

std::string DescribeStreamsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeStreamsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long DescribeStreamsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStreamsRequest::getDeviceId()const
{
	return deviceId_;
}

void DescribeStreamsRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string DescribeStreamsRequest::getDomain()const
{
	return domain_;
}

void DescribeStreamsRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeStreamsRequest::getName()const
{
	return name_;
}

void DescribeStreamsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeStreamsRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeStreamsRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

