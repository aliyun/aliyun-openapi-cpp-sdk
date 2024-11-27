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

#include <alibabacloud/ens/model/CreateARMServerInstancesRequest.h>

using AlibabaCloud::Ens::Model::CreateARMServerInstancesRequest;

CreateARMServerInstancesRequest::CreateARMServerInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateARMServerInstances") {
  setMethod(HttpRequest::Method::Post);
}

CreateARMServerInstancesRequest::~CreateARMServerInstancesRequest() {}

std::string CreateARMServerInstancesRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateARMServerInstancesRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string CreateARMServerInstancesRequest::getResolution() const {
  return resolution_;
}

void CreateARMServerInstancesRequest::setResolution(const std::string &resolution) {
  resolution_ = resolution;
  setParameter(std::string("Resolution"), resolution);
}

int CreateARMServerInstancesRequest::getFrequency() const {
  return frequency_;
}

void CreateARMServerInstancesRequest::setFrequency(int frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), std::to_string(frequency));
}

std::string CreateARMServerInstancesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateARMServerInstancesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int CreateARMServerInstancesRequest::getPeriod() const {
  return period_;
}

void CreateARMServerInstancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateARMServerInstancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateARMServerInstancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateARMServerInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateARMServerInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateARMServerInstancesRequest::getImageId() const {
  return imageId_;
}

void CreateARMServerInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateARMServerInstancesRequest::getServerType() const {
  return serverType_;
}

void CreateARMServerInstancesRequest::setServerType(const std::string &serverType) {
  serverType_ = serverType;
  setParameter(std::string("ServerType"), serverType);
}

bool CreateARMServerInstancesRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateARMServerInstancesRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateARMServerInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void CreateARMServerInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

int CreateARMServerInstancesRequest::getAmount() const {
  return amount_;
}

void CreateARMServerInstancesRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string CreateARMServerInstancesRequest::getEnvironmentVar() const {
  return environmentVar_;
}

void CreateARMServerInstancesRequest::setEnvironmentVar(const std::string &environmentVar) {
  environmentVar_ = environmentVar;
  setParameter(std::string("EnvironmentVar"), environmentVar);
}

std::string CreateARMServerInstancesRequest::get_NameSpace() const {
  return _nameSpace_;
}

void CreateARMServerInstancesRequest::set_NameSpace(const std::string &_nameSpace) {
  _nameSpace_ = _nameSpace;
  setParameter(std::string("NameSpace"), _nameSpace);
}

std::string CreateARMServerInstancesRequest::getServerName() const {
  return serverName_;
}

void CreateARMServerInstancesRequest::setServerName(const std::string &serverName) {
  serverName_ = serverName;
  setParameter(std::string("ServerName"), serverName);
}

std::string CreateARMServerInstancesRequest::getPayType() const {
  return payType_;
}

void CreateARMServerInstancesRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

