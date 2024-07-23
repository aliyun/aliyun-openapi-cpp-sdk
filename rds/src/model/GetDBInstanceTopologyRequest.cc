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

#include <alibabacloud/rds/model/GetDBInstanceTopologyRequest.h>

using AlibabaCloud::Rds::Model::GetDBInstanceTopologyRequest;

GetDBInstanceTopologyRequest::GetDBInstanceTopologyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "GetDBInstanceTopology") {
  setMethod(HttpRequest::Method::Post);
}

GetDBInstanceTopologyRequest::~GetDBInstanceTopologyRequest() {}

long GetDBInstanceTopologyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetDBInstanceTopologyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long GetDBInstanceTopologyRequest::getOwnerId() const {
  return ownerId_;
}

void GetDBInstanceTopologyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetDBInstanceTopologyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetDBInstanceTopologyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetDBInstanceTopologyRequest::getRegionId() const {
  return regionId_;
}

void GetDBInstanceTopologyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetDBInstanceTopologyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void GetDBInstanceTopologyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

