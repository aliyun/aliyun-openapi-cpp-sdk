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

#include <alibabacloud/rds/model/StartArchiveSQLLogRequest.h>

using AlibabaCloud::Rds::Model::StartArchiveSQLLogRequest;

StartArchiveSQLLogRequest::StartArchiveSQLLogRequest() :
	RpcServiceRequest("rds", "2014-08-15", "StartArchiveSQLLog")
{}

StartArchiveSQLLogRequest::~StartArchiveSQLLogRequest()
{}

long StartArchiveSQLLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartArchiveSQLLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartArchiveSQLLogRequest::getDatabase()const
{
	return database_;
}

void StartArchiveSQLLogRequest::setDatabase(const std::string& database)
{
	database_ = database;
	setParameter("Database", database);
}

std::string StartArchiveSQLLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartArchiveSQLLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartArchiveSQLLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartArchiveSQLLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string StartArchiveSQLLogRequest::getEndTime()const
{
	return endTime_;
}

void StartArchiveSQLLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string StartArchiveSQLLogRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StartArchiveSQLLogRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string StartArchiveSQLLogRequest::getStartTime()const
{
	return startTime_;
}

void StartArchiveSQLLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long StartArchiveSQLLogRequest::getOwnerId()const
{
	return ownerId_;
}

void StartArchiveSQLLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartArchiveSQLLogRequest::getUser()const
{
	return user_;
}

void StartArchiveSQLLogRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

std::string StartArchiveSQLLogRequest::getQueryKeywords()const
{
	return queryKeywords_;
}

void StartArchiveSQLLogRequest::setQueryKeywords(const std::string& queryKeywords)
{
	queryKeywords_ = queryKeywords;
	setParameter("QueryKeywords", queryKeywords);
}

std::string StartArchiveSQLLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartArchiveSQLLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

