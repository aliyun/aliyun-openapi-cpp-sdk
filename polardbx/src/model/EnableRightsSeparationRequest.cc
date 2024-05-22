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

#include <alibabacloud/polardbx/model/EnableRightsSeparationRequest.h>

using AlibabaCloud::Polardbx::Model::EnableRightsSeparationRequest;

EnableRightsSeparationRequest::EnableRightsSeparationRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "EnableRightsSeparation") {
  setMethod(HttpRequest::Method::Post);
}

EnableRightsSeparationRequest::~EnableRightsSeparationRequest() {}

std::string EnableRightsSeparationRequest::getSecurityAccountPassword() const {
  return securityAccountPassword_;
}

void EnableRightsSeparationRequest::setSecurityAccountPassword(const std::string &securityAccountPassword) {
  securityAccountPassword_ = securityAccountPassword;
  setParameter(std::string("SecurityAccountPassword"), securityAccountPassword);
}

std::string EnableRightsSeparationRequest::getSecurityAccountDescription() const {
  return securityAccountDescription_;
}

void EnableRightsSeparationRequest::setSecurityAccountDescription(const std::string &securityAccountDescription) {
  securityAccountDescription_ = securityAccountDescription;
  setParameter(std::string("SecurityAccountDescription"), securityAccountDescription);
}

std::string EnableRightsSeparationRequest::getAuditAccountPassword() const {
  return auditAccountPassword_;
}

void EnableRightsSeparationRequest::setAuditAccountPassword(const std::string &auditAccountPassword) {
  auditAccountPassword_ = auditAccountPassword;
  setParameter(std::string("AuditAccountPassword"), auditAccountPassword);
}

std::string EnableRightsSeparationRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void EnableRightsSeparationRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string EnableRightsSeparationRequest::getRegionId() const {
  return regionId_;
}

void EnableRightsSeparationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableRightsSeparationRequest::getSecurityAccountName() const {
  return securityAccountName_;
}

void EnableRightsSeparationRequest::setSecurityAccountName(const std::string &securityAccountName) {
  securityAccountName_ = securityAccountName;
  setParameter(std::string("SecurityAccountName"), securityAccountName);
}

std::string EnableRightsSeparationRequest::getAuditAccountName() const {
  return auditAccountName_;
}

void EnableRightsSeparationRequest::setAuditAccountName(const std::string &auditAccountName) {
  auditAccountName_ = auditAccountName;
  setParameter(std::string("AuditAccountName"), auditAccountName);
}

std::string EnableRightsSeparationRequest::getAuditAccountDescription() const {
  return auditAccountDescription_;
}

void EnableRightsSeparationRequest::setAuditAccountDescription(const std::string &auditAccountDescription) {
  auditAccountDescription_ = auditAccountDescription;
  setParameter(std::string("AuditAccountDescription"), auditAccountDescription);
}

