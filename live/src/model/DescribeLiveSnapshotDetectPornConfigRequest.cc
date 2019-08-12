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

#include <alibabacloud/live/model/DescribeLiveSnapshotDetectPornConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveSnapshotDetectPornConfigRequest;

DescribeLiveSnapshotDetectPornConfigRequest::DescribeLiveSnapshotDetectPornConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveSnapshotDetectPornConfig")
{}

DescribeLiveSnapshotDetectPornConfigRequest::~DescribeLiveSnapshotDetectPornConfigRequest()
{}

std::string DescribeLiveSnapshotDetectPornConfigRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveSnapshotDetectPornConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveSnapshotDetectPornConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int DescribeLiveSnapshotDetectPornConfigRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeLiveSnapshotDetectPornConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeLiveSnapshotDetectPornConfigRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeLiveSnapshotDetectPornConfigRequest::getOrder()const
{
	return order_;
}

void DescribeLiveSnapshotDetectPornConfigRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

