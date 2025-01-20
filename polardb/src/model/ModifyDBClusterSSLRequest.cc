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

#include <alibabacloud/polardb/model/ModifyDBClusterSSLRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterSSLRequest;

ModifyDBClusterSSLRequest::ModifyDBClusterSSLRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterSSL") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterSSLRequest::~ModifyDBClusterSSLRequest() {}

long ModifyDBClusterSSLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterSSLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterSSLRequest::getServerKey() const {
  return serverKey_;
}

void ModifyDBClusterSSLRequest::setServerKey(const std::string &serverKey) {
  serverKey_ = serverKey;
  setParameter(std::string("ServerKey"), serverKey);
}

std::string ModifyDBClusterSSLRequest::getClientCrlEnabled() const {
  return clientCrlEnabled_;
}

void ModifyDBClusterSSLRequest::setClientCrlEnabled(const std::string &clientCrlEnabled) {
  clientCrlEnabled_ = clientCrlEnabled;
  setParameter(std::string("ClientCrlEnabled"), clientCrlEnabled);
}

std::string ModifyDBClusterSSLRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void ModifyDBClusterSSLRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string ModifyDBClusterSSLRequest::getACL() const {
  return aCL_;
}

void ModifyDBClusterSSLRequest::setACL(const std::string &aCL) {
  aCL_ = aCL;
  setParameter(std::string("ACL"), aCL);
}

std::string ModifyDBClusterSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterSSLRequest::getServerCert() const {
  return serverCert_;
}

void ModifyDBClusterSSLRequest::setServerCert(const std::string &serverCert) {
  serverCert_ = serverCert;
  setParameter(std::string("ServerCert"), serverCert);
}

std::string ModifyDBClusterSSLRequest::getClientCACert() const {
  return clientCACert_;
}

void ModifyDBClusterSSLRequest::setClientCACert(const std::string &clientCACert) {
  clientCACert_ = clientCACert;
  setParameter(std::string("ClientCACert"), clientCACert);
}

std::string ModifyDBClusterSSLRequest::getSSLAutoRotate() const {
  return sSLAutoRotate_;
}

void ModifyDBClusterSSLRequest::setSSLAutoRotate(const std::string &sSLAutoRotate) {
  sSLAutoRotate_ = sSLAutoRotate;
  setParameter(std::string("SSLAutoRotate"), sSLAutoRotate);
}

std::string ModifyDBClusterSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterSSLRequest::getCAType() const {
  return cAType_;
}

void ModifyDBClusterSSLRequest::setCAType(const std::string &cAType) {
  cAType_ = cAType;
  setParameter(std::string("CAType"), cAType);
}

std::string ModifyDBClusterSSLRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterSSLRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterSSLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterSSLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterSSLRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterSSLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterSSLRequest::getClientCACertEnabled() const {
  return clientCACertEnabled_;
}

void ModifyDBClusterSSLRequest::setClientCACertEnabled(const std::string &clientCACertEnabled) {
  clientCACertEnabled_ = clientCACertEnabled;
  setParameter(std::string("ClientCACertEnabled"), clientCACertEnabled);
}

std::string ModifyDBClusterSSLRequest::getClientCrl() const {
  return clientCrl_;
}

void ModifyDBClusterSSLRequest::setClientCrl(const std::string &clientCrl) {
  clientCrl_ = clientCrl;
  setParameter(std::string("ClientCrl"), clientCrl);
}

std::string ModifyDBClusterSSLRequest::getNetType() const {
  return netType_;
}

void ModifyDBClusterSSLRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

std::string ModifyDBClusterSSLRequest::getSSLEnabled() const {
  return sSLEnabled_;
}

void ModifyDBClusterSSLRequest::setSSLEnabled(const std::string &sSLEnabled) {
  sSLEnabled_ = sSLEnabled;
  setParameter(std::string("SSLEnabled"), sSLEnabled);
}

