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

#include <alibabacloud/rds/model/ModifyCollationTimeZoneRequest.h>

using AlibabaCloud::Rds::Model::ModifyCollationTimeZoneRequest;

ModifyCollationTimeZoneRequest::ModifyCollationTimeZoneRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyCollationTimeZone")
{}

ModifyCollationTimeZoneRequest::~ModifyCollationTimeZoneRequest()
{}

long ModifyCollationTimeZoneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCollationTimeZoneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyCollationTimeZoneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCollationTimeZoneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyCollationTimeZoneRequest::getTimezone()const
{
	return timezone_;
}

void ModifyCollationTimeZoneRequest::setTimezone(const std::string& timezone)
{
	timezone_ = timezone;
	setCoreParameter("Timezone", std::to_string(timezone));
}

std::string ModifyCollationTimeZoneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyCollationTimeZoneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string ModifyCollationTimeZoneRequest::getCollation()const
{
	return collation_;
}

void ModifyCollationTimeZoneRequest::setCollation(const std::string& collation)
{
	collation_ = collation;
	setCoreParameter("Collation", std::to_string(collation));
}

long ModifyCollationTimeZoneRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCollationTimeZoneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyCollationTimeZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyCollationTimeZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

