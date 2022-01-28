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

#include <alibabacloud/ens/model/AddDeviceInternetPortRequest.h>

using AlibabaCloud::Ens::Model::AddDeviceInternetPortRequest;

AddDeviceInternetPortRequest::AddDeviceInternetPortRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AddDeviceInternetPort") {
  setMethod(HttpRequest::Method::Get);
}

AddDeviceInternetPortRequest::~AddDeviceInternetPortRequest() {}

std::string AddDeviceInternetPortRequest::getISP() const {
  return iSP_;
}

void AddDeviceInternetPortRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string AddDeviceInternetPortRequest::getInternalIp() const {
  return internalIp_;
}

void AddDeviceInternetPortRequest::setInternalIp(const std::string &internalIp) {
  internalIp_ = internalIp;
  setParameter(std::string("InternalIp"), internalIp);
}

std::string AddDeviceInternetPortRequest::getRegionId() const {
  return regionId_;
}

void AddDeviceInternetPortRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddDeviceInternetPortRequest::getNatType() const {
  return natType_;
}

void AddDeviceInternetPortRequest::setNatType(const std::string &natType) {
  natType_ = natType;
  setParameter(std::string("NatType"), natType);
}

std::string AddDeviceInternetPortRequest::getInstanceId() const {
  return instanceId_;
}

void AddDeviceInternetPortRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddDeviceInternetPortRequest::getInternalPort() const {
  return internalPort_;
}

void AddDeviceInternetPortRequest::setInternalPort(const std::string &internalPort) {
  internalPort_ = internalPort;
  setParameter(std::string("InternalPort"), internalPort);
}

