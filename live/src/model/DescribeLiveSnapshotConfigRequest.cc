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

#include <alibabacloud/live/model/DescribeLiveSnapshotConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveSnapshotConfigRequest;

DescribeLiveSnapshotConfigRequest::DescribeLiveSnapshotConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveSnapshotConfig")
{}

DescribeLiveSnapshotConfigRequest::~DescribeLiveSnapshotConfigRequest()
{}

std::string DescribeLiveSnapshotConfigRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveSnapshotConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeLiveSnapshotConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveSnapshotConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveSnapshotConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveSnapshotConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int DescribeLiveSnapshotConfigRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveSnapshotConfigRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeLiveSnapshotConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveSnapshotConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeLiveSnapshotConfigRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveSnapshotConfigRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string DescribeLiveSnapshotConfigRequest::getOrder()const
{
	return order_;
}

void DescribeLiveSnapshotConfigRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

