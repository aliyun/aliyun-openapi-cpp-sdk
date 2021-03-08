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

#include <alibabacloud/polardb/model/DescribeSQLLogRecordsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSQLLogRecordsRequest;

DescribeSQLLogRecordsRequest::DescribeSQLLogRecordsRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeSQLLogRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogRecordsRequest::~DescribeSQLLogRecordsRequest()
{}

long DescribeSQLLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSQLLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeSQLLogRecordsRequest::getJobId()const
{
	return jobId_;
}

void DescribeSQLLogRecordsRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DescribeSQLLogRecordsRequest::getAccountName()const
{
	return accountName_;
}

void DescribeSQLLogRecordsRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string DescribeSQLLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSQLLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSQLLogRecordsRequest::getState()const
{
	return state_;
}

void DescribeSQLLogRecordsRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

long DescribeSQLLogRecordsRequest::getMinConsume()const
{
	return minConsume_;
}

void DescribeSQLLogRecordsRequest::setMinConsume(long minConsume)
{
	minConsume_ = minConsume;
	setParameter("MinConsume", std::to_string(minConsume));
}

long DescribeSQLLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSQLLogRecordsRequest::getLogicalOperator()const
{
	return logicalOperator_;
}

void DescribeSQLLogRecordsRequest::setLogicalOperator(const std::string& logicalOperator)
{
	logicalOperator_ = logicalOperator;
	setParameter("LogicalOperator", logicalOperator);
}

std::string DescribeSQLLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeSQLLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

long DescribeSQLLogRecordsRequest::getMinScanRows()const
{
	return minScanRows_;
}

void DescribeSQLLogRecordsRequest::setMinScanRows(long minScanRows)
{
	minScanRows_ = minScanRows;
	setParameter("MinScanRows", std::to_string(minScanRows));
}

std::string DescribeSQLLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSQLLogRecordsRequest::getHostAddress()const
{
	return hostAddress_;
}

void DescribeSQLLogRecordsRequest::setHostAddress(const std::string& hostAddress)
{
	hostAddress_ = hostAddress;
	setParameter("HostAddress", hostAddress);
}

std::string DescribeSQLLogRecordsRequest::getSortKey()const
{
	return sortKey_;
}

void DescribeSQLLogRecordsRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setParameter("SortKey", sortKey);
}

int DescribeSQLLogRecordsRequest::getPageNumbers()const
{
	return pageNumbers_;
}

void DescribeSQLLogRecordsRequest::setPageNumbers(int pageNumbers)
{
	pageNumbers_ = pageNumbers;
	setParameter("PageNumbers", std::to_string(pageNumbers));
}

std::string DescribeSQLLogRecordsRequest::getPagingID()const
{
	return pagingID_;
}

void DescribeSQLLogRecordsRequest::setPagingID(const std::string& pagingID)
{
	pagingID_ = pagingID;
	setParameter("PagingID", pagingID);
}

std::string DescribeSQLLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSQLLogRecordsRequest::getTableName()const
{
	return tableName_;
}

void DescribeSQLLogRecordsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string DescribeSQLLogRecordsRequest::getSqlType()const
{
	return sqlType_;
}

void DescribeSQLLogRecordsRequest::setSqlType(const std::string& sqlType)
{
	sqlType_ = sqlType;
	setParameter("SqlType", sqlType);
}

std::string DescribeSQLLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSQLLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeSQLLogRecordsRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeSQLLogRecordsRequest::setMaxRecordsPerPage(int maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setParameter("MaxRecordsPerPage", std::to_string(maxRecordsPerPage));
}

std::string DescribeSQLLogRecordsRequest::getQueryKeyword()const
{
	return queryKeyword_;
}

void DescribeSQLLogRecordsRequest::setQueryKeyword(const std::string& queryKeyword)
{
	queryKeyword_ = queryKeyword;
	setParameter("QueryKeyword", queryKeyword);
}

std::string DescribeSQLLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeSQLLogRecordsRequest::getMaxConsume()const
{
	return maxConsume_;
}

void DescribeSQLLogRecordsRequest::setMaxConsume(long maxConsume)
{
	maxConsume_ = maxConsume;
	setParameter("MaxConsume", std::to_string(maxConsume));
}

std::string DescribeSQLLogRecordsRequest::getThreadID()const
{
	return threadID_;
}

void DescribeSQLLogRecordsRequest::setThreadID(const std::string& threadID)
{
	threadID_ = threadID;
	setParameter("ThreadID", threadID);
}

std::string DescribeSQLLogRecordsRequest::getChildDBInstanceIDs()const
{
	return childDBInstanceIDs_;
}

void DescribeSQLLogRecordsRequest::setChildDBInstanceIDs(const std::string& childDBInstanceIDs)
{
	childDBInstanceIDs_ = childDBInstanceIDs;
	setParameter("ChildDBInstanceIDs", childDBInstanceIDs);
}

std::string DescribeSQLLogRecordsRequest::getSortMethod()const
{
	return sortMethod_;
}

void DescribeSQLLogRecordsRequest::setSortMethod(const std::string& sortMethod)
{
	sortMethod_ = sortMethod;
	setParameter("SortMethod", sortMethod);
}

long DescribeSQLLogRecordsRequest::getMaxScanRows()const
{
	return maxScanRows_;
}

void DescribeSQLLogRecordsRequest::setMaxScanRows(long maxScanRows)
{
	maxScanRows_ = maxScanRows;
	setParameter("MaxScanRows", std::to_string(maxScanRows));
}

