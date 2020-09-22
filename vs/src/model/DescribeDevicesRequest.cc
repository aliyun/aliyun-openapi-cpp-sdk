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

#include <alibabacloud/vs/model/DescribeDevicesRequest.h>

using AlibabaCloud::Vs::Model::DescribeDevicesRequest;

DescribeDevicesRequest::DescribeDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDevicesRequest::~DescribeDevicesRequest()
{}

std::string DescribeDevicesRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeDevicesRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

bool DescribeDevicesRequest::getIncludeDirectory()const
{
	return includeDirectory_;
}

void DescribeDevicesRequest::setIncludeDirectory(bool includeDirectory)
{
	includeDirectory_ = includeDirectory;
	setParameter("IncludeDirectory", includeDirectory ? "true" : "false");
}

std::string DescribeDevicesRequest::getGbId()const
{
	return gbId_;
}

void DescribeDevicesRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setParameter("GbId", gbId);
}

std::string DescribeDevicesRequest::getType()const
{
	return type_;
}

void DescribeDevicesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeDevicesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeDevicesRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeDevicesRequest::getParentId()const
{
	return parentId_;
}

void DescribeDevicesRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

bool DescribeDevicesRequest::getIncludeStats()const
{
	return includeStats_;
}

void DescribeDevicesRequest::setIncludeStats(bool includeStats)
{
	includeStats_ = includeStats;
	setParameter("IncludeStats", includeStats ? "true" : "false");
}

std::string DescribeDevicesRequest::getVendor()const
{
	return vendor_;
}

void DescribeDevicesRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setParameter("Vendor", vendor);
}

long DescribeDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDevicesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDevicesRequest::getDirectoryId()const
{
	return directoryId_;
}

void DescribeDevicesRequest::setDirectoryId(const std::string& directoryId)
{
	directoryId_ = directoryId;
	setParameter("DirectoryId", directoryId);
}

std::string DescribeDevicesRequest::getId()const
{
	return id_;
}

void DescribeDevicesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeDevicesRequest::getShowLog()const
{
	return showLog_;
}

void DescribeDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeDevicesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDevicesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long DescribeDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDevicesRequest::getName()const
{
	return name_;
}

void DescribeDevicesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeDevicesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDevicesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string DescribeDevicesRequest::getStatus()const
{
	return status_;
}

void DescribeDevicesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

