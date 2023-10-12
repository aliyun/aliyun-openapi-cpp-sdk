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

#include <alibabacloud/oceanbasepro/model/ModifyTenantEncryptionRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantEncryptionRequest;

ModifyTenantEncryptionRequest::ModifyTenantEncryptionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantEncryption") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantEncryptionRequest::~ModifyTenantEncryptionRequest() {}

std::string ModifyTenantEncryptionRequest::getEncryptionKeyId() const {
  return encryptionKeyId_;
}

void ModifyTenantEncryptionRequest::setEncryptionKeyId(const std::string &encryptionKeyId) {
  encryptionKeyId_ = encryptionKeyId;
  setBodyParameter(std::string("EncryptionKeyId"), encryptionKeyId);
}

std::string ModifyTenantEncryptionRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantEncryptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantEncryptionRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantEncryptionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantEncryptionRequest::getEncryptionType() const {
  return encryptionType_;
}

void ModifyTenantEncryptionRequest::setEncryptionType(const std::string &encryptionType) {
  encryptionType_ = encryptionType;
  setBodyParameter(std::string("EncryptionType"), encryptionType);
}

