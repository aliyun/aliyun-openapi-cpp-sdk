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

#include <alibabacloud/hitsdb/model/UpgradeLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::UpgradeLindormInstanceRequest;

UpgradeLindormInstanceRequest::UpgradeLindormInstanceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "UpgradeLindormInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeLindormInstanceRequest::~UpgradeLindormInstanceRequest() {}

long UpgradeLindormInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeLindormInstanceRequest::getLogSpec() const {
  return logSpec_;
}

void UpgradeLindormInstanceRequest::setLogSpec(const std::string &logSpec) {
  logSpec_ = logSpec;
  setParameter(std::string("LogSpec"), logSpec);
}

std::string UpgradeLindormInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void UpgradeLindormInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int UpgradeLindormInstanceRequest::getTsdbNum() const {
  return tsdbNum_;
}

void UpgradeLindormInstanceRequest::setTsdbNum(int tsdbNum) {
  tsdbNum_ = tsdbNum;
  setParameter(std::string("TsdbNum"), std::to_string(tsdbNum));
}

int UpgradeLindormInstanceRequest::getSolrNum() const {
  return solrNum_;
}

void UpgradeLindormInstanceRequest::setSolrNum(int solrNum) {
  solrNum_ = solrNum;
  setParameter(std::string("SolrNum"), std::to_string(solrNum));
}

long UpgradeLindormInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeLindormInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int UpgradeLindormInstanceRequest::getLindormNum() const {
  return lindormNum_;
}

void UpgradeLindormInstanceRequest::setLindormNum(int lindormNum) {
  lindormNum_ = lindormNum;
  setParameter(std::string("LindormNum"), std::to_string(lindormNum));
}

int UpgradeLindormInstanceRequest::getLtsCoreNum() const {
  return ltsCoreNum_;
}

void UpgradeLindormInstanceRequest::setLtsCoreNum(int ltsCoreNum) {
  ltsCoreNum_ = ltsCoreNum;
  setParameter(std::string("LtsCoreNum"), std::to_string(ltsCoreNum));
}

std::string UpgradeLindormInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradeLindormInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int UpgradeLindormInstanceRequest::getMlNum() const {
  return mlNum_;
}

void UpgradeLindormInstanceRequest::setMlNum(int mlNum) {
  mlNum_ = mlNum;
  setParameter(std::string("MlNum"), std::to_string(mlNum));
}

int UpgradeLindormInstanceRequest::getStreamNum() const {
  return streamNum_;
}

void UpgradeLindormInstanceRequest::setStreamNum(int streamNum) {
  streamNum_ = streamNum;
  setParameter(std::string("StreamNum"), std::to_string(streamNum));
}

int UpgradeLindormInstanceRequest::getLogSingleStorage() const {
  return logSingleStorage_;
}

void UpgradeLindormInstanceRequest::setLogSingleStorage(int logSingleStorage) {
  logSingleStorage_ = logSingleStorage;
  setParameter(std::string("LogSingleStorage"), std::to_string(logSingleStorage));
}

std::string UpgradeLindormInstanceRequest::getZoneId() const {
  return zoneId_;
}

void UpgradeLindormInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string UpgradeLindormInstanceRequest::getClientToken() const {
  return clientToken_;
}

void UpgradeLindormInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpgradeLindormInstanceRequest::getUpgradeType() const {
  return upgradeType_;
}

void UpgradeLindormInstanceRequest::setUpgradeType(const std::string &upgradeType) {
  upgradeType_ = upgradeType;
  setParameter(std::string("UpgradeType"), upgradeType);
}

std::string UpgradeLindormInstanceRequest::getTsdbSpec() const {
  return tsdbSpec_;
}

void UpgradeLindormInstanceRequest::setTsdbSpec(const std::string &tsdbSpec) {
  tsdbSpec_ = tsdbSpec;
  setParameter(std::string("TsdbSpec"), tsdbSpec);
}

std::string UpgradeLindormInstanceRequest::getFilestoreSpec() const {
  return filestoreSpec_;
}

void UpgradeLindormInstanceRequest::setFilestoreSpec(const std::string &filestoreSpec) {
  filestoreSpec_ = filestoreSpec;
  setParameter(std::string("FilestoreSpec"), filestoreSpec);
}

std::string UpgradeLindormInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeLindormInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeLindormInstanceRequest::getRegionId() const {
  return regionId_;
}

void UpgradeLindormInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeLindormInstanceRequest::getLindormSpec() const {
  return lindormSpec_;
}

void UpgradeLindormInstanceRequest::setLindormSpec(const std::string &lindormSpec) {
  lindormSpec_ = lindormSpec;
  setParameter(std::string("LindormSpec"), lindormSpec);
}

int UpgradeLindormInstanceRequest::getColdStorage() const {
  return coldStorage_;
}

void UpgradeLindormInstanceRequest::setColdStorage(int coldStorage) {
  coldStorage_ = coldStorage;
  setParameter(std::string("ColdStorage"), std::to_string(coldStorage));
}

int UpgradeLindormInstanceRequest::getLogNum() const {
  return logNum_;
}

void UpgradeLindormInstanceRequest::setLogNum(int logNum) {
  logNum_ = logNum;
  setParameter(std::string("LogNum"), std::to_string(logNum));
}

std::string UpgradeLindormInstanceRequest::getSolrSpec() const {
  return solrSpec_;
}

void UpgradeLindormInstanceRequest::setSolrSpec(const std::string &solrSpec) {
  solrSpec_ = solrSpec;
  setParameter(std::string("SolrSpec"), solrSpec);
}

int UpgradeLindormInstanceRequest::getCoreSingleStorage() const {
  return coreSingleStorage_;
}

void UpgradeLindormInstanceRequest::setCoreSingleStorage(int coreSingleStorage) {
  coreSingleStorage_ = coreSingleStorage;
  setParameter(std::string("CoreSingleStorage"), std::to_string(coreSingleStorage));
}

std::string UpgradeLindormInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeLindormInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeLindormInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeLindormInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int UpgradeLindormInstanceRequest::getFilestoreNum() const {
  return filestoreNum_;
}

void UpgradeLindormInstanceRequest::setFilestoreNum(int filestoreNum) {
  filestoreNum_ = filestoreNum;
  setParameter(std::string("FilestoreNum"), std::to_string(filestoreNum));
}

std::string UpgradeLindormInstanceRequest::getStreamSpec() const {
  return streamSpec_;
}

void UpgradeLindormInstanceRequest::setStreamSpec(const std::string &streamSpec) {
  streamSpec_ = streamSpec;
  setParameter(std::string("StreamSpec"), streamSpec);
}

std::string UpgradeLindormInstanceRequest::getMlSpec() const {
  return mlSpec_;
}

void UpgradeLindormInstanceRequest::setMlSpec(const std::string &mlSpec) {
  mlSpec_ = mlSpec;
  setParameter(std::string("MlSpec"), mlSpec);
}

std::string UpgradeLindormInstanceRequest::getLtsCoreSpec() const {
  return ltsCoreSpec_;
}

void UpgradeLindormInstanceRequest::setLtsCoreSpec(const std::string &ltsCoreSpec) {
  ltsCoreSpec_ = ltsCoreSpec;
  setParameter(std::string("LtsCoreSpec"), ltsCoreSpec);
}

int UpgradeLindormInstanceRequest::getClusterStorage() const {
  return clusterStorage_;
}

void UpgradeLindormInstanceRequest::setClusterStorage(int clusterStorage) {
  clusterStorage_ = clusterStorage;
  setParameter(std::string("ClusterStorage"), std::to_string(clusterStorage));
}

