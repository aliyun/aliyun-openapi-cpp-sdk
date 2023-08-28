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

#include <alibabacloud/eflo/model/CreateSubnetRequest.h>

using AlibabaCloud::Eflo::Model::CreateSubnetRequest;

CreateSubnetRequest::CreateSubnetRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateSubnet") {
  setMethod(HttpRequest::Method::Post);
}

CreateSubnetRequest::~CreateSubnetRequest() {}

std::string CreateSubnetRequest::getType() const {
  return type_;
}

void CreateSubnetRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateSubnetRequest::getRegionId() const {
  return regionId_;
}

void CreateSubnetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateSubnetRequest::getCidr() const {
  return cidr_;
}

void CreateSubnetRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setBodyParameter(std::string("Cidr"), cidr);
}

std::vector<CreateSubnetRequest::Tag> CreateSubnetRequest::getTag() const {
  return tag_;
}

void CreateSubnetRequest::setTag(const std::vector<CreateSubnetRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateSubnetRequest::getVpdId() const {
  return vpdId_;
}

void CreateSubnetRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string CreateSubnetRequest::getZoneId() const {
  return zoneId_;
}

void CreateSubnetRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string CreateSubnetRequest::getSubnetName() const {
  return subnetName_;
}

void CreateSubnetRequest::setSubnetName(const std::string &subnetName) {
  subnetName_ = subnetName;
  setBodyParameter(std::string("SubnetName"), subnetName);
}

