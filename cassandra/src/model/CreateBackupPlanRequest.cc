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

#include <alibabacloud/cassandra/model/CreateBackupPlanRequest.h>

using AlibabaCloud::Cassandra::Model::CreateBackupPlanRequest;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "CreateBackupPlan")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBackupPlanRequest::~CreateBackupPlanRequest()
{}

std::string CreateBackupPlanRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBackupPlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int CreateBackupPlanRequest::getRetentionPeriod()const
{
	return retentionPeriod_;
}

void CreateBackupPlanRequest::setRetentionPeriod(int retentionPeriod)
{
	retentionPeriod_ = retentionPeriod;
	setParameter("RetentionPeriod", std::to_string(retentionPeriod));
}

std::string CreateBackupPlanRequest::getDataCenterId()const
{
	return dataCenterId_;
}

void CreateBackupPlanRequest::setDataCenterId(const std::string& dataCenterId)
{
	dataCenterId_ = dataCenterId;
	setParameter("DataCenterId", dataCenterId);
}

bool CreateBackupPlanRequest::getActive()const
{
	return active_;
}

void CreateBackupPlanRequest::setActive(bool active)
{
	active_ = active;
	setParameter("Active", active ? "true" : "false");
}

std::string CreateBackupPlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateBackupPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateBackupPlanRequest::getBackupTime()const
{
	return backupTime_;
}

void CreateBackupPlanRequest::setBackupTime(const std::string& backupTime)
{
	backupTime_ = backupTime;
	setParameter("BackupTime", backupTime);
}

std::string CreateBackupPlanRequest::getBackupPeriod()const
{
	return backupPeriod_;
}

void CreateBackupPlanRequest::setBackupPeriod(const std::string& backupPeriod)
{
	backupPeriod_ = backupPeriod;
	setParameter("BackupPeriod", backupPeriod);
}

