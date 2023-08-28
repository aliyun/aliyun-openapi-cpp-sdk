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

#include <alibabacloud/eflo/model/CreateVpdRequest.h>

using AlibabaCloud::Eflo::Model::CreateVpdRequest;

CreateVpdRequest::CreateVpdRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateVpd") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpdRequest::~CreateVpdRequest() {}

std::string CreateVpdRequest::getVpdName() const {
  return vpdName_;
}

void CreateVpdRequest::setVpdName(const std::string &vpdName) {
  vpdName_ = vpdName;
  setBodyParameter(std::string("VpdName"), vpdName);
}

std::string CreateVpdRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpdRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpdRequest::getRegionId() const {
  return regionId_;
}

void CreateVpdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateVpdRequest::getCidr() const {
  return cidr_;
}

void CreateVpdRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setBodyParameter(std::string("Cidr"), cidr);
}

std::vector<CreateVpdRequest::Subnets> CreateVpdRequest::getSubnets() const {
  return subnets_;
}

void CreateVpdRequest::setSubnets(const std::vector<CreateVpdRequest::Subnets> &subnets) {
  subnets_ = subnets;
  for(int dep1 = 0; dep1 != subnets.size(); dep1++) {
  auto subnetsObj = subnets.at(dep1);
  std::string subnetsObjStr = std::string("Subnets") + "." + std::to_string(dep1 + 1);
    setBodyParameter(subnetsObjStr + ".RegionId", subnetsObj.regionId);
    setBodyParameter(subnetsObjStr + ".ZoneId", subnetsObj.zoneId);
    setBodyParameter(subnetsObjStr + ".Cidr", subnetsObj.cidr);
    setBodyParameter(subnetsObjStr + ".SubnetName", subnetsObj.subnetName);
    setBodyParameter(subnetsObjStr + ".Type", subnetsObj.type);
  }
}

std::vector<CreateVpdRequest::Tag> CreateVpdRequest::getTag() const {
  return tag_;
}

void CreateVpdRequest::setTag(const std::vector<CreateVpdRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
  }
}

