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

#include <alibabacloud/eflo/model/CreateVccRequest.h>

using AlibabaCloud::Eflo::Model::CreateVccRequest;

CreateVccRequest::CreateVccRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateVcc") {
  setMethod(HttpRequest::Method::Post);
}

CreateVccRequest::~CreateVccRequest() {}

std::string CreateVccRequest::getBgpCidr() const {
  return bgpCidr_;
}

void CreateVccRequest::setBgpCidr(const std::string &bgpCidr) {
  bgpCidr_ = bgpCidr;
  setBodyParameter(std::string("BgpCidr"), bgpCidr);
}

std::string CreateVccRequest::getCenId() const {
  return cenId_;
}

void CreateVccRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setBodyParameter(std::string("CenId"), cenId);
}

std::string CreateVccRequest::getDescription() const {
  return description_;
}

void CreateVccRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

bool CreateVccRequest::getAccessCouldService() const {
  return accessCouldService_;
}

void CreateVccRequest::setAccessCouldService(bool accessCouldService) {
  accessCouldService_ = accessCouldService;
  setBodyParameter(std::string("AccessCouldService"), accessCouldService ? "true" : "false");
}

std::string CreateVccRequest::getRegionId() const {
  return regionId_;
}

void CreateVccRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateVccRequest::getVccId() const {
  return vccId_;
}

void CreateVccRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

std::string CreateVccRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateVccRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setBodyParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateVccRequest::getVpdId() const {
  return vpdId_;
}

void CreateVccRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string CreateVccRequest::getVpcId() const {
  return vpcId_;
}

void CreateVccRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

