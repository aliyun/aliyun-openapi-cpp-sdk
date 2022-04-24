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

#include <alibabacloud/bssopenapi/model/CreateInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

std::string CreateInstanceRequest::getProductCode() const {
  return productCode_;
}

void CreateInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

int CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateInstanceRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void CreateInstanceRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string CreateInstanceRequest::getLogistics() const {
  return logistics_;
}

void CreateInstanceRequest::setLogistics(const std::string &logistics) {
  logistics_ = logistics;
  setParameter(std::string("Logistics"), logistics);
}

long CreateInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateInstanceRequest::getProductType() const {
  return productType_;
}

void CreateInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int CreateInstanceRequest::getRenewPeriod() const {
  return renewPeriod_;
}

void CreateInstanceRequest::setRenewPeriod(int renewPeriod) {
  renewPeriod_ = renewPeriod;
  setParameter(std::string("RenewPeriod"), std::to_string(renewPeriod));
}

std::string CreateInstanceRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void CreateInstanceRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::vector<CreateInstanceRequest::_Parameter> CreateInstanceRequest::get_Parameter() const {
  return _parameter_;
}

void CreateInstanceRequest::set_Parameter(const std::vector<CreateInstanceRequest::_Parameter> &_parameter) {
  _parameter_ = _parameter;
  for(int dep1 = 0; dep1 != _parameter.size(); dep1++) {
  auto _parameterObj = _parameter.at(dep1);
  std::string _parameterObjStr = std::string("Parameter") + "." + std::to_string(dep1 + 1);
    setParameter(_parameterObjStr + ".Code", _parameterObj.code);
    setParameter(_parameterObjStr + ".Value", _parameterObj.value);
  }
}

