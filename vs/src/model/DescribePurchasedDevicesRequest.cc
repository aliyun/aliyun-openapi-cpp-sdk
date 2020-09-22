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

#include <alibabacloud/vs/model/DescribePurchasedDevicesRequest.h>

using AlibabaCloud::Vs::Model::DescribePurchasedDevicesRequest;

DescribePurchasedDevicesRequest::DescribePurchasedDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribePurchasedDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePurchasedDevicesRequest::~DescribePurchasedDevicesRequest()
{}

std::string DescribePurchasedDevicesRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribePurchasedDevicesRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

std::string DescribePurchasedDevicesRequest::getType()const
{
	return type_;
}

void DescribePurchasedDevicesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribePurchasedDevicesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribePurchasedDevicesRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribePurchasedDevicesRequest::getSubType()const
{
	return subType_;
}

void DescribePurchasedDevicesRequest::setSubType(const std::string& subType)
{
	subType_ = subType;
	setParameter("SubType", subType);
}

std::string DescribePurchasedDevicesRequest::getVendor()const
{
	return vendor_;
}

void DescribePurchasedDevicesRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setParameter("Vendor", vendor);
}

long DescribePurchasedDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePurchasedDevicesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePurchasedDevicesRequest::getId()const
{
	return id_;
}

void DescribePurchasedDevicesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribePurchasedDevicesRequest::getShowLog()const
{
	return showLog_;
}

void DescribePurchasedDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribePurchasedDevicesRequest::getGroupId()const
{
	return groupId_;
}

void DescribePurchasedDevicesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long DescribePurchasedDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePurchasedDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePurchasedDevicesRequest::getName()const
{
	return name_;
}

void DescribePurchasedDevicesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribePurchasedDevicesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribePurchasedDevicesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

