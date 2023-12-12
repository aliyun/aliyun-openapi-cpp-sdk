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

#include <alibabacloud/hitsdb/model/CreateLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::CreateLindormInstanceRequest;

CreateLindormInstanceRequest::CreateLindormInstanceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "CreateLindormInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateLindormInstanceRequest::~CreateLindormInstanceRequest() {}

std::string CreateLindormInstanceRequest::getArchVersion() const {
  return archVersion_;
}

void CreateLindormInstanceRequest::setArchVersion(const std::string &archVersion) {
  archVersion_ = archVersion;
  setParameter(std::string("ArchVersion"), archVersion);
}

long CreateLindormInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLindormInstanceRequest::getAutoRenewDuration() const {
  return autoRenewDuration_;
}

void CreateLindormInstanceRequest::setAutoRenewDuration(const std::string &autoRenewDuration) {
  autoRenewDuration_ = autoRenewDuration;
  setParameter(std::string("AutoRenewDuration"), autoRenewDuration);
}

std::string CreateLindormInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateLindormInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateLindormInstanceRequest::getLogSpec() const {
  return logSpec_;
}

void CreateLindormInstanceRequest::setLogSpec(const std::string &logSpec) {
  logSpec_ = logSpec;
  setParameter(std::string("LogSpec"), logSpec);
}

bool CreateLindormInstanceRequest::getAutoRenewal() const {
  return autoRenewal_;
}

void CreateLindormInstanceRequest::setAutoRenewal(bool autoRenewal) {
  autoRenewal_ = autoRenewal;
  setParameter(std::string("AutoRenewal"), autoRenewal ? "true" : "false");
}

std::string CreateLindormInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateLindormInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int CreateLindormInstanceRequest::getTsdbNum() const {
  return tsdbNum_;
}

void CreateLindormInstanceRequest::setTsdbNum(int tsdbNum) {
  tsdbNum_ = tsdbNum;
  setParameter(std::string("TsdbNum"), std::to_string(tsdbNum));
}

std::string CreateLindormInstanceRequest::getPrimaryVSwitchId() const {
  return primaryVSwitchId_;
}

void CreateLindormInstanceRequest::setPrimaryVSwitchId(const std::string &primaryVSwitchId) {
  primaryVSwitchId_ = primaryVSwitchId;
  setParameter(std::string("PrimaryVSwitchId"), primaryVSwitchId);
}

int CreateLindormInstanceRequest::getSolrNum() const {
  return solrNum_;
}

void CreateLindormInstanceRequest::setSolrNum(int solrNum) {
  solrNum_ = solrNum;
  setParameter(std::string("SolrNum"), std::to_string(solrNum));
}

std::string CreateLindormInstanceRequest::getInstanceStorage() const {
  return instanceStorage_;
}

void CreateLindormInstanceRequest::setInstanceStorage(const std::string &instanceStorage) {
  instanceStorage_ = instanceStorage;
  setParameter(std::string("InstanceStorage"), instanceStorage);
}

long CreateLindormInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLindormInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateLindormInstanceRequest::getLindormNum() const {
  return lindormNum_;
}

void CreateLindormInstanceRequest::setLindormNum(int lindormNum) {
  lindormNum_ = lindormNum;
  setParameter(std::string("LindormNum"), std::to_string(lindormNum));
}

std::string CreateLindormInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateLindormInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

int CreateLindormInstanceRequest::getStreamNum() const {
  return streamNum_;
}

void CreateLindormInstanceRequest::setStreamNum(int streamNum) {
  streamNum_ = streamNum;
  setParameter(std::string("StreamNum"), std::to_string(streamNum));
}

int CreateLindormInstanceRequest::getLogSingleStorage() const {
  return logSingleStorage_;
}

void CreateLindormInstanceRequest::setLogSingleStorage(int logSingleStorage) {
  logSingleStorage_ = logSingleStorage;
  setParameter(std::string("LogSingleStorage"), std::to_string(logSingleStorage));
}

std::string CreateLindormInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateLindormInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateLindormInstanceRequest::getArbiterZoneId() const {
  return arbiterZoneId_;
}

void CreateLindormInstanceRequest::setArbiterZoneId(const std::string &arbiterZoneId) {
  arbiterZoneId_ = arbiterZoneId;
  setParameter(std::string("ArbiterZoneId"), arbiterZoneId);
}

std::string CreateLindormInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateLindormInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string CreateLindormInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateLindormInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateLindormInstanceRequest::getMultiZoneCombination() const {
  return multiZoneCombination_;
}

void CreateLindormInstanceRequest::setMultiZoneCombination(const std::string &multiZoneCombination) {
  multiZoneCombination_ = multiZoneCombination;
  setParameter(std::string("MultiZoneCombination"), multiZoneCombination);
}

std::string CreateLindormInstanceRequest::getTsdbSpec() const {
  return tsdbSpec_;
}

void CreateLindormInstanceRequest::setTsdbSpec(const std::string &tsdbSpec) {
  tsdbSpec_ = tsdbSpec;
  setParameter(std::string("TsdbSpec"), tsdbSpec);
}

std::string CreateLindormInstanceRequest::getPrimaryZoneId() const {
  return primaryZoneId_;
}

void CreateLindormInstanceRequest::setPrimaryZoneId(const std::string &primaryZoneId) {
  primaryZoneId_ = primaryZoneId;
  setParameter(std::string("PrimaryZoneId"), primaryZoneId);
}

std::string CreateLindormInstanceRequest::getFilestoreSpec() const {
  return filestoreSpec_;
}

void CreateLindormInstanceRequest::setFilestoreSpec(const std::string &filestoreSpec) {
  filestoreSpec_ = filestoreSpec;
  setParameter(std::string("FilestoreSpec"), filestoreSpec);
}

std::string CreateLindormInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLindormInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLindormInstanceRequest::getDuration() const {
  return duration_;
}

void CreateLindormInstanceRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string CreateLindormInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateLindormInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLindormInstanceRequest::getDiskCategory() const {
  return diskCategory_;
}

void CreateLindormInstanceRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::string CreateLindormInstanceRequest::getLindormSpec() const {
  return lindormSpec_;
}

void CreateLindormInstanceRequest::setLindormSpec(const std::string &lindormSpec) {
  lindormSpec_ = lindormSpec;
  setParameter(std::string("LindormSpec"), lindormSpec);
}

int CreateLindormInstanceRequest::getColdStorage() const {
  return coldStorage_;
}

void CreateLindormInstanceRequest::setColdStorage(int coldStorage) {
  coldStorage_ = coldStorage;
  setParameter(std::string("ColdStorage"), std::to_string(coldStorage));
}

int CreateLindormInstanceRequest::getLogNum() const {
  return logNum_;
}

void CreateLindormInstanceRequest::setLogNum(int logNum) {
  logNum_ = logNum;
  setParameter(std::string("LogNum"), std::to_string(logNum));
}

std::string CreateLindormInstanceRequest::getStandbyVSwitchId() const {
  return standbyVSwitchId_;
}

void CreateLindormInstanceRequest::setStandbyVSwitchId(const std::string &standbyVSwitchId) {
  standbyVSwitchId_ = standbyVSwitchId;
  setParameter(std::string("StandbyVSwitchId"), standbyVSwitchId);
}

std::string CreateLindormInstanceRequest::getSolrSpec() const {
  return solrSpec_;
}

void CreateLindormInstanceRequest::setSolrSpec(const std::string &solrSpec) {
  solrSpec_ = solrSpec;
  setParameter(std::string("SolrSpec"), solrSpec);
}

std::string CreateLindormInstanceRequest::getLogDiskCategory() const {
  return logDiskCategory_;
}

void CreateLindormInstanceRequest::setLogDiskCategory(const std::string &logDiskCategory) {
  logDiskCategory_ = logDiskCategory;
  setParameter(std::string("LogDiskCategory"), logDiskCategory);
}

int CreateLindormInstanceRequest::getCoreSingleStorage() const {
  return coreSingleStorage_;
}

void CreateLindormInstanceRequest::setCoreSingleStorage(int coreSingleStorage) {
  coreSingleStorage_ = coreSingleStorage;
  setParameter(std::string("CoreSingleStorage"), std::to_string(coreSingleStorage));
}

std::string CreateLindormInstanceRequest::getStandbyZoneId() const {
  return standbyZoneId_;
}

void CreateLindormInstanceRequest::setStandbyZoneId(const std::string &standbyZoneId) {
  standbyZoneId_ = standbyZoneId;
  setParameter(std::string("StandbyZoneId"), standbyZoneId);
}

std::string CreateLindormInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLindormInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLindormInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLindormInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLindormInstanceRequest::getInstanceAlias() const {
  return instanceAlias_;
}

void CreateLindormInstanceRequest::setInstanceAlias(const std::string &instanceAlias) {
  instanceAlias_ = instanceAlias;
  setParameter(std::string("InstanceAlias"), instanceAlias);
}

int CreateLindormInstanceRequest::getFilestoreNum() const {
  return filestoreNum_;
}

void CreateLindormInstanceRequest::setFilestoreNum(int filestoreNum) {
  filestoreNum_ = filestoreNum;
  setParameter(std::string("FilestoreNum"), std::to_string(filestoreNum));
}

std::string CreateLindormInstanceRequest::getStreamSpec() const {
  return streamSpec_;
}

void CreateLindormInstanceRequest::setStreamSpec(const std::string &streamSpec) {
  streamSpec_ = streamSpec;
  setParameter(std::string("StreamSpec"), streamSpec);
}

std::string CreateLindormInstanceRequest::getCoreSpec() const {
  return coreSpec_;
}

void CreateLindormInstanceRequest::setCoreSpec(const std::string &coreSpec) {
  coreSpec_ = coreSpec;
  setParameter(std::string("CoreSpec"), coreSpec);
}

std::string CreateLindormInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateLindormInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateLindormInstanceRequest::getPayType() const {
  return payType_;
}

void CreateLindormInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateLindormInstanceRequest::getArbiterVSwitchId() const {
  return arbiterVSwitchId_;
}

void CreateLindormInstanceRequest::setArbiterVSwitchId(const std::string &arbiterVSwitchId) {
  arbiterVSwitchId_ = arbiterVSwitchId;
  setParameter(std::string("ArbiterVSwitchId"), arbiterVSwitchId);
}

