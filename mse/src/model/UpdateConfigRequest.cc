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

#include <alibabacloud/mse/model/UpdateConfigRequest.h>

using AlibabaCloud::Mse::Model::UpdateConfigRequest;

UpdateConfigRequest::UpdateConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConfigRequest::~UpdateConfigRequest() {}

std::string UpdateConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

bool UpdateConfigRequest::getConfigAuthEnabled() const {
  return configAuthEnabled_;
}

void UpdateConfigRequest::setConfigAuthEnabled(bool configAuthEnabled) {
  configAuthEnabled_ = configAuthEnabled;
  setParameter(std::string("ConfigAuthEnabled"), configAuthEnabled ? "true" : "false");
}

std::string UpdateConfigRequest::getPassWord() const {
  return passWord_;
}

void UpdateConfigRequest::setPassWord(const std::string &passWord) {
  passWord_ = passWord;
  setParameter(std::string("PassWord"), passWord);
}

std::string UpdateConfigRequest::getMaxClientCnxns() const {
  return maxClientCnxns_;
}

void UpdateConfigRequest::setMaxClientCnxns(const std::string &maxClientCnxns) {
  maxClientCnxns_ = maxClientCnxns;
  setParameter(std::string("MaxClientCnxns"), maxClientCnxns);
}

std::string UpdateConfigRequest::getRequestPars() const {
  return requestPars_;
}

void UpdateConfigRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

bool UpdateConfigRequest::getNamingAuthEnabled() const {
  return namingAuthEnabled_;
}

void UpdateConfigRequest::setNamingAuthEnabled(bool namingAuthEnabled) {
  namingAuthEnabled_ = namingAuthEnabled;
  setParameter(std::string("NamingAuthEnabled"), namingAuthEnabled ? "true" : "false");
}

std::string UpdateConfigRequest::getExtendedTypesEnable() const {
  return extendedTypesEnable_;
}

void UpdateConfigRequest::setExtendedTypesEnable(const std::string &extendedTypesEnable) {
  extendedTypesEnable_ = extendedTypesEnable;
  setParameter(std::string("ExtendedTypesEnable"), extendedTypesEnable);
}

std::string UpdateConfigRequest::getAutopurgeSnapRetainCount() const {
  return autopurgeSnapRetainCount_;
}

void UpdateConfigRequest::setAutopurgeSnapRetainCount(const std::string &autopurgeSnapRetainCount) {
  autopurgeSnapRetainCount_ = autopurgeSnapRetainCount;
  setParameter(std::string("AutopurgeSnapRetainCount"), autopurgeSnapRetainCount);
}

bool UpdateConfigRequest::getConfigSecretEnabled() const {
  return configSecretEnabled_;
}

void UpdateConfigRequest::setConfigSecretEnabled(bool configSecretEnabled) {
  configSecretEnabled_ = configSecretEnabled;
  setParameter(std::string("ConfigSecretEnabled"), configSecretEnabled ? "true" : "false");
}

bool UpdateConfigRequest::getMCPEnabled() const {
  return mCPEnabled_;
}

void UpdateConfigRequest::setMCPEnabled(bool mCPEnabled) {
  mCPEnabled_ = mCPEnabled;
  setParameter(std::string("MCPEnabled"), mCPEnabled ? "true" : "false");
}

std::string UpdateConfigRequest::getSyncLimit() const {
  return syncLimit_;
}

void UpdateConfigRequest::setSyncLimit(const std::string &syncLimit) {
  syncLimit_ = syncLimit;
  setParameter(std::string("SyncLimit"), syncLimit);
}

std::string UpdateConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool UpdateConfigRequest::getTLSEnabled() const {
  return tLSEnabled_;
}

void UpdateConfigRequest::setTLSEnabled(bool tLSEnabled) {
  tLSEnabled_ = tLSEnabled;
  setParameter(std::string("TLSEnabled"), tLSEnabled ? "true" : "false");
}

std::string UpdateConfigRequest::getOpenSuperAcl() const {
  return openSuperAcl_;
}

void UpdateConfigRequest::setOpenSuperAcl(const std::string &openSuperAcl) {
  openSuperAcl_ = openSuperAcl;
  setBodyParameter(std::string("OpenSuperAcl"), openSuperAcl);
}

bool UpdateConfigRequest::getEurekaSupported() const {
  return eurekaSupported_;
}

void UpdateConfigRequest::setEurekaSupported(bool eurekaSupported) {
  eurekaSupported_ = eurekaSupported;
  setParameter(std::string("EurekaSupported"), eurekaSupported ? "true" : "false");
}

std::string UpdateConfigRequest::getSnapshotCount() const {
  return snapshotCount_;
}

void UpdateConfigRequest::setSnapshotCount(const std::string &snapshotCount) {
  snapshotCount_ = snapshotCount;
  setParameter(std::string("SnapshotCount"), snapshotCount);
}

std::string UpdateConfigRequest::getMinSessionTimeout() const {
  return minSessionTimeout_;
}

void UpdateConfigRequest::setMinSessionTimeout(const std::string &minSessionTimeout) {
  minSessionTimeout_ = minSessionTimeout;
  setParameter(std::string("MinSessionTimeout"), minSessionTimeout);
}

std::string UpdateConfigRequest::getJuteMaxbuffer() const {
  return juteMaxbuffer_;
}

void UpdateConfigRequest::setJuteMaxbuffer(const std::string &juteMaxbuffer) {
  juteMaxbuffer_ = juteMaxbuffer;
  setParameter(std::string("JuteMaxbuffer"), juteMaxbuffer);
}

std::string UpdateConfigRequest::getConfigType() const {
  return configType_;
}

void UpdateConfigRequest::setConfigType(const std::string &configType) {
  configType_ = configType;
  setParameter(std::string("ConfigType"), configType);
}

std::string UpdateConfigRequest::getMaxSessionTimeout() const {
  return maxSessionTimeout_;
}

void UpdateConfigRequest::setMaxSessionTimeout(const std::string &maxSessionTimeout) {
  maxSessionTimeout_ = maxSessionTimeout;
  setParameter(std::string("MaxSessionTimeout"), maxSessionTimeout);
}

std::string UpdateConfigRequest::getTickTime() const {
  return tickTime_;
}

void UpdateConfigRequest::setTickTime(const std::string &tickTime) {
  tickTime_ = tickTime;
  setParameter(std::string("TickTime"), tickTime);
}

std::string UpdateConfigRequest::getClusterId() const {
  return clusterId_;
}

void UpdateConfigRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateConfigRequest::getAutopurgePurgeInterval() const {
  return autopurgePurgeInterval_;
}

void UpdateConfigRequest::setAutopurgePurgeInterval(const std::string &autopurgePurgeInterval) {
  autopurgePurgeInterval_ = autopurgePurgeInterval;
  setParameter(std::string("AutopurgePurgeInterval"), autopurgePurgeInterval);
}

std::string UpdateConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateConfigRequest::getInitLimit() const {
  return initLimit_;
}

void UpdateConfigRequest::setInitLimit(const std::string &initLimit) {
  initLimit_ = initLimit;
  setParameter(std::string("InitLimit"), initLimit);
}

std::string UpdateConfigRequest::getUserName() const {
  return userName_;
}

void UpdateConfigRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

