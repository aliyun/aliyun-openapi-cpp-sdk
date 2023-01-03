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

std::string CreateSubnetRequest::getVpdId() const {
  return vpdId_;
}

void CreateSubnetRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string CreateSubnetRequest::getName() const {
  return name_;
}

void CreateSubnetRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateSubnetRequest::getZoneId() const {
  return zoneId_;
}

void CreateSubnetRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string CreateSubnetRequest::getCidr() const {
  return cidr_;
}

void CreateSubnetRequest::setCidr(const std::string &cidr) {
  cidr_ = cidr;
  setBodyParameter(std::string("Cidr"), cidr);
}

