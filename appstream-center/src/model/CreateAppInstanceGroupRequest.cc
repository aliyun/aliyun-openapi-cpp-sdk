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

#include <alibabacloud/appstream-center/model/CreateAppInstanceGroupRequest.h>

using AlibabaCloud::Appstream_center::Model::CreateAppInstanceGroupRequest;

CreateAppInstanceGroupRequest::CreateAppInstanceGroupRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "CreateAppInstanceGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppInstanceGroupRequest::~CreateAppInstanceGroupRequest() {}

CreateAppInstanceGroupRequest::RuntimePolicy CreateAppInstanceGroupRequest::getRuntimePolicy() const {
  return runtimePolicy_;
}

void CreateAppInstanceGroupRequest::setRuntimePolicy(const CreateAppInstanceGroupRequest::RuntimePolicy &runtimePolicy) {
  runtimePolicy_ = runtimePolicy;
  setBodyParameter(std::string("RuntimePolicy") + ".SessionType", runtimePolicy.sessionType);
  setBodyParameter(std::string("RuntimePolicy") + ".DebugMode", runtimePolicy.debugMode);
}

std::string CreateAppInstanceGroupRequest::getBizRegionId() const {
  return bizRegionId_;
}

void CreateAppInstanceGroupRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setBodyParameter(std::string("BizRegionId"), bizRegionId);
}

int CreateAppInstanceGroupRequest::getScalingStep() const {
  return scalingStep_;
}

void CreateAppInstanceGroupRequest::setScalingStep(int scalingStep) {
  scalingStep_ = scalingStep;
  setBodyParameter(std::string("ScalingStep"), std::to_string(scalingStep));
}

int CreateAppInstanceGroupRequest::getScalingDownAfterIdleMinutes() const {
  return scalingDownAfterIdleMinutes_;
}

void CreateAppInstanceGroupRequest::setScalingDownAfterIdleMinutes(int scalingDownAfterIdleMinutes) {
  scalingDownAfterIdleMinutes_ = scalingDownAfterIdleMinutes;
  setBodyParameter(std::string("ScalingDownAfterIdleMinutes"), std::to_string(scalingDownAfterIdleMinutes));
}

int CreateAppInstanceGroupRequest::getMinAmount() const {
  return minAmount_;
}

void CreateAppInstanceGroupRequest::setMinAmount(int minAmount) {
  minAmount_ = minAmount;
  setBodyParameter(std::string("MinAmount"), std::to_string(minAmount));
}

std::string CreateAppInstanceGroupRequest::getProductType() const {
  return productType_;
}

void CreateAppInstanceGroupRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

CreateAppInstanceGroupRequest::Network CreateAppInstanceGroupRequest::getNetwork() const {
  return network_;
}

void CreateAppInstanceGroupRequest::setNetwork(const CreateAppInstanceGroupRequest::Network &network) {
  network_ = network;
  for(int dep1 = 0; dep1 != network.routes.size(); dep1++) {
    setBodyParameter(std::string("Network") + ".Routes." + std::to_string(dep1 + 1) + ".Mode", network.routes[dep1].mode);
    setBodyParameter(std::string("Network") + ".Routes." + std::to_string(dep1 + 1) + ".Destination", network.routes[dep1].destination);
  }
  setBodyParameter(std::string("Network") + ".StrategyType", network.strategyType);
}

int CreateAppInstanceGroupRequest::getReserveMinAmount() const {
  return reserveMinAmount_;
}

void CreateAppInstanceGroupRequest::setReserveMinAmount(int reserveMinAmount) {
  reserveMinAmount_ = reserveMinAmount;
  setBodyParameter(std::string("ReserveMinAmount"), std::to_string(reserveMinAmount));
}

int CreateAppInstanceGroupRequest::getSessionTimeout() const {
  return sessionTimeout_;
}

void CreateAppInstanceGroupRequest::setSessionTimeout(int sessionTimeout) {
  sessionTimeout_ = sessionTimeout;
  setBodyParameter(std::string("SessionTimeout"), std::to_string(sessionTimeout));
}

std::string CreateAppInstanceGroupRequest::getChargeResourceMode() const {
  return chargeResourceMode_;
}

void CreateAppInstanceGroupRequest::setChargeResourceMode(const std::string &chargeResourceMode) {
  chargeResourceMode_ = chargeResourceMode;
  setBodyParameter(std::string("ChargeResourceMode"), chargeResourceMode);
}

std::string CreateAppInstanceGroupRequest::getAppCenterImageId() const {
  return appCenterImageId_;
}

void CreateAppInstanceGroupRequest::setAppCenterImageId(const std::string &appCenterImageId) {
  appCenterImageId_ = appCenterImageId;
  setBodyParameter(std::string("AppCenterImageId"), appCenterImageId);
}

std::string CreateAppInstanceGroupRequest::getScalingUsageThreshold() const {
  return scalingUsageThreshold_;
}

void CreateAppInstanceGroupRequest::setScalingUsageThreshold(const std::string &scalingUsageThreshold) {
  scalingUsageThreshold_ = scalingUsageThreshold;
  setBodyParameter(std::string("ScalingUsageThreshold"), scalingUsageThreshold);
}

CreateAppInstanceGroupRequest::UserInfo CreateAppInstanceGroupRequest::getUserInfo() const {
  return userInfo_;
}

void CreateAppInstanceGroupRequest::setUserInfo(const CreateAppInstanceGroupRequest::UserInfo &userInfo) {
  userInfo_ = userInfo;
  setBodyParameter(std::string("UserInfo") + ".Type", userInfo.type);
}

std::string CreateAppInstanceGroupRequest::getReserveAmountRatio() const {
  return reserveAmountRatio_;
}

void CreateAppInstanceGroupRequest::setReserveAmountRatio(const std::string &reserveAmountRatio) {
  reserveAmountRatio_ = reserveAmountRatio;
  setBodyParameter(std::string("ReserveAmountRatio"), reserveAmountRatio);
}

std::string CreateAppInstanceGroupRequest::getPreOpenAppId() const {
  return preOpenAppId_;
}

void CreateAppInstanceGroupRequest::setPreOpenAppId(const std::string &preOpenAppId) {
  preOpenAppId_ = preOpenAppId;
  setBodyParameter(std::string("PreOpenAppId"), preOpenAppId);
}

int CreateAppInstanceGroupRequest::getAmount() const {
  return amount_;
}

void CreateAppInstanceGroupRequest::setAmount(int amount) {
  amount_ = amount;
  setBodyParameter(std::string("Amount"), std::to_string(amount));
}

int CreateAppInstanceGroupRequest::getPeriod() const {
  return period_;
}

void CreateAppInstanceGroupRequest::setPeriod(int period) {
  period_ = period;
  setBodyParameter(std::string("Period"), std::to_string(period));
}

bool CreateAppInstanceGroupRequest::getAutoPay() const {
  return autoPay_;
}

void CreateAppInstanceGroupRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setBodyParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

CreateAppInstanceGroupRequest::NodePool CreateAppInstanceGroupRequest::getNodePool() const {
  return nodePool_;
}

void CreateAppInstanceGroupRequest::setNodePool(const CreateAppInstanceGroupRequest::NodePool &nodePool) {
  nodePool_ = nodePool;
  for(int dep1 = 0; dep1 != nodePool.recurrenceSchedules.size(); dep1++) {
    for(int dep2 = 0; dep2 != nodePool.recurrenceSchedules[dep1].recurrenceValues.size(); dep2++) {
      setBodyParameter(std::string("NodePool") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".RecurrenceValues." + std::to_string(dep2 + 1), std::to_string(nodePool.recurrenceSchedules[dep1].recurrenceValues[dep2]));
    }
    setBodyParameter(std::string("NodePool") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".RecurrenceType", nodePool.recurrenceSchedules[dep1].recurrenceType);
    for(int dep2 = 0; dep2 != nodePool.recurrenceSchedules[dep1].timerPeriods.size(); dep2++) {
      setBodyParameter(std::string("NodePool") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".Amount", std::to_string(nodePool.recurrenceSchedules[dep1].timerPeriods[dep2].amount));
      setBodyParameter(std::string("NodePool") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".EndTime", nodePool.recurrenceSchedules[dep1].timerPeriods[dep2].endTime);
      setBodyParameter(std::string("NodePool") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".StartTime", nodePool.recurrenceSchedules[dep1].timerPeriods[dep2].startTime);
    }
  }
  setBodyParameter(std::string("NodePool") + ".NodeAmount", std::to_string(nodePool.nodeAmount));
  setBodyParameter(std::string("NodePool") + ".ScalingStep", std::to_string(nodePool.scalingStep));
  setBodyParameter(std::string("NodePool") + ".StrategyDisableDate", nodePool.strategyDisableDate);
  setBodyParameter(std::string("NodePool") + ".NodeInstanceType", nodePool.nodeInstanceType);
  setBodyParameter(std::string("NodePool") + ".ScalingDownAfterIdleMinutes", std::to_string(nodePool.scalingDownAfterIdleMinutes));
  setBodyParameter(std::string("NodePool") + ".StrategyType", nodePool.strategyType);
  setBodyParameter(std::string("NodePool") + ".MaxScalingAmount", std::to_string(nodePool.maxScalingAmount));
  setBodyParameter(std::string("NodePool") + ".WarmUp", nodePool.warmUp ? "true" : "false");
  setBodyParameter(std::string("NodePool") + ".ScalingUsageThreshold", nodePool.scalingUsageThreshold);
  setBodyParameter(std::string("NodePool") + ".NodeCapacity", std::to_string(nodePool.nodeCapacity));
  setBodyParameter(std::string("NodePool") + ".StrategyEnableDate", nodePool.strategyEnableDate);
}

std::string CreateAppInstanceGroupRequest::getAppInstanceType() const {
  return appInstanceType_;
}

void CreateAppInstanceGroupRequest::setAppInstanceType(const std::string &appInstanceType) {
  appInstanceType_ = appInstanceType;
  setBodyParameter(std::string("AppInstanceType"), appInstanceType);
}

int CreateAppInstanceGroupRequest::getMaxAmount() const {
  return maxAmount_;
}

void CreateAppInstanceGroupRequest::setMaxAmount(int maxAmount) {
  maxAmount_ = maxAmount;
  setBodyParameter(std::string("MaxAmount"), std::to_string(maxAmount));
}

CreateAppInstanceGroupRequest::SecurityPolicy CreateAppInstanceGroupRequest::getSecurityPolicy() const {
  return securityPolicy_;
}

void CreateAppInstanceGroupRequest::setSecurityPolicy(const CreateAppInstanceGroupRequest::SecurityPolicy &securityPolicy) {
  securityPolicy_ = securityPolicy;
  setBodyParameter(std::string("SecurityPolicy") + ".ResetAfterUnbind", securityPolicy.resetAfterUnbind ? "true" : "false");
}

std::string CreateAppInstanceGroupRequest::getPromotionId() const {
  return promotionId_;
}

void CreateAppInstanceGroupRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setBodyParameter(std::string("PromotionId"), promotionId);
}

std::vector<std::string> CreateAppInstanceGroupRequest::getUsers() const {
  return users_;
}

void CreateAppInstanceGroupRequest::setUsers(const std::vector<std::string> &users) {
  users_ = users;
}

CreateAppInstanceGroupRequest::VideoPolicy CreateAppInstanceGroupRequest::getVideoPolicy() const {
  return videoPolicy_;
}

void CreateAppInstanceGroupRequest::setVideoPolicy(const CreateAppInstanceGroupRequest::VideoPolicy &videoPolicy) {
  videoPolicy_ = videoPolicy;
  setBodyParameter(std::string("VideoPolicy") + ".Webrtc", videoPolicy.webrtc ? "true" : "false");
  setBodyParameter(std::string("VideoPolicy") + ".TerminalResolutionAdaptive", videoPolicy.terminalResolutionAdaptive ? "true" : "false");
  setBodyParameter(std::string("VideoPolicy") + ".FrameRate", std::to_string(videoPolicy.frameRate));
  setBodyParameter(std::string("VideoPolicy") + ".SessionResolutionWidth", std::to_string(videoPolicy.sessionResolutionWidth));
  setBodyParameter(std::string("VideoPolicy") + ".StreamingMode", videoPolicy.streamingMode);
  setBodyParameter(std::string("VideoPolicy") + ".SessionResolutionHeight", std::to_string(videoPolicy.sessionResolutionHeight));
}

std::string CreateAppInstanceGroupRequest::getAppInstanceGroupName() const {
  return appInstanceGroupName_;
}

void CreateAppInstanceGroupRequest::setAppInstanceGroupName(const std::string &appInstanceGroupName) {
  appInstanceGroupName_ = appInstanceGroupName;
  setBodyParameter(std::string("AppInstanceGroupName"), appInstanceGroupName);
}

std::string CreateAppInstanceGroupRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateAppInstanceGroupRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setBodyParameter(std::string("PeriodUnit"), periodUnit);
}

int CreateAppInstanceGroupRequest::getReserveMaxAmount() const {
  return reserveMaxAmount_;
}

void CreateAppInstanceGroupRequest::setReserveMaxAmount(int reserveMaxAmount) {
  reserveMaxAmount_ = reserveMaxAmount;
  setBodyParameter(std::string("ReserveMaxAmount"), std::to_string(reserveMaxAmount));
}

bool CreateAppInstanceGroupRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateAppInstanceGroupRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setBodyParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateAppInstanceGroupRequest::getChargeType() const {
  return chargeType_;
}

void CreateAppInstanceGroupRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setBodyParameter(std::string("ChargeType"), chargeType);
}

std::string CreateAppInstanceGroupRequest::getStrategyType() const {
  return strategyType_;
}

void CreateAppInstanceGroupRequest::setStrategyType(const std::string &strategyType) {
  strategyType_ = strategyType;
  setBodyParameter(std::string("StrategyType"), strategyType);
}

