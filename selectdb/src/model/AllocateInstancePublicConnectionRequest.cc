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

#include <alibabacloud/selectdb/model/AllocateInstancePublicConnectionRequest.h>

using AlibabaCloud::Selectdb::Model::AllocateInstancePublicConnectionRequest;

AllocateInstancePublicConnectionRequest::AllocateInstancePublicConnectionRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "AllocateInstancePublicConnection") {
  setMethod(HttpRequest::Method::Post);
}

AllocateInstancePublicConnectionRequest::~AllocateInstancePublicConnectionRequest() {}

std::string AllocateInstancePublicConnectionRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void AllocateInstancePublicConnectionRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

long AllocateInstancePublicConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateInstancePublicConnectionRequest::getRegionId() const {
  return regionId_;
}

void AllocateInstancePublicConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AllocateInstancePublicConnectionRequest::getNetType() const {
  return netType_;
}

void AllocateInstancePublicConnectionRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

std::string AllocateInstancePublicConnectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void AllocateInstancePublicConnectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

