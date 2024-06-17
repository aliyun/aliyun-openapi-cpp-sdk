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

#include <alibabacloud/polardbx/model/UpdateDBInstanceSSLRequest.h>

using AlibabaCloud::Polardbx::Model::UpdateDBInstanceSSLRequest;

UpdateDBInstanceSSLRequest::UpdateDBInstanceSSLRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "UpdateDBInstanceSSL") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDBInstanceSSLRequest::~UpdateDBInstanceSSLRequest() {}

std::string UpdateDBInstanceSSLRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void UpdateDBInstanceSSLRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string UpdateDBInstanceSSLRequest::getCertCommonName() const {
  return certCommonName_;
}

void UpdateDBInstanceSSLRequest::setCertCommonName(const std::string &certCommonName) {
  certCommonName_ = certCommonName;
  setParameter(std::string("CertCommonName"), certCommonName);
}

std::string UpdateDBInstanceSSLRequest::getRegionId() const {
  return regionId_;
}

void UpdateDBInstanceSSLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateDBInstanceSSLRequest::getEnableSSL() const {
  return enableSSL_;
}

void UpdateDBInstanceSSLRequest::setEnableSSL(bool enableSSL) {
  enableSSL_ = enableSSL;
  setParameter(std::string("EnableSSL"), enableSSL ? "true" : "false");
}

bool UpdateDBInstanceSSLRequest::getForce() const {
  return force_;
}

void UpdateDBInstanceSSLRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

