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

#include <alibabacloud/dts/model/DescribeInitializationStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeInitializationStatusRequest;

DescribeInitializationStatusRequest::DescribeInitializationStatusRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeInitializationStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInitializationStatusRequest::~DescribeInitializationStatusRequest()
{}

int DescribeInitializationStatusRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeInitializationStatusRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeInitializationStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInitializationStatusRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeInitializationStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInitializationStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInitializationStatusRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void DescribeInitializationStatusRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string DescribeInitializationStatusRequest::getAccountId()const
{
	return accountId_;
}

void DescribeInitializationStatusRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string DescribeInitializationStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInitializationStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeInitializationStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInitializationStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

