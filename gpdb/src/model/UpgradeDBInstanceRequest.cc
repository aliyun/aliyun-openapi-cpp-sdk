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

#include <alibabacloud/gpdb/model/UpgradeDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::UpgradeDBInstanceRequest;

UpgradeDBInstanceRequest::UpgradeDBInstanceRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "UpgradeDBInstance")
{}

UpgradeDBInstanceRequest::~UpgradeDBInstanceRequest()
{}

std::string UpgradeDBInstanceRequest::getDBInstanceGroupCount()const
{
	return dBInstanceGroupCount_;
}

void UpgradeDBInstanceRequest::setDBInstanceGroupCount(const std::string& dBInstanceGroupCount)
{
	dBInstanceGroupCount_ = dBInstanceGroupCount;
	setCoreParameter("DBInstanceGroupCount", dBInstanceGroupCount);
}

std::string UpgradeDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpgradeDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long UpgradeDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceRequest::getPayType()const
{
	return payType_;
}

void UpgradeDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string UpgradeDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpgradeDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void UpgradeDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

