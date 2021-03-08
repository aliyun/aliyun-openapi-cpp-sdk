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

#include <alibabacloud/polardb/model/DescribeSQLLogTemplatesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSQLLogTemplatesRequest;

DescribeSQLLogTemplatesRequest::DescribeSQLLogTemplatesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeSQLLogTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogTemplatesRequest::~DescribeSQLLogTemplatesRequest()
{}

long DescribeSQLLogTemplatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLLogTemplatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSQLLogTemplatesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLLogTemplatesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeSQLLogTemplatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogTemplatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSQLLogTemplatesRequest::getJobId()const
{
	return jobId_;
}

void DescribeSQLLogTemplatesRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DescribeSQLLogTemplatesRequest::getSortKey()const
{
	return sortKey_;
}

void DescribeSQLLogTemplatesRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setParameter("SortKey", sortKey);
}

float DescribeSQLLogTemplatesRequest::getMinAvgScanRows()const
{
	return minAvgScanRows_;
}

void DescribeSQLLogTemplatesRequest::setMinAvgScanRows(float minAvgScanRows)
{
	minAvgScanRows_ = minAvgScanRows;
	setParameter("MinAvgScanRows", std::to_string(minAvgScanRows));
}

std::string DescribeSQLLogTemplatesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSQLLogTemplatesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeSQLLogTemplatesRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeSQLLogTemplatesRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setParameter("PageNumbers", std::to_string(pageNumbers));
}

std::string DescribeSQLLogTemplatesRequest::getPagingId()const
{
	return pagingId_;
}

void DescribeSQLLogTemplatesRequest::setPagingId(const std::string& pagingId)
{
	pagingId_ = pagingId;
	setParameter("PagingId", pagingId);
}

std::string DescribeSQLLogTemplatesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogTemplatesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

float DescribeSQLLogTemplatesRequest::getMaxAvgScanRows()const
{
	return maxAvgScanRows_;
}

void DescribeSQLLogTemplatesRequest::setMaxAvgScanRows(float maxAvgScanRows)
{
	maxAvgScanRows_ = maxAvgScanRows;
	setParameter("MaxAvgScanRows", std::to_string(maxAvgScanRows));
}

std::string DescribeSQLLogTemplatesRequest::getSqlType()const
{
	return sqlType_;
}

void DescribeSQLLogTemplatesRequest::setSqlType(const std::string& sqlType)
{
	sqlType_ = sqlType;
	setParameter("SqlType", sqlType);
}

std::string DescribeSQLLogTemplatesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLLogTemplatesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

float DescribeSQLLogTemplatesRequest::getMinAvgConsume()const
{
	return minAvgConsume_;
}

void DescribeSQLLogTemplatesRequest::setMinAvgConsume(float minAvgConsume)
{
	minAvgConsume_ = minAvgConsume;
	setParameter("MinAvgConsume", std::to_string(minAvgConsume));
}

std::string DescribeSQLLogTemplatesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLLogTemplatesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeSQLLogTemplatesRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeSQLLogTemplatesRequest::setMaxRecordsPerPage(int maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setParameter("MaxRecordsPerPage", std::to_string(maxRecordsPerPage));
}

std::string DescribeSQLLogTemplatesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLLogTemplatesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeSQLLogTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLLogTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

float DescribeSQLLogTemplatesRequest::getMaxAvgConsume()const
{
	return maxAvgConsume_;
}

void DescribeSQLLogTemplatesRequest::setMaxAvgConsume(float maxAvgConsume)
{
	maxAvgConsume_ = maxAvgConsume;
	setParameter("MaxAvgConsume", std::to_string(maxAvgConsume));
}

std::string DescribeSQLLogTemplatesRequest::getChildDBInstanceIDs()const
{
	return childDBInstanceIDs_;
}

void DescribeSQLLogTemplatesRequest::setChildDBInstanceIDs(const std::string& childDBInstanceIDs)
{
	childDBInstanceIDs_ = childDBInstanceIDs;
	setParameter("ChildDBInstanceIDs", childDBInstanceIDs);
}

std::string DescribeSQLLogTemplatesRequest::getSortMethod()const
{
	return sortMethod_;
}

void DescribeSQLLogTemplatesRequest::setSortMethod(const std::string& sortMethod)
{
	sortMethod_ = sortMethod;
	setParameter("SortMethod", sortMethod);
}

