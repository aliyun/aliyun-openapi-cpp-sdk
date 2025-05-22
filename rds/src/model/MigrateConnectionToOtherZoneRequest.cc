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

MigrateConnectionToOtherZoneRequest::MigrateConnectionToOtherZoneRequest()
    : RpcServiceRequest("rds", "2014-08-15", "MigrateConnectionToOtherZone") {
  setMethod(HttpRequest::Method::Post);
}

MigrateConnectionToOtherZoneRequest::~MigrateConnectionToOtherZoneRequest() {}

long MigrateConnectionToOtherZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateConnectionToOtherZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MigrateConnectionToOtherZoneRequest::getConnectionString() const {
  return connectionString_;
}

void MigrateConnectionToOtherZoneRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string MigrateConnectionToOtherZoneRequest::getRegionId() const {
  return regionId_;
}

void MigrateConnectionToOtherZoneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MigrateConnectionToOtherZoneRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void MigrateConnectionToOtherZoneRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long MigrateConnectionToOtherZoneRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateConnectionToOtherZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateConnectionToOtherZoneRequest::getZoneId() const {
  return zoneId_;
}

void MigrateConnectionToOtherZoneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

