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

#include <alibabacloud/polardbx/model/UpgradeDBInstanceKernelVersionRequest.h>

using AlibabaCloud::Polardbx::Model::UpgradeDBInstanceKernelVersionRequest;

UpgradeDBInstanceKernelVersionRequest::UpgradeDBInstanceKernelVersionRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "UpgradeDBInstanceKernelVersion")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceKernelVersionRequest::~UpgradeDBInstanceKernelVersionRequest()
{}

std::string UpgradeDBInstanceKernelVersionRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void UpgradeDBInstanceKernelVersionRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string UpgradeDBInstanceKernelVersionRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeDBInstanceKernelVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getSwitchTime()const
{
	return switchTime_;
}

void UpgradeDBInstanceKernelVersionRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string UpgradeDBInstanceKernelVersionRequest::getUpgradeTime()const
{
	return upgradeTime_;
}

void UpgradeDBInstanceKernelVersionRequest::setUpgradeTime(const std::string& upgradeTime)
{
	upgradeTime_ = upgradeTime;
	setParameter("UpgradeTime", upgradeTime);
}

