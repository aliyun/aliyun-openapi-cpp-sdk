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

#include <alibabacloud/ecd/model/CreateSimpleOfficeSiteRequest.h>

using AlibabaCloud::Ecd::Model::CreateSimpleOfficeSiteRequest;

CreateSimpleOfficeSiteRequest::CreateSimpleOfficeSiteRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateSimpleOfficeSite") {
  setMethod(HttpRequest::Method::Post);
}

CreateSimpleOfficeSiteRequest::~CreateSimpleOfficeSiteRequest() {}

std::string CreateSimpleOfficeSiteRequest::getVpcType() const {
  return vpcType_;
}

void CreateSimpleOfficeSiteRequest::setVpcType(const std::string &vpcType) {
  vpcType_ = vpcType;
  setParameter(std::string("VpcType"), vpcType);
}

std::string CreateSimpleOfficeSiteRequest::getCenId() const {
  return cenId_;
}

void CreateSimpleOfficeSiteRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

long CreateSimpleOfficeSiteRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void CreateSimpleOfficeSiteRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

bool CreateSimpleOfficeSiteRequest::getEnableInternetAccess() const {
  return enableInternetAccess_;
}

void CreateSimpleOfficeSiteRequest::setEnableInternetAccess(bool enableInternetAccess) {
  enableInternetAccess_ = enableInternetAccess;
  setParameter(std::string("EnableInternetAccess"), enableInternetAccess ? "true" : "false");
}

std::string CreateSimpleOfficeSiteRequest::getVerifyCode() const {
  return verifyCode_;
}

void CreateSimpleOfficeSiteRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

bool CreateSimpleOfficeSiteRequest::getNeedVerifyZeroDevice() const {
  return needVerifyZeroDevice_;
}

void CreateSimpleOfficeSiteRequest::setNeedVerifyZeroDevice(bool needVerifyZeroDevice) {
  needVerifyZeroDevice_ = needVerifyZeroDevice;
  setParameter(std::string("NeedVerifyZeroDevice"), needVerifyZeroDevice ? "true" : "false");
}

std::string CreateSimpleOfficeSiteRequest::getRegionId() const {
  return regionId_;
}

void CreateSimpleOfficeSiteRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateSimpleOfficeSiteRequest::getEnableAdminAccess() const {
  return enableAdminAccess_;
}

void CreateSimpleOfficeSiteRequest::setEnableAdminAccess(bool enableAdminAccess) {
  enableAdminAccess_ = enableAdminAccess;
  setParameter(std::string("EnableAdminAccess"), enableAdminAccess ? "true" : "false");
}

int CreateSimpleOfficeSiteRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateSimpleOfficeSiteRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateSimpleOfficeSiteRequest::getDesktopAccessType() const {
  return desktopAccessType_;
}

void CreateSimpleOfficeSiteRequest::setDesktopAccessType(const std::string &desktopAccessType) {
  desktopAccessType_ = desktopAccessType;
  setParameter(std::string("DesktopAccessType"), desktopAccessType);
}

std::string CreateSimpleOfficeSiteRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void CreateSimpleOfficeSiteRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

bool CreateSimpleOfficeSiteRequest::getCloudBoxOfficeSite() const {
  return cloudBoxOfficeSite_;
}

void CreateSimpleOfficeSiteRequest::setCloudBoxOfficeSite(bool cloudBoxOfficeSite) {
  cloudBoxOfficeSite_ = cloudBoxOfficeSite;
  setParameter(std::string("CloudBoxOfficeSite"), cloudBoxOfficeSite ? "true" : "false");
}

std::vector<std::string> CreateSimpleOfficeSiteRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateSimpleOfficeSiteRequest::setVSwitchId(const std::vector<std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
}

std::string CreateSimpleOfficeSiteRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateSimpleOfficeSiteRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

