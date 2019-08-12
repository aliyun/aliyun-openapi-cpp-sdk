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

#include <alibabacloud/rds/model/DescribeTemplatesListRequest.h>

using AlibabaCloud::Rds::Model::DescribeTemplatesListRequest;

DescribeTemplatesListRequest::DescribeTemplatesListRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeTemplatesList")
{}

DescribeTemplatesListRequest::~DescribeTemplatesListRequest()
{}

long DescribeTemplatesListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTemplatesListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeTemplatesListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTemplatesListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int DescribeTemplatesListRequest::getMinAvgConsume()const
{
	return minAvgConsume_;
}

void DescribeTemplatesListRequest::setMinAvgConsume(int minAvgConsume)
{
	minAvgConsume_ = minAvgConsume;
	setCoreParameter("MinAvgConsume", minAvgConsume);
}

std::string DescribeTemplatesListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTemplatesListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeTemplatesListRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeTemplatesListRequest::setMaxRecordsPerPage(int maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setCoreParameter("MaxRecordsPerPage", maxRecordsPerPage);
}

std::string DescribeTemplatesListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTemplatesListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeTemplatesListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTemplatesListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeTemplatesListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTemplatesListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeTemplatesListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTemplatesListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int DescribeTemplatesListRequest::getMaxAvgConsume()const
{
	return maxAvgConsume_;
}

void DescribeTemplatesListRequest::setMaxAvgConsume(int maxAvgConsume)
{
	maxAvgConsume_ = maxAvgConsume;
	setCoreParameter("MaxAvgConsume", maxAvgConsume);
}

std::string DescribeTemplatesListRequest::getSortKey()const
{
	return sortKey_;
}

void DescribeTemplatesListRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setCoreParameter("SortKey", std::to_string(sortKey));
}

int DescribeTemplatesListRequest::getMinAvgScanRows()const
{
	return minAvgScanRows_;
}

void DescribeTemplatesListRequest::setMinAvgScanRows(int minAvgScanRows)
{
	minAvgScanRows_ = minAvgScanRows;
	setCoreParameter("MinAvgScanRows", minAvgScanRows);
}

std::string DescribeTemplatesListRequest::getSqType()const
{
	return sqType_;
}

void DescribeTemplatesListRequest::setSqType(const std::string& sqType)
{
	sqType_ = sqType;
	setCoreParameter("SqType", std::to_string(sqType));
}

std::string DescribeTemplatesListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTemplatesListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeTemplatesListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTemplatesListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeTemplatesListRequest::getSortMethod()const
{
	return sortMethod_;
}

void DescribeTemplatesListRequest::setSortMethod(const std::string& sortMethod)
{
	sortMethod_ = sortMethod;
	setCoreParameter("SortMethod", std::to_string(sortMethod));
}

int DescribeTemplatesListRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeTemplatesListRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setCoreParameter("PageNumbers", pageNumbers);
}

std::string DescribeTemplatesListRequest::getPagingId()const
{
	return pagingId_;
}

void DescribeTemplatesListRequest::setPagingId(const std::string& pagingId)
{
	pagingId_ = pagingId;
	setCoreParameter("PagingId", std::to_string(pagingId));
}

std::string DescribeTemplatesListRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeTemplatesListRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

int DescribeTemplatesListRequest::getMaxAvgScanRows()const
{
	return maxAvgScanRows_;
}

void DescribeTemplatesListRequest::setMaxAvgScanRows(int maxAvgScanRows)
{
	maxAvgScanRows_ = maxAvgScanRows;
	setCoreParameter("MaxAvgScanRows", maxAvgScanRows);
}

