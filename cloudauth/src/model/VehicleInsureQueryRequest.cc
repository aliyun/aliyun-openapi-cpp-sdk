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

#include <alibabacloud/cloudauth/model/VehicleInsureQueryRequest.h>

using AlibabaCloud::Cloudauth::Model::VehicleInsureQueryRequest;

VehicleInsureQueryRequest::VehicleInsureQueryRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "VehicleInsureQuery") {
  setMethod(HttpRequest::Method::Post);
}

VehicleInsureQueryRequest::~VehicleInsureQueryRequest() {}

std::string VehicleInsureQueryRequest::getVehicleType() const {
  return vehicleType_;
}

void VehicleInsureQueryRequest::setVehicleType(const std::string &vehicleType) {
  vehicleType_ = vehicleType;
  setParameter(std::string("VehicleType"), vehicleType);
}

std::string VehicleInsureQueryRequest::getParamType() const {
  return paramType_;
}

void VehicleInsureQueryRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setParameter(std::string("ParamType"), paramType);
}

std::string VehicleInsureQueryRequest::getVehicleNum() const {
  return vehicleNum_;
}

void VehicleInsureQueryRequest::setVehicleNum(const std::string &vehicleNum) {
  vehicleNum_ = vehicleNum;
  setParameter(std::string("VehicleNum"), vehicleNum);
}

std::string VehicleInsureQueryRequest::getVin() const {
  return vin_;
}

void VehicleInsureQueryRequest::setVin(const std::string &vin) {
  vin_ = vin;
  setParameter(std::string("Vin"), vin);
}

