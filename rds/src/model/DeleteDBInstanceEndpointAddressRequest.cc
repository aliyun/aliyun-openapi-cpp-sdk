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

#include <alibabacloud/rds/model/DeleteDBInstanceEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::DeleteDBInstanceEndpointAddressRequest;

DeleteDBInstanceEndpointAddressRequest::DeleteDBInstanceEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteDBInstanceEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstanceEndpointAddressRequest::~DeleteDBInstanceEndpointAddressRequest() {}

long DeleteDBInstanceEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBInstanceEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBInstanceEndpointAddressRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDBInstanceEndpointAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteDBInstanceEndpointAddressRequest::getConnectionString() const {
  return connectionString_;
}

void DeleteDBInstanceEndpointAddressRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setBodyParameter(std::string("ConnectionString"), connectionString);
}

std::string DeleteDBInstanceEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBInstanceEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBInstanceEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void DeleteDBInstanceEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDBInstanceEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstanceEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteDBInstanceEndpointAddressRequest::getDBInstanceEndpointId() const {
  return dBInstanceEndpointId_;
}

void DeleteDBInstanceEndpointAddressRequest::setDBInstanceEndpointId(const std::string &dBInstanceEndpointId) {
  dBInstanceEndpointId_ = dBInstanceEndpointId;
  setBodyParameter(std::string("DBInstanceEndpointId"), dBInstanceEndpointId);
}

