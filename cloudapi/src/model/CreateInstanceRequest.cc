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

#include <alibabacloud/cloudapi/model/CreateInstanceRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

std::string CreateInstanceRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void CreateInstanceRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string CreateInstanceRequest::getInstanceCidr() const {
  return instanceCidr_;
}

void CreateInstanceRequest::setInstanceCidr(const std::string &instanceCidr) {
  instanceCidr_ = instanceCidr;
  setParameter(std::string("InstanceCidr"), instanceCidr);
}

std::string CreateInstanceRequest::getHttpsPolicy() const {
  return httpsPolicy_;
}

void CreateInstanceRequest::setHttpsPolicy(const std::string &httpsPolicy) {
  httpsPolicy_ = httpsPolicy;
  setParameter(std::string("HttpsPolicy"), httpsPolicy);
}

int CreateInstanceRequest::getDuration() const {
  return duration_;
}

void CreateInstanceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<CreateInstanceRequest::Tag> CreateInstanceRequest::getTag() const {
  return tag_;
}

void CreateInstanceRequest::setTag(const std::vector<CreateInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateInstanceRequest::getUserVpcId() const {
  return userVpcId_;
}

void CreateInstanceRequest::setUserVpcId(const std::string &userVpcId) {
  userVpcId_ = userVpcId;
  setParameter(std::string("UserVpcId"), userVpcId);
}

std::string CreateInstanceRequest::getToken() const {
  return token_;
}

void CreateInstanceRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> CreateInstanceRequest::getZoneVSwitchSecurityGroup() const {
  return zoneVSwitchSecurityGroup_;
}

void CreateInstanceRequest::setZoneVSwitchSecurityGroup(const std::vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> &zoneVSwitchSecurityGroup) {
  zoneVSwitchSecurityGroup_ = zoneVSwitchSecurityGroup;
  for(int dep1 = 0; dep1 != zoneVSwitchSecurityGroup.size(); dep1++) {
  auto zoneVSwitchSecurityGroupObj = zoneVSwitchSecurityGroup.at(dep1);
  std::string zoneVSwitchSecurityGroupObjStr = std::string("ZoneVSwitchSecurityGroup") + "." + std::to_string(dep1 + 1);
    setParameter(zoneVSwitchSecurityGroupObjStr + ".VSwitchId", zoneVSwitchSecurityGroupObj.vSwitchId);
    setParameter(zoneVSwitchSecurityGroupObjStr + ".CidrBlock", zoneVSwitchSecurityGroupObj.cidrBlock);
    setParameter(zoneVSwitchSecurityGroupObjStr + ".SecurityGroupId", zoneVSwitchSecurityGroupObj.securityGroupId);
    setParameter(zoneVSwitchSecurityGroupObjStr + ".ZoneId", zoneVSwitchSecurityGroupObj.zoneId);
  }
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

