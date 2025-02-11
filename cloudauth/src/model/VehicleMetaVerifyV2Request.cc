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

#include <alibabacloud/cloudauth/model/VehicleMetaVerifyV2Request.h>

using AlibabaCloud::Cloudauth::Model::VehicleMetaVerifyV2Request;

VehicleMetaVerifyV2Request::VehicleMetaVerifyV2Request()
    : RpcServiceRequest("cloudauth", "2019-03-07", "VehicleMetaVerifyV2") {
  setMethod(HttpRequest::Method::Post);
}

VehicleMetaVerifyV2Request::~VehicleMetaVerifyV2Request() {}

std::string VehicleMetaVerifyV2Request::getVehicleType() const {
  return vehicleType_;
}

void VehicleMetaVerifyV2Request::setVehicleType(const std::string &vehicleType) {
  vehicleType_ = vehicleType;
  setParameter(std::string("VehicleType"), vehicleType);
}

std::string VehicleMetaVerifyV2Request::getParamType() const {
  return paramType_;
}

void VehicleMetaVerifyV2Request::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setParameter(std::string("ParamType"), paramType);
}

std::string VehicleMetaVerifyV2Request::getVehicleNum() const {
  return vehicleNum_;
}

void VehicleMetaVerifyV2Request::setVehicleNum(const std::string &vehicleNum) {
  vehicleNum_ = vehicleNum;
  setParameter(std::string("VehicleNum"), vehicleNum);
}

std::string VehicleMetaVerifyV2Request::getIdentifyNum() const {
  return identifyNum_;
}

void VehicleMetaVerifyV2Request::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setParameter(std::string("IdentifyNum"), identifyNum);
}

std::string VehicleMetaVerifyV2Request::getVerifyMetaType() const {
  return verifyMetaType_;
}

void VehicleMetaVerifyV2Request::setVerifyMetaType(const std::string &verifyMetaType) {
  verifyMetaType_ = verifyMetaType;
  setParameter(std::string("VerifyMetaType"), verifyMetaType);
}

std::string VehicleMetaVerifyV2Request::getUserName() const {
  return userName_;
}

void VehicleMetaVerifyV2Request::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

