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

#include <alibabacloud/eais/model/CreateEaiAllRequest.h>

using AlibabaCloud::Eais::Model::CreateEaiAllRequest;

CreateEaiAllRequest::CreateEaiAllRequest()
    : RpcServiceRequest("eais", "2019-06-24", "CreateEaiAll") {
  setMethod(HttpRequest::Method::Post);
}

CreateEaiAllRequest::~CreateEaiAllRequest() {}

std::string CreateEaiAllRequest::getClientImageId() const {
  return clientImageId_;
}

void CreateEaiAllRequest::setClientImageId(const std::string &clientImageId) {
  clientImageId_ = clientImageId;
  setParameter(std::string("ClientImageId"), clientImageId);
}

std::string CreateEaiAllRequest::getClientSystemDiskCategory() const {
  return clientSystemDiskCategory_;
}

void CreateEaiAllRequest::setClientSystemDiskCategory(const std::string &clientSystemDiskCategory) {
  clientSystemDiskCategory_ = clientSystemDiskCategory;
  setParameter(std::string("ClientSystemDiskCategory"), clientSystemDiskCategory);
}

int CreateEaiAllRequest::getClientInternetMaxBandwidthOut() const {
  return clientInternetMaxBandwidthOut_;
}

void CreateEaiAllRequest::setClientInternetMaxBandwidthOut(int clientInternetMaxBandwidthOut) {
  clientInternetMaxBandwidthOut_ = clientInternetMaxBandwidthOut;
  setParameter(std::string("ClientInternetMaxBandwidthOut"), std::to_string(clientInternetMaxBandwidthOut));
}

std::string CreateEaiAllRequest::getClientToken() const {
  return clientToken_;
}

void CreateEaiAllRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEaiAllRequest::getClientInstanceName() const {
  return clientInstanceName_;
}

void CreateEaiAllRequest::setClientInstanceName(const std::string &clientInstanceName) {
  clientInstanceName_ = clientInstanceName;
  setParameter(std::string("ClientInstanceName"), clientInstanceName);
}

int CreateEaiAllRequest::getClientInternetMaxBandwidthIn() const {
  return clientInternetMaxBandwidthIn_;
}

void CreateEaiAllRequest::setClientInternetMaxBandwidthIn(int clientInternetMaxBandwidthIn) {
  clientInternetMaxBandwidthIn_ = clientInternetMaxBandwidthIn;
  setParameter(std::string("ClientInternetMaxBandwidthIn"), std::to_string(clientInternetMaxBandwidthIn));
}

std::string CreateEaiAllRequest::getRegionId() const {
  return regionId_;
}

void CreateEaiAllRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateEaiAllRequest::getClientSystemDiskSize() const {
  return clientSystemDiskSize_;
}

void CreateEaiAllRequest::setClientSystemDiskSize(int clientSystemDiskSize) {
  clientSystemDiskSize_ = clientSystemDiskSize;
  setParameter(std::string("ClientSystemDiskSize"), std::to_string(clientSystemDiskSize));
}

std::string CreateEaiAllRequest::getClientVSwitchId() const {
  return clientVSwitchId_;
}

void CreateEaiAllRequest::setClientVSwitchId(const std::string &clientVSwitchId) {
  clientVSwitchId_ = clientVSwitchId;
  setParameter(std::string("ClientVSwitchId"), clientVSwitchId);
}

std::string CreateEaiAllRequest::getClientPassword() const {
  return clientPassword_;
}

void CreateEaiAllRequest::setClientPassword(const std::string &clientPassword) {
  clientPassword_ = clientPassword;
  setParameter(std::string("ClientPassword"), clientPassword);
}

std::string CreateEaiAllRequest::getClientInstanceType() const {
  return clientInstanceType_;
}

void CreateEaiAllRequest::setClientInstanceType(const std::string &clientInstanceType) {
  clientInstanceType_ = clientInstanceType;
  setParameter(std::string("ClientInstanceType"), clientInstanceType);
}

std::string CreateEaiAllRequest::getClientSecurityGroupId() const {
  return clientSecurityGroupId_;
}

void CreateEaiAllRequest::setClientSecurityGroupId(const std::string &clientSecurityGroupId) {
  clientSecurityGroupId_ = clientSecurityGroupId;
  setParameter(std::string("ClientSecurityGroupId"), clientSecurityGroupId);
}

std::string CreateEaiAllRequest::getEaiInstanceType() const {
  return eaiInstanceType_;
}

void CreateEaiAllRequest::setEaiInstanceType(const std::string &eaiInstanceType) {
  eaiInstanceType_ = eaiInstanceType;
  setParameter(std::string("EaiInstanceType"), eaiInstanceType);
}

std::string CreateEaiAllRequest::getClientZoneId() const {
  return clientZoneId_;
}

void CreateEaiAllRequest::setClientZoneId(const std::string &clientZoneId) {
  clientZoneId_ = clientZoneId;
  setParameter(std::string("ClientZoneId"), clientZoneId);
}

std::string CreateEaiAllRequest::getInstanceName() const {
  return instanceName_;
}

void CreateEaiAllRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

