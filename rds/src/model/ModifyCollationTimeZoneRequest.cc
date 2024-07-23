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

ModifyCollationTimeZoneRequest::ModifyCollationTimeZoneRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyCollationTimeZone") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCollationTimeZoneRequest::~ModifyCollationTimeZoneRequest() {}

long ModifyCollationTimeZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCollationTimeZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCollationTimeZoneRequest::getTimezone() const {
  return timezone_;
}

void ModifyCollationTimeZoneRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setParameter(std::string("Timezone"), timezone);
}

std::string ModifyCollationTimeZoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyCollationTimeZoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyCollationTimeZoneRequest::getRegionId() const {
  return regionId_;
}

void ModifyCollationTimeZoneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCollationTimeZoneRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyCollationTimeZoneRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyCollationTimeZoneRequest::getCollation() const {
  return collation_;
}

void ModifyCollationTimeZoneRequest::setCollation(const std::string &collation) {
  collation_ = collation;
  setParameter(std::string("Collation"), collation);
}

std::string ModifyCollationTimeZoneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCollationTimeZoneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyCollationTimeZoneRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCollationTimeZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

