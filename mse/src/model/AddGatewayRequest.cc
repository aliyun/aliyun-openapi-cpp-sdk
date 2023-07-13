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

#include <alibabacloud/mse/model/AddGatewayRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayRequest;

AddGatewayRequest::AddGatewayRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGateway") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayRequest::~AddGatewayRequest() {}

std::string AddGatewayRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddGatewayRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddGatewayRequest::getInternetSlbSpec() const {
  return internetSlbSpec_;
}

void AddGatewayRequest::setInternetSlbSpec(const std::string &internetSlbSpec) {
  internetSlbSpec_ = internetSlbSpec;
  setParameter(std::string("InternetSlbSpec"), internetSlbSpec);
}

bool AddGatewayRequest::getEnableXtrace() const {
  return enableXtrace_;
}

void AddGatewayRequest::setEnableXtrace(bool enableXtrace) {
  enableXtrace_ = enableXtrace;
  setParameter(std::string("EnableXtrace"), enableXtrace ? "true" : "false");
}

int AddGatewayRequest::getReplica() const {
  return replica_;
}

void AddGatewayRequest::setReplica(int replica) {
  replica_ = replica;
  setParameter(std::string("Replica"), std::to_string(replica));
}

bool AddGatewayRequest::getEnableHardwareAcceleration() const {
  return enableHardwareAcceleration_;
}

void AddGatewayRequest::setEnableHardwareAcceleration(bool enableHardwareAcceleration) {
  enableHardwareAcceleration_ = enableHardwareAcceleration;
  setParameter(std::string("EnableHardwareAcceleration"), enableHardwareAcceleration ? "true" : "false");
}

bool AddGatewayRequest::getEnableSls() const {
  return enableSls_;
}

void AddGatewayRequest::setEnableSls(bool enableSls) {
  enableSls_ = enableSls;
  setParameter(std::string("EnableSls"), enableSls ? "true" : "false");
}

std::string AddGatewayRequest::getSpec() const {
  return spec_;
}

void AddGatewayRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string AddGatewayRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddGatewayRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddGatewayRequest::getRequestPars() const {
  return requestPars_;
}

void AddGatewayRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

bool AddGatewayRequest::getEnterpriseSecurityGroup() const {
  return enterpriseSecurityGroup_;
}

void AddGatewayRequest::setEnterpriseSecurityGroup(bool enterpriseSecurityGroup) {
  enterpriseSecurityGroup_ = enterpriseSecurityGroup;
  setParameter(std::string("EnterpriseSecurityGroup"), enterpriseSecurityGroup ? "true" : "false");
}

std::vector<AddGatewayRequest::Tag> AddGatewayRequest::getTag() const {
  return tag_;
}

void AddGatewayRequest::setTag(const std::vector<AddGatewayRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string AddGatewayRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AddGatewayRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string AddGatewayRequest::getSlbSpec() const {
  return slbSpec_;
}

void AddGatewayRequest::setSlbSpec(const std::string &slbSpec) {
  slbSpec_ = slbSpec;
  setParameter(std::string("SlbSpec"), slbSpec);
}

std::string AddGatewayRequest::getName() const {
  return name_;
}

void AddGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGatewayRequest::getRegion() const {
  return region_;
}

void AddGatewayRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::vector<AddGatewayRequest::ZoneInfo> AddGatewayRequest::getZoneInfo() const {
  return zoneInfo_;
}

void AddGatewayRequest::setZoneInfo(const std::vector<AddGatewayRequest::ZoneInfo> &zoneInfo) {
  zoneInfo_ = zoneInfo;
  for(int dep1 = 0; dep1 != zoneInfo.size(); dep1++) {
    setParameter(std::string("ZoneInfo") + "." + std::to_string(dep1 + 1) + ".VSwitchId", zoneInfo[dep1].vSwitchId);
    setParameter(std::string("ZoneInfo") + "." + std::to_string(dep1 + 1) + ".ZoneId", zoneInfo[dep1].zoneId);
  }
}

std::string AddGatewayRequest::getXtraceRatio() const {
  return xtraceRatio_;
}

void AddGatewayRequest::setXtraceRatio(const std::string &xtraceRatio) {
  xtraceRatio_ = xtraceRatio;
  setParameter(std::string("XtraceRatio"), xtraceRatio);
}

std::string AddGatewayRequest::getVSwitchId2() const {
  return vSwitchId2_;
}

void AddGatewayRequest::setVSwitchId2(const std::string &vSwitchId2) {
  vSwitchId2_ = vSwitchId2;
  setParameter(std::string("VSwitchId2"), vSwitchId2);
}

std::string AddGatewayRequest::getVpc() const {
  return vpc_;
}

void AddGatewayRequest::setVpc(const std::string &vpc) {
  vpc_ = vpc;
  setParameter(std::string("Vpc"), vpc);
}

std::string AddGatewayRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddGatewayRequest::getChargeType() const {
  return chargeType_;
}

void AddGatewayRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

