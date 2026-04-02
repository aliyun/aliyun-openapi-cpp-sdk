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

#include <alibabacloud/eflo/model/SwitchVccConnectionRequest.h>

using AlibabaCloud::Eflo::Model::SwitchVccConnectionRequest;

SwitchVccConnectionRequest::SwitchVccConnectionRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "SwitchVccConnection") {
  setMethod(HttpRequest::Method::Post);
}

SwitchVccConnectionRequest::~SwitchVccConnectionRequest() {}

std::string SwitchVccConnectionRequest::getCenId() const {
  return cenId_;
}

void SwitchVccConnectionRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setBodyParameter(std::string("CenId"), cenId);
}

std::string SwitchVccConnectionRequest::getRegionId() const {
  return regionId_;
}

void SwitchVccConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string SwitchVccConnectionRequest::getVccId() const {
  return vccId_;
}

void SwitchVccConnectionRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

std::string SwitchVccConnectionRequest::getConnectionType() const {
  return connectionType_;
}

void SwitchVccConnectionRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setBodyParameter(std::string("ConnectionType"), connectionType);
}

std::string SwitchVccConnectionRequest::getVSwitchId() const {
  return vSwitchId_;
}

void SwitchVccConnectionRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setBodyParameter(std::string("VSwitchId"), vSwitchId);
}

std::string SwitchVccConnectionRequest::getVpcId() const {
  return vpcId_;
}

void SwitchVccConnectionRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

