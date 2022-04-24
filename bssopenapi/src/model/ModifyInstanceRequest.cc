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

#include <alibabacloud/bssopenapi/model/ModifyInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "ModifyInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRequest::~ModifyInstanceRequest() {}

std::string ModifyInstanceRequest::getProductCode() const {
  return productCode_;
}

void ModifyInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ModifyInstanceRequest::getClientToken() const {
  return clientToken_;
}

void ModifyInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyInstanceRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void ModifyInstanceRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

long ModifyInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceRequest::getProductType() const {
  return productType_;
}

void ModifyInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string ModifyInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceRequest::getModifyType() const {
  return modifyType_;
}

void ModifyInstanceRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

std::vector<ModifyInstanceRequest::_Parameter> ModifyInstanceRequest::get_Parameter() const {
  return _parameter_;
}

void ModifyInstanceRequest::set_Parameter(const std::vector<ModifyInstanceRequest::_Parameter> &_parameter) {
  _parameter_ = _parameter;
  for(int dep1 = 0; dep1 != _parameter.size(); dep1++) {
  auto _parameterObj = _parameter.at(dep1);
  std::string _parameterObjStr = std::string("Parameter") + "." + std::to_string(dep1 + 1);
    setParameter(_parameterObjStr + ".Code", _parameterObj.code);
    setParameter(_parameterObjStr + ".Value", _parameterObj.value);
  }
}

