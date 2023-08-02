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

#include <alibabacloud/gpdb/model/ModifySecurityIpsRequest.h>

using AlibabaCloud::Gpdb::Model::ModifySecurityIpsRequest;

ModifySecurityIpsRequest::ModifySecurityIpsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifySecurityIps") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityIpsRequest::~ModifySecurityIpsRequest() {}

std::string ModifySecurityIpsRequest::getDBInstanceIPArrayName() const {
  return dBInstanceIPArrayName_;
}

void ModifySecurityIpsRequest::setDBInstanceIPArrayName(const std::string &dBInstanceIPArrayName) {
  dBInstanceIPArrayName_ = dBInstanceIPArrayName;
  setParameter(std::string("DBInstanceIPArrayName"), dBInstanceIPArrayName);
}

std::string ModifySecurityIpsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySecurityIpsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySecurityIpsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifySecurityIpsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifySecurityIpsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySecurityIpsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifySecurityIpsRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifySecurityIpsRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

std::string ModifySecurityIpsRequest::getSecurityIPList() const {
  return securityIPList_;
}

void ModifySecurityIpsRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string ModifySecurityIpsRequest::getDBInstanceIPArrayAttribute() const {
  return dBInstanceIPArrayAttribute_;
}

void ModifySecurityIpsRequest::setDBInstanceIPArrayAttribute(const std::string &dBInstanceIPArrayAttribute) {
  dBInstanceIPArrayAttribute_ = dBInstanceIPArrayAttribute;
  setParameter(std::string("DBInstanceIPArrayAttribute"), dBInstanceIPArrayAttribute);
}

