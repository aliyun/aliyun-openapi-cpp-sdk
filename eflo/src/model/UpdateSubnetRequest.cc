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

#include <alibabacloud/eflo/model/UpdateSubnetRequest.h>

using AlibabaCloud::Eflo::Model::UpdateSubnetRequest;

UpdateSubnetRequest::UpdateSubnetRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateSubnet") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSubnetRequest::~UpdateSubnetRequest() {}

std::string UpdateSubnetRequest::getSubnetId() const {
  return subnetId_;
}

void UpdateSubnetRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string UpdateSubnetRequest::getRegionId() const {
  return regionId_;
}

void UpdateSubnetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateSubnetRequest::getVpdId() const {
  return vpdId_;
}

void UpdateSubnetRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string UpdateSubnetRequest::getZoneId() const {
  return zoneId_;
}

void UpdateSubnetRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string UpdateSubnetRequest::getSubnetName() const {
  return subnetName_;
}

void UpdateSubnetRequest::setSubnetName(const std::string &subnetName) {
  subnetName_ = subnetName;
  setBodyParameter(std::string("SubnetName"), subnetName);
}

