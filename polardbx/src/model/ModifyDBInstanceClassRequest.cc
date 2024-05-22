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

#include <alibabacloud/polardbx/model/ModifyDBInstanceClassRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyDBInstanceClassRequest;

ModifyDBInstanceClassRequest::ModifyDBInstanceClassRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyDBInstanceClass") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceClassRequest::~ModifyDBInstanceClassRequest() {}

std::string ModifyDBInstanceClassRequest::getSpecifiedDNSpecMapJson() const {
  return specifiedDNSpecMapJson_;
}

void ModifyDBInstanceClassRequest::setSpecifiedDNSpecMapJson(const std::string &specifiedDNSpecMapJson) {
  specifiedDNSpecMapJson_ = specifiedDNSpecMapJson;
  setParameter(std::string("SpecifiedDNSpecMapJson"), specifiedDNSpecMapJson);
}

std::string ModifyDBInstanceClassRequest::getCnClass() const {
  return cnClass_;
}

void ModifyDBInstanceClassRequest::setCnClass(const std::string &cnClass) {
  cnClass_ = cnClass;
  setParameter(std::string("CnClass"), cnClass);
}

std::string ModifyDBInstanceClassRequest::getTargetDBInstanceClass() const {
  return targetDBInstanceClass_;
}

void ModifyDBInstanceClassRequest::setTargetDBInstanceClass(const std::string &targetDBInstanceClass) {
  targetDBInstanceClass_ = targetDBInstanceClass;
  setParameter(std::string("TargetDBInstanceClass"), targetDBInstanceClass);
}

bool ModifyDBInstanceClassRequest::getSpecifiedDNScale() const {
  return specifiedDNScale_;
}

void ModifyDBInstanceClassRequest::setSpecifiedDNScale(bool specifiedDNScale) {
  specifiedDNScale_ = specifiedDNScale;
  setParameter(std::string("SpecifiedDNScale"), specifiedDNScale ? "true" : "false");
}

std::string ModifyDBInstanceClassRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyDBInstanceClassRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string ModifyDBInstanceClassRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceClassRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceClassRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void ModifyDBInstanceClassRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string ModifyDBInstanceClassRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceClassRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceClassRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyDBInstanceClassRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyDBInstanceClassRequest::getDnClass() const {
  return dnClass_;
}

void ModifyDBInstanceClassRequest::setDnClass(const std::string &dnClass) {
  dnClass_ = dnClass;
  setParameter(std::string("DnClass"), dnClass);
}

