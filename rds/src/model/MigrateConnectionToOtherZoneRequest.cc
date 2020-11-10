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

#include <alibabacloud/rds/model/MigrateConnectionToOtherZoneRequest.h>

using AlibabaCloud::Rds::Model::MigrateConnectionToOtherZoneRequest;

MigrateConnectionToOtherZoneRequest::MigrateConnectionToOtherZoneRequest() :
	RpcServiceRequest("rds", "2014-08-15", "MigrateConnectionToOtherZone")
{
	setMethod(HttpRequest::Method::Post);
}

MigrateConnectionToOtherZoneRequest::~MigrateConnectionToOtherZoneRequest()
{}

std::string MigrateConnectionToOtherZoneRequest::getConnectionString()const
{
	return connectionString_;
}

void MigrateConnectionToOtherZoneRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setParameter("ConnectionString", connectionString);
}

std::string MigrateConnectionToOtherZoneRequest::getZoneId()const
{
	return zoneId_;
}

void MigrateConnectionToOtherZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string MigrateConnectionToOtherZoneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateConnectionToOtherZoneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

