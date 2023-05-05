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

#include <alibabacloud/ecd/model/ModifyDesktopGroupRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDesktopGroupRequest;

ModifyDesktopGroupRequest::ModifyDesktopGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDesktopGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesktopGroupRequest::~ModifyDesktopGroupRequest() {}

std::string ModifyDesktopGroupRequest::getClassify() const {
  return classify_;
}

void ModifyDesktopGroupRequest::setClassify(const std::string &classify) {
  classify_ = classify;
  setParameter(std::string("Classify"), classify);
}

std::string ModifyDesktopGroupRequest::getImageId() const {
  return imageId_;
}

void ModifyDesktopGroupRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyDesktopGroupRequest::getScaleStrategyId() const {
  return scaleStrategyId_;
}

void ModifyDesktopGroupRequest::setScaleStrategyId(const std::string &scaleStrategyId) {
  scaleStrategyId_ = scaleStrategyId;
  setParameter(std::string("ScaleStrategyId"), scaleStrategyId);
}

bool ModifyDesktopGroupRequest::getDisableSessionConfig() const {
  return disableSessionConfig_;
}

void ModifyDesktopGroupRequest::setDisableSessionConfig(bool disableSessionConfig) {
  disableSessionConfig_ = disableSessionConfig;
  setParameter(std::string("DisableSessionConfig"), disableSessionConfig ? "true" : "false");
}

long ModifyDesktopGroupRequest::getBindAmount() const {
  return bindAmount_;
}

void ModifyDesktopGroupRequest::setBindAmount(long bindAmount) {
  bindAmount_ = bindAmount;
  setParameter(std::string("BindAmount"), std::to_string(bindAmount));
}

long ModifyDesktopGroupRequest::getLoadPolicy() const {
  return loadPolicy_;
}

void ModifyDesktopGroupRequest::setLoadPolicy(long loadPolicy) {
  loadPolicy_ = loadPolicy;
  setParameter(std::string("LoadPolicy"), std::to_string(loadPolicy));
}

std::string ModifyDesktopGroupRequest::getDesktopGroupName() const {
  return desktopGroupName_;
}

void ModifyDesktopGroupRequest::setDesktopGroupName(const std::string &desktopGroupName) {
  desktopGroupName_ = desktopGroupName;
  setParameter(std::string("DesktopGroupName"), desktopGroupName);
}

int ModifyDesktopGroupRequest::getAllowBufferCount() const {
  return allowBufferCount_;
}

void ModifyDesktopGroupRequest::setAllowBufferCount(int allowBufferCount) {
  allowBufferCount_ = allowBufferCount;
  setParameter(std::string("AllowBufferCount"), std::to_string(allowBufferCount));
}

std::vector<std::string> ModifyDesktopGroupRequest::getPolicyGroupIds() const {
  return policyGroupIds_;
}

void ModifyDesktopGroupRequest::setPolicyGroupIds(const std::vector<std::string> &policyGroupIds) {
  policyGroupIds_ = policyGroupIds;
}

long ModifyDesktopGroupRequest::getIdleDisconnectDuration() const {
  return idleDisconnectDuration_;
}

void ModifyDesktopGroupRequest::setIdleDisconnectDuration(long idleDisconnectDuration) {
  idleDisconnectDuration_ = idleDisconnectDuration;
  setParameter(std::string("IdleDisconnectDuration"), std::to_string(idleDisconnectDuration));
}

std::string ModifyDesktopGroupRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void ModifyDesktopGroupRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string ModifyDesktopGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyDesktopGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifyDesktopGroupRequest::getMinDesktopsCount() const {
  return minDesktopsCount_;
}

void ModifyDesktopGroupRequest::setMinDesktopsCount(int minDesktopsCount) {
  minDesktopsCount_ = minDesktopsCount;
  setParameter(std::string("MinDesktopsCount"), std::to_string(minDesktopsCount));
}

int ModifyDesktopGroupRequest::getMaxDesktopsCount() const {
  return maxDesktopsCount_;
}

void ModifyDesktopGroupRequest::setMaxDesktopsCount(int maxDesktopsCount) {
  maxDesktopsCount_ = maxDesktopsCount;
  setParameter(std::string("MaxDesktopsCount"), std::to_string(maxDesktopsCount));
}

std::string ModifyDesktopGroupRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyDesktopGroupRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

int ModifyDesktopGroupRequest::getAllowAutoSetup() const {
  return allowAutoSetup_;
}

void ModifyDesktopGroupRequest::setAllowAutoSetup(int allowAutoSetup) {
  allowAutoSetup_ = allowAutoSetup;
  setParameter(std::string("AllowAutoSetup"), std::to_string(allowAutoSetup));
}

std::string ModifyDesktopGroupRequest::getComments() const {
  return comments_;
}

void ModifyDesktopGroupRequest::setComments(const std::string &comments) {
  comments_ = comments;
  setParameter(std::string("Comments"), comments);
}

long ModifyDesktopGroupRequest::getResetType() const {
  return resetType_;
}

void ModifyDesktopGroupRequest::setResetType(long resetType) {
  resetType_ = resetType;
  setParameter(std::string("ResetType"), std::to_string(resetType));
}

std::string ModifyDesktopGroupRequest::getOwnBundleId() const {
  return ownBundleId_;
}

void ModifyDesktopGroupRequest::setOwnBundleId(const std::string &ownBundleId) {
  ownBundleId_ = ownBundleId;
  setParameter(std::string("OwnBundleId"), ownBundleId);
}

long ModifyDesktopGroupRequest::getStopDuration() const {
  return stopDuration_;
}

void ModifyDesktopGroupRequest::setStopDuration(long stopDuration) {
  stopDuration_ = stopDuration;
  setParameter(std::string("StopDuration"), std::to_string(stopDuration));
}

float ModifyDesktopGroupRequest::getRatioThreshold() const {
  return ratioThreshold_;
}

void ModifyDesktopGroupRequest::setRatioThreshold(float ratioThreshold) {
  ratioThreshold_ = ratioThreshold;
  setParameter(std::string("RatioThreshold"), std::to_string(ratioThreshold));
}

long ModifyDesktopGroupRequest::getKeepDuration() const {
  return keepDuration_;
}

void ModifyDesktopGroupRequest::setKeepDuration(long keepDuration) {
  keepDuration_ = keepDuration;
  setParameter(std::string("KeepDuration"), std::to_string(keepDuration));
}

long ModifyDesktopGroupRequest::getConnectDuration() const {
  return connectDuration_;
}

void ModifyDesktopGroupRequest::setConnectDuration(long connectDuration) {
  connectDuration_ = connectDuration;
  setParameter(std::string("ConnectDuration"), std::to_string(connectDuration));
}

bool ModifyDesktopGroupRequest::getProfileFollowSwitch() const {
  return profileFollowSwitch_;
}

void ModifyDesktopGroupRequest::setProfileFollowSwitch(bool profileFollowSwitch) {
  profileFollowSwitch_ = profileFollowSwitch;
  setParameter(std::string("ProfileFollowSwitch"), profileFollowSwitch ? "true" : "false");
}

int ModifyDesktopGroupRequest::getBuyDesktopsCount() const {
  return buyDesktopsCount_;
}

void ModifyDesktopGroupRequest::setBuyDesktopsCount(int buyDesktopsCount) {
  buyDesktopsCount_ = buyDesktopsCount;
  setParameter(std::string("BuyDesktopsCount"), std::to_string(buyDesktopsCount));
}

std::string ModifyDesktopGroupRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ModifyDesktopGroupRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

