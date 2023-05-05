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

#include <alibabacloud/ecd/model/CreateDesktopGroupRequest.h>

using AlibabaCloud::Ecd::Model::CreateDesktopGroupRequest;

CreateDesktopGroupRequest::CreateDesktopGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateDesktopGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateDesktopGroupRequest::~CreateDesktopGroupRequest() {}

std::string CreateDesktopGroupRequest::getDesktopGroupName() const {
  return desktopGroupName_;
}

void CreateDesktopGroupRequest::setDesktopGroupName(const std::string &desktopGroupName) {
  desktopGroupName_ = desktopGroupName;
  setParameter(std::string("DesktopGroupName"), desktopGroupName);
}

int CreateDesktopGroupRequest::getAllowBufferCount() const {
  return allowBufferCount_;
}

void CreateDesktopGroupRequest::setAllowBufferCount(int allowBufferCount) {
  allowBufferCount_ = allowBufferCount;
  setParameter(std::string("AllowBufferCount"), std::to_string(allowBufferCount));
}

int CreateDesktopGroupRequest::getGroupVersion() const {
  return groupVersion_;
}

void CreateDesktopGroupRequest::setGroupVersion(int groupVersion) {
  groupVersion_ = groupVersion;
  setParameter(std::string("GroupVersion"), std::to_string(groupVersion));
}

bool CreateDesktopGroupRequest::getAllClassifyUsers() const {
  return allClassifyUsers_;
}

void CreateDesktopGroupRequest::setAllClassifyUsers(bool allClassifyUsers) {
  allClassifyUsers_ = allClassifyUsers;
  setParameter(std::string("AllClassifyUsers"), allClassifyUsers ? "true" : "false");
}

int CreateDesktopGroupRequest::getMaxDesktopsCount() const {
  return maxDesktopsCount_;
}

void CreateDesktopGroupRequest::setMaxDesktopsCount(int maxDesktopsCount) {
  maxDesktopsCount_ = maxDesktopsCount;
  setParameter(std::string("MaxDesktopsCount"), std::to_string(maxDesktopsCount));
}

bool CreateDesktopGroupRequest::getVolumeEncryptionEnabled() const {
  return volumeEncryptionEnabled_;
}

void CreateDesktopGroupRequest::setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) {
  volumeEncryptionEnabled_ = volumeEncryptionEnabled;
  setParameter(std::string("VolumeEncryptionEnabled"), volumeEncryptionEnabled ? "true" : "false");
}

int CreateDesktopGroupRequest::getPeriod() const {
  return period_;
}

void CreateDesktopGroupRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int CreateDesktopGroupRequest::getAllowAutoSetup() const {
  return allowAutoSetup_;
}

void CreateDesktopGroupRequest::setAllowAutoSetup(int allowAutoSetup) {
  allowAutoSetup_ = allowAutoSetup;
  setParameter(std::string("AllowAutoSetup"), std::to_string(allowAutoSetup));
}

long CreateDesktopGroupRequest::getResetType() const {
  return resetType_;
}

void CreateDesktopGroupRequest::setResetType(long resetType) {
  resetType_ = resetType;
  setParameter(std::string("ResetType"), std::to_string(resetType));
}

float CreateDesktopGroupRequest::getRatioThreshold() const {
  return ratioThreshold_;
}

void CreateDesktopGroupRequest::setRatioThreshold(float ratioThreshold) {
  ratioThreshold_ = ratioThreshold;
  setParameter(std::string("RatioThreshold"), std::to_string(ratioThreshold));
}

long CreateDesktopGroupRequest::getKeepDuration() const {
  return keepDuration_;
}

void CreateDesktopGroupRequest::setKeepDuration(long keepDuration) {
  keepDuration_ = keepDuration;
  setParameter(std::string("KeepDuration"), std::to_string(keepDuration));
}

std::string CreateDesktopGroupRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateDesktopGroupRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateDesktopGroupRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDesktopGroupRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

bool CreateDesktopGroupRequest::getProfileFollowSwitch() const {
  return profileFollowSwitch_;
}

void CreateDesktopGroupRequest::setProfileFollowSwitch(bool profileFollowSwitch) {
  profileFollowSwitch_ = profileFollowSwitch;
  setParameter(std::string("ProfileFollowSwitch"), profileFollowSwitch ? "true" : "false");
}

int CreateDesktopGroupRequest::getBuyDesktopsCount() const {
  return buyDesktopsCount_;
}

void CreateDesktopGroupRequest::setBuyDesktopsCount(int buyDesktopsCount) {
  buyDesktopsCount_ = buyDesktopsCount;
  setParameter(std::string("BuyDesktopsCount"), std::to_string(buyDesktopsCount));
}

std::string CreateDesktopGroupRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void CreateDesktopGroupRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

std::string CreateDesktopGroupRequest::getVolumeEncryptionKey() const {
  return volumeEncryptionKey_;
}

void CreateDesktopGroupRequest::setVolumeEncryptionKey(const std::string &volumeEncryptionKey) {
  volumeEncryptionKey_ = volumeEncryptionKey;
  setParameter(std::string("VolumeEncryptionKey"), volumeEncryptionKey);
}

std::string CreateDesktopGroupRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void CreateDesktopGroupRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string CreateDesktopGroupRequest::getClassify() const {
  return classify_;
}

void CreateDesktopGroupRequest::setClassify(const std::string &classify) {
  classify_ = classify;
  setParameter(std::string("Classify"), classify);
}

std::vector<std::string> CreateDesktopGroupRequest::getEndUserIds() const {
  return endUserIds_;
}

void CreateDesktopGroupRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::string CreateDesktopGroupRequest::getScaleStrategyId() const {
  return scaleStrategyId_;
}

void CreateDesktopGroupRequest::setScaleStrategyId(const std::string &scaleStrategyId) {
  scaleStrategyId_ = scaleStrategyId;
  setParameter(std::string("ScaleStrategyId"), scaleStrategyId);
}

std::string CreateDesktopGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateDesktopGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDesktopGroupRequest::getBundleId() const {
  return bundleId_;
}

void CreateDesktopGroupRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

long CreateDesktopGroupRequest::getBindAmount() const {
  return bindAmount_;
}

void CreateDesktopGroupRequest::setBindAmount(long bindAmount) {
  bindAmount_ = bindAmount;
  setParameter(std::string("BindAmount"), std::to_string(bindAmount));
}

long CreateDesktopGroupRequest::getLoadPolicy() const {
  return loadPolicy_;
}

void CreateDesktopGroupRequest::setLoadPolicy(long loadPolicy) {
  loadPolicy_ = loadPolicy;
  setParameter(std::string("LoadPolicy"), std::to_string(loadPolicy));
}

int CreateDesktopGroupRequest::getDefaultInitDesktopCount() const {
  return defaultInitDesktopCount_;
}

void CreateDesktopGroupRequest::setDefaultInitDesktopCount(int defaultInitDesktopCount) {
  defaultInitDesktopCount_ = defaultInitDesktopCount;
  setParameter(std::string("DefaultInitDesktopCount"), std::to_string(defaultInitDesktopCount));
}

long CreateDesktopGroupRequest::getIdleDisconnectDuration() const {
  return idleDisconnectDuration_;
}

void CreateDesktopGroupRequest::setIdleDisconnectDuration(long idleDisconnectDuration) {
  idleDisconnectDuration_ = idleDisconnectDuration;
  setParameter(std::string("IdleDisconnectDuration"), std::to_string(idleDisconnectDuration));
}

std::string CreateDesktopGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateDesktopGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDesktopGroupRequest::getDirectoryId() const {
  return directoryId_;
}

void CreateDesktopGroupRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

int CreateDesktopGroupRequest::getMinDesktopsCount() const {
  return minDesktopsCount_;
}

void CreateDesktopGroupRequest::setMinDesktopsCount(int minDesktopsCount) {
  minDesktopsCount_ = minDesktopsCount;
  setParameter(std::string("MinDesktopsCount"), std::to_string(minDesktopsCount));
}

std::string CreateDesktopGroupRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateDesktopGroupRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

bool CreateDesktopGroupRequest::getAutoPay() const {
  return autoPay_;
}

void CreateDesktopGroupRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateDesktopGroupRequest::getComments() const {
  return comments_;
}

void CreateDesktopGroupRequest::setComments(const std::string &comments) {
  comments_ = comments;
  setParameter(std::string("Comments"), comments);
}

int CreateDesktopGroupRequest::getOwnType() const {
  return ownType_;
}

void CreateDesktopGroupRequest::setOwnType(int ownType) {
  ownType_ = ownType;
  setParameter(std::string("OwnType"), std::to_string(ownType));
}

long CreateDesktopGroupRequest::getStopDuration() const {
  return stopDuration_;
}

void CreateDesktopGroupRequest::setStopDuration(long stopDuration) {
  stopDuration_ = stopDuration;
  setParameter(std::string("StopDuration"), std::to_string(stopDuration));
}

long CreateDesktopGroupRequest::getConnectDuration() const {
  return connectDuration_;
}

void CreateDesktopGroupRequest::setConnectDuration(long connectDuration) {
  connectDuration_ = connectDuration;
  setParameter(std::string("ConnectDuration"), std::to_string(connectDuration));
}

std::string CreateDesktopGroupRequest::getVpcId() const {
  return vpcId_;
}

void CreateDesktopGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateDesktopGroupRequest::getChargeType() const {
  return chargeType_;
}

void CreateDesktopGroupRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

