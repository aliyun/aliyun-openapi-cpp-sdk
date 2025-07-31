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

#include <alibabacloud/dds/model/ModifyDBInstanceSSLRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceSSLRequest;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceSSL") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSSLRequest::~ModifyDBInstanceSSLRequest() {}

long ModifyDBInstanceSSLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceSSLRequest::getSwitchMode() const {
  return switchMode_;
}

void ModifyDBInstanceSSLRequest::setSwitchMode(const std::string &switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), switchMode);
}

std::string ModifyDBInstanceSSLRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSSLRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceSSLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceSSLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceSSLRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceSSLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceSSLRequest::getSSLAction() const {
  return sSLAction_;
}

void ModifyDBInstanceSSLRequest::setSSLAction(const std::string &sSLAction) {
  sSLAction_ = sSLAction;
  setParameter(std::string("SSLAction"), sSLAction);
}

