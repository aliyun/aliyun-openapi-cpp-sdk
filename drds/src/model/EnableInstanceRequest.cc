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

#include <alibabacloud/drds/model/EnableInstanceRequest.h>

using AlibabaCloud::Drds::Model::EnableInstanceRequest;

EnableInstanceRequest::EnableInstanceRequest() :
	RpcServiceRequest("drds", "2017-10-16", "EnableInstance")
{
	setMethod(HttpRequest::Method::Post);
}

EnableInstanceRequest::~EnableInstanceRequest()
{}

std::string EnableInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void EnableInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EnableInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void EnableInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string EnableInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EnableInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string EnableInstanceRequest::getSourceDbInstId()const
{
	return sourceDbInstId_;
}

void EnableInstanceRequest::setSourceDbInstId(const std::string& sourceDbInstId)
{
	sourceDbInstId_ = sourceDbInstId;
	setParameter("SourceDbInstId", sourceDbInstId);
}

std::string EnableInstanceRequest::getRestoreTime()const
{
	return restoreTime_;
}

void EnableInstanceRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

std::string EnableInstanceRequest::getSwitchId()const
{
	return switchId_;
}

void EnableInstanceRequest::setSwitchId(const std::string& switchId)
{
	switchId_ = switchId;
	setParameter("SwitchId", switchId);
}

std::string EnableInstanceRequest::getBackupId()const
{
	return backupId_;
}

void EnableInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string EnableInstanceRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void EnableInstanceRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string EnableInstanceRequest::getDbInstanceClass()const
{
	return dbInstanceClass_;
}

void EnableInstanceRequest::setDbInstanceClass(const std::string& dbInstanceClass)
{
	dbInstanceClass_ = dbInstanceClass;
	setParameter("DbInstanceClass", dbInstanceClass);
}

std::string EnableInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void EnableInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string EnableInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void EnableInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

