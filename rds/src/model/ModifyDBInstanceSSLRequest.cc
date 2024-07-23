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

#include <alibabacloud/rds/model/ModifyDBInstanceSSLRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceSSLRequest;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceSSL") {
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

std::string ModifyDBInstanceSSLRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyDBInstanceSSLRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string ModifyDBInstanceSSLRequest::getServerKey() const {
  return serverKey_;
}

void ModifyDBInstanceSSLRequest::setServerKey(const std::string &serverKey) {
  serverKey_ = serverKey;
  setParameter(std::string("ServerKey"), serverKey);
}

int ModifyDBInstanceSSLRequest::getClientCrlEnabled() const {
  return clientCrlEnabled_;
}

void ModifyDBInstanceSSLRequest::setClientCrlEnabled(int clientCrlEnabled) {
  clientCrlEnabled_ = clientCrlEnabled;
  setParameter(std::string("ClientCrlEnabled"), std::to_string(clientCrlEnabled));
}

std::string ModifyDBInstanceSSLRequest::getCertificate() const {
  return certificate_;
}

void ModifyDBInstanceSSLRequest::setCertificate(const std::string &certificate) {
  certificate_ = certificate;
  setParameter(std::string("Certificate"), certificate);
}

std::string ModifyDBInstanceSSLRequest::getACL() const {
  return aCL_;
}

void ModifyDBInstanceSSLRequest::setACL(const std::string &aCL) {
  aCL_ = aCL;
  setParameter(std::string("ACL"), aCL);
}

std::string ModifyDBInstanceSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceSSLRequest::getPassWord() const {
  return passWord_;
}

void ModifyDBInstanceSSLRequest::setPassWord(const std::string &passWord) {
  passWord_ = passWord;
  setParameter(std::string("PassWord"), passWord);
}

std::string ModifyDBInstanceSSLRequest::getClientCertRevocationList() const {
  return clientCertRevocationList_;
}

void ModifyDBInstanceSSLRequest::setClientCertRevocationList(const std::string &clientCertRevocationList) {
  clientCertRevocationList_ = clientCertRevocationList;
  setParameter(std::string("ClientCertRevocationList"), clientCertRevocationList);
}

std::string ModifyDBInstanceSSLRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceSSLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceSSLRequest::getServerCert() const {
  return serverCert_;
}

void ModifyDBInstanceSSLRequest::setServerCert(const std::string &serverCert) {
  serverCert_ = serverCert;
  setParameter(std::string("ServerCert"), serverCert);
}

std::string ModifyDBInstanceSSLRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSSLRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceSSLRequest::getForceEncryption() const {
  return forceEncryption_;
}

void ModifyDBInstanceSSLRequest::setForceEncryption(const std::string &forceEncryption) {
  forceEncryption_ = forceEncryption;
  setParameter(std::string("ForceEncryption"), forceEncryption);
}

int ModifyDBInstanceSSLRequest::getClientCAEnabled() const {
  return clientCAEnabled_;
}

void ModifyDBInstanceSSLRequest::setClientCAEnabled(int clientCAEnabled) {
  clientCAEnabled_ = clientCAEnabled;
  setParameter(std::string("ClientCAEnabled"), std::to_string(clientCAEnabled));
}

std::string ModifyDBInstanceSSLRequest::getClientCACert() const {
  return clientCACert_;
}

void ModifyDBInstanceSSLRequest::setClientCACert(const std::string &clientCACert) {
  clientCACert_ = clientCACert;
  setParameter(std::string("ClientCACert"), clientCACert);
}

std::string ModifyDBInstanceSSLRequest::getReplicationACL() const {
  return replicationACL_;
}

void ModifyDBInstanceSSLRequest::setReplicationACL(const std::string &replicationACL) {
  replicationACL_ = replicationACL;
  setParameter(std::string("ReplicationACL"), replicationACL);
}

std::string ModifyDBInstanceSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceSSLRequest::getCAType() const {
  return cAType_;
}

void ModifyDBInstanceSSLRequest::setCAType(const std::string &cAType) {
  cAType_ = cAType;
  setParameter(std::string("CAType"), cAType);
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

int ModifyDBInstanceSSLRequest::getSSLEnabled() const {
  return sSLEnabled_;
}

void ModifyDBInstanceSSLRequest::setSSLEnabled(int sSLEnabled) {
  sSLEnabled_ = sSLEnabled;
  setParameter(std::string("SSLEnabled"), std::to_string(sSLEnabled));
}

std::string ModifyDBInstanceSSLRequest::getTlsVersion() const {
  return tlsVersion_;
}

void ModifyDBInstanceSSLRequest::setTlsVersion(const std::string &tlsVersion) {
  tlsVersion_ = tlsVersion;
  setParameter(std::string("TlsVersion"), tlsVersion);
}

