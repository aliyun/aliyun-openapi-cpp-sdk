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

#include <alibabacloud/polardb/model/StartSqlLogDetailArchiveRequest.h>

using AlibabaCloud::Polardb::Model::StartSqlLogDetailArchiveRequest;

StartSqlLogDetailArchiveRequest::StartSqlLogDetailArchiveRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "StartSqlLogDetailArchive")
{
	setMethod(HttpRequest::Method::Post);
}

StartSqlLogDetailArchiveRequest::~StartSqlLogDetailArchiveRequest()
{}

long StartSqlLogDetailArchiveRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartSqlLogDetailArchiveRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartSqlLogDetailArchiveRequest::getColumns()const
{
	return columns_;
}

void StartSqlLogDetailArchiveRequest::setColumns(const std::string& columns)
{
	columns_ = columns;
	setParameter("Columns", columns);
}

long StartSqlLogDetailArchiveRequest::getMinScanRows()const
{
	return minScanRows_;
}

void StartSqlLogDetailArchiveRequest::setMinScanRows(long minScanRows)
{
	minScanRows_ = minScanRows;
	setParameter("MinScanRows", std::to_string(minScanRows));
}

std::string StartSqlLogDetailArchiveRequest::getStartTime()const
{
	return startTime_;
}

void StartSqlLogDetailArchiveRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string StartSqlLogDetailArchiveRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartSqlLogDetailArchiveRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartSqlLogDetailArchiveRequest::getHostAddress()const
{
	return hostAddress_;
}

void StartSqlLogDetailArchiveRequest::setHostAddress(const std::string& hostAddress)
{
	hostAddress_ = hostAddress;
	setParameter("HostAddress", hostAddress);
}

std::string StartSqlLogDetailArchiveRequest::getAccountName()const
{
	return accountName_;
}

void StartSqlLogDetailArchiveRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string StartSqlLogDetailArchiveRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartSqlLogDetailArchiveRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartSqlLogDetailArchiveRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StartSqlLogDetailArchiveRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string StartSqlLogDetailArchiveRequest::getState()const
{
	return state_;
}

void StartSqlLogDetailArchiveRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string StartSqlLogDetailArchiveRequest::getTableName()const
{
	return tableName_;
}

void StartSqlLogDetailArchiveRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string StartSqlLogDetailArchiveRequest::getSqlType()const
{
	return sqlType_;
}

void StartSqlLogDetailArchiveRequest::setSqlType(const std::string& sqlType)
{
	sqlType_ = sqlType;
	setParameter("SqlType", sqlType);
}

long StartSqlLogDetailArchiveRequest::getMinConsume()const
{
	return minConsume_;
}

void StartSqlLogDetailArchiveRequest::setMinConsume(long minConsume)
{
	minConsume_ = minConsume;
	setParameter("MinConsume", std::to_string(minConsume));
}

std::string StartSqlLogDetailArchiveRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartSqlLogDetailArchiveRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartSqlLogDetailArchiveRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartSqlLogDetailArchiveRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string StartSqlLogDetailArchiveRequest::getQueryKeyword()const
{
	return queryKeyword_;
}

void StartSqlLogDetailArchiveRequest::setQueryKeyword(const std::string& queryKeyword)
{
	queryKeyword_ = queryKeyword;
	setParameter("QueryKeyword", queryKeyword);
}

std::string StartSqlLogDetailArchiveRequest::getEndTime()const
{
	return endTime_;
}

void StartSqlLogDetailArchiveRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long StartSqlLogDetailArchiveRequest::getOwnerId()const
{
	return ownerId_;
}

void StartSqlLogDetailArchiveRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long StartSqlLogDetailArchiveRequest::getMaxConsume()const
{
	return maxConsume_;
}

void StartSqlLogDetailArchiveRequest::setMaxConsume(long maxConsume)
{
	maxConsume_ = maxConsume;
	setParameter("MaxConsume", std::to_string(maxConsume));
}

std::string StartSqlLogDetailArchiveRequest::getThreadID()const
{
	return threadID_;
}

void StartSqlLogDetailArchiveRequest::setThreadID(const std::string& threadID)
{
	threadID_ = threadID;
	setParameter("ThreadID", threadID);
}

std::string StartSqlLogDetailArchiveRequest::getLogicalOperator()const
{
	return logicalOperator_;
}

void StartSqlLogDetailArchiveRequest::setLogicalOperator(const std::string& logicalOperator)
{
	logicalOperator_ = logicalOperator;
	setParameter("LogicalOperator", logicalOperator);
}

std::string StartSqlLogDetailArchiveRequest::getChildDBInstanceIDs()const
{
	return childDBInstanceIDs_;
}

void StartSqlLogDetailArchiveRequest::setChildDBInstanceIDs(const std::string& childDBInstanceIDs)
{
	childDBInstanceIDs_ = childDBInstanceIDs;
	setParameter("ChildDBInstanceIDs", childDBInstanceIDs);
}

std::string StartSqlLogDetailArchiveRequest::getDBName()const
{
	return dBName_;
}

void StartSqlLogDetailArchiveRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

long StartSqlLogDetailArchiveRequest::getMaxScanRows()const
{
	return maxScanRows_;
}

void StartSqlLogDetailArchiveRequest::setMaxScanRows(long maxScanRows)
{
	maxScanRows_ = maxScanRows;
	setParameter("MaxScanRows", std::to_string(maxScanRows));
}

