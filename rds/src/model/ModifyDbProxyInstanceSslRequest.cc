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

#include <alibabacloud/rds/model/ModifyDbProxyInstanceSslRequest.h>

using AlibabaCloud::Rds::Model::ModifyDbProxyInstanceSslRequest;

ModifyDbProxyInstanceSslRequest::ModifyDbProxyInstanceSslRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDbProxyInstanceSsl") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDbProxyInstanceSslRequest::~ModifyDbProxyInstanceSslRequest() {}

std::string ModifyDbProxyInstanceSslRequest::getDbProxySslEnabled() const {
  return dbProxySslEnabled_;
}

void ModifyDbProxyInstanceSslRequest::setDbProxySslEnabled(const std::string &dbProxySslEnabled) {
  dbProxySslEnabled_ = dbProxySslEnabled;
  setParameter(std::string("DbProxySslEnabled"), dbProxySslEnabled);
}

std::string ModifyDbProxyInstanceSslRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDbProxyInstanceSslRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDbProxyInstanceSslRequest::getDbProxyConnectString() const {
  return dbProxyConnectString_;
}

void ModifyDbProxyInstanceSslRequest::setDbProxyConnectString(const std::string &dbProxyConnectString) {
  dbProxyConnectString_ = dbProxyConnectString;
  setParameter(std::string("DbProxyConnectString"), dbProxyConnectString);
}

std::string ModifyDbProxyInstanceSslRequest::getRegionId() const {
  return regionId_;
}

void ModifyDbProxyInstanceSslRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDbProxyInstanceSslRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void ModifyDbProxyInstanceSslRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string ModifyDbProxyInstanceSslRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void ModifyDbProxyInstanceSslRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

std::string ModifyDbProxyInstanceSslRequest::getDbProxyEndpointId() const {
  return dbProxyEndpointId_;
}

void ModifyDbProxyInstanceSslRequest::setDbProxyEndpointId(const std::string &dbProxyEndpointId) {
  dbProxyEndpointId_ = dbProxyEndpointId;
  setParameter(std::string("DbProxyEndpointId"), dbProxyEndpointId);
}

