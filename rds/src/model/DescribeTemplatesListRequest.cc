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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTemplatesListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTemplatesListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int DescribeTemplatesListRequest::getMinAvgConsume()const
{
	return minAvgConsume_;
}

void DescribeTemplatesListRequest::setMinAvgConsume(int minAvgConsume)
{
	minAvgConsume_ = minAvgConsume;
	setParameter("MinAvgConsume", std::to_string(minAvgConsume));
}

std::string DescribeTemplatesListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTemplatesListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeTemplatesListRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeTemplatesListRequest::setMaxRecordsPerPage(int maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setParameter("MaxRecordsPerPage", std::to_string(maxRecordsPerPage));
}

std::string DescribeTemplatesListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTemplatesListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeTemplatesListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTemplatesListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeTemplatesListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTemplatesListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTemplatesListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTemplatesListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescribeTemplatesListRequest::getMaxAvgConsume()const
{
	return maxAvgConsume_;
}

void DescribeTemplatesListRequest::setMaxAvgConsume(int maxAvgConsume)
{
	maxAvgConsume_ = maxAvgConsume;
	setParameter("MaxAvgConsume", std::to_string(maxAvgConsume));
}

std::string DescribeTemplatesListRequest::getSortKey()const
{
	return sortKey_;
}

void DescribeTemplatesListRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setParameter("SortKey", sortKey);
}

int DescribeTemplatesListRequest::getMinAvgScanRows()const
{
	return minAvgScanRows_;
}

void DescribeTemplatesListRequest::setMinAvgScanRows(int minAvgScanRows)
{
	minAvgScanRows_ = minAvgScanRows;
	setParameter("MinAvgScanRows", std::to_string(minAvgScanRows));
}

std::string DescribeTemplatesListRequest::getSqType()const
{
	return sqType_;
}

void DescribeTemplatesListRequest::setSqType(const std::string& sqType)
{
	sqType_ = sqType;
	setParameter("SqType", sqType);
}

std::string DescribeTemplatesListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTemplatesListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeTemplatesListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTemplatesListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeTemplatesListRequest::getSortMethod()const
{
	return sortMethod_;
}

void DescribeTemplatesListRequest::setSortMethod(const std::string& sortMethod)
{
	sortMethod_ = sortMethod;
	setParameter("SortMethod", sortMethod);
}

int DescribeTemplatesListRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeTemplatesListRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setParameter("PageNumbers", std::to_string(pageNumbers));
}

std::string DescribeTemplatesListRequest::getPagingId()const
{
	return pagingId_;
}

void DescribeTemplatesListRequest::setPagingId(const std::string& pagingId)
{
	pagingId_ = pagingId;
	setParameter("PagingId", pagingId);
}

std::string DescribeTemplatesListRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeTemplatesListRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

int DescribeTemplatesListRequest::getMaxAvgScanRows()const
{
	return maxAvgScanRows_;
}

void DescribeTemplatesListRequest::setMaxAvgScanRows(int maxAvgScanRows)
{
	maxAvgScanRows_ = maxAvgScanRows;
	setParameter("MaxAvgScanRows", std::to_string(maxAvgScanRows));
}

