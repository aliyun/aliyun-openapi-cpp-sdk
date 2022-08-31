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

#include <alibabacloud/rds/model/DeleteDBProxyEndpointAddressRequest.h>

using AlibabaCloud::Rds::Model::DeleteDBProxyEndpointAddressRequest;

DeleteDBProxyEndpointAddressRequest::DeleteDBProxyEndpointAddressRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteDBProxyEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBProxyEndpointAddressRequest::~DeleteDBProxyEndpointAddressRequest() {}

std::string DeleteDBProxyEndpointAddressRequest::getDBProxyConnectStringNetType() const {
  return dBProxyConnectStringNetType_;
}

void DeleteDBProxyEndpointAddressRequest::setDBProxyConnectStringNetType(const std::string &dBProxyConnectStringNetType) {
  dBProxyConnectStringNetType_ = dBProxyConnectStringNetType;
  setParameter(std::string("DBProxyConnectStringNetType"), dBProxyConnectStringNetType);
}

std::string DeleteDBProxyEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBProxyEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBProxyEndpointAddressRequest::getRegionId() const {
  return regionId_;
}

void DeleteDBProxyEndpointAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDBProxyEndpointAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBProxyEndpointAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteDBProxyEndpointAddressRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void DeleteDBProxyEndpointAddressRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

std::string DeleteDBProxyEndpointAddressRequest::getDBProxyEndpointId() const {
  return dBProxyEndpointId_;
}

void DeleteDBProxyEndpointAddressRequest::setDBProxyEndpointId(const std::string &dBProxyEndpointId) {
  dBProxyEndpointId_ = dBProxyEndpointId;
  setParameter(std::string("DBProxyEndpointId"), dBProxyEndpointId);
}

