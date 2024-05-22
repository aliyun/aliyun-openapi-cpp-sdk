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

#include <alibabacloud/polardbx/model/ModifySecurityIpsRequest.h>

using AlibabaCloud::Polardbx::Model::ModifySecurityIpsRequest;

ModifySecurityIpsRequest::ModifySecurityIpsRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifySecurityIps") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityIpsRequest::~ModifySecurityIpsRequest() {}

std::string ModifySecurityIpsRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifySecurityIpsRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string ModifySecurityIpsRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifySecurityIpsRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

std::string ModifySecurityIpsRequest::getGroupName() const {
  return groupName_;
}

void ModifySecurityIpsRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ModifySecurityIpsRequest::getSecurityIPList() const {
  return securityIPList_;
}

void ModifySecurityIpsRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string ModifySecurityIpsRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

