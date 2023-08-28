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

#include <alibabacloud/eflo/model/GetSubnetRequest.h>

using AlibabaCloud::Eflo::Model::GetSubnetRequest;

GetSubnetRequest::GetSubnetRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "GetSubnet") {
  setMethod(HttpRequest::Method::Post);
}

GetSubnetRequest::~GetSubnetRequest() {}

std::string GetSubnetRequest::getSubnetId() const {
  return subnetId_;
}

void GetSubnetRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string GetSubnetRequest::getRegionId() const {
  return regionId_;
}

void GetSubnetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string GetSubnetRequest::getVpdId() const {
  return vpdId_;
}

void GetSubnetRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

