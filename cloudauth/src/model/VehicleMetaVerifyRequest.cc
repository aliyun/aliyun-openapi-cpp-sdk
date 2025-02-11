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

#include <alibabacloud/cloudauth/model/VehicleMetaVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::VehicleMetaVerifyRequest;

VehicleMetaVerifyRequest::VehicleMetaVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "VehicleMetaVerify") {
  setMethod(HttpRequest::Method::Post);
}

VehicleMetaVerifyRequest::~VehicleMetaVerifyRequest() {}

std::string VehicleMetaVerifyRequest::getVehicleType() const {
  return vehicleType_;
}

void VehicleMetaVerifyRequest::setVehicleType(const std::string &vehicleType) {
  vehicleType_ = vehicleType;
  setParameter(std::string("VehicleType"), vehicleType);
}

std::string VehicleMetaVerifyRequest::getParamType() const {
  return paramType_;
}

void VehicleMetaVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setParameter(std::string("ParamType"), paramType);
}

std::string VehicleMetaVerifyRequest::getVehicleNum() const {
  return vehicleNum_;
}

void VehicleMetaVerifyRequest::setVehicleNum(const std::string &vehicleNum) {
  vehicleNum_ = vehicleNum;
  setParameter(std::string("VehicleNum"), vehicleNum);
}

std::string VehicleMetaVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void VehicleMetaVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setParameter(std::string("IdentifyNum"), identifyNum);
}

std::string VehicleMetaVerifyRequest::getVerifyMetaType() const {
  return verifyMetaType_;
}

void VehicleMetaVerifyRequest::setVerifyMetaType(const std::string &verifyMetaType) {
  verifyMetaType_ = verifyMetaType;
  setParameter(std::string("VerifyMetaType"), verifyMetaType);
}

std::string VehicleMetaVerifyRequest::getUserName() const {
  return userName_;
}

void VehicleMetaVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

