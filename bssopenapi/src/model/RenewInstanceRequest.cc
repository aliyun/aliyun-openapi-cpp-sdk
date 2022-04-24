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

#include <alibabacloud/bssopenapi/model/RenewInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "RenewInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest() {}

std::string RenewInstanceRequest::getProductCode() const {
  return productCode_;
}

void RenewInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string RenewInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long RenewInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewInstanceRequest::getProductType() const {
  return productType_;
}

void RenewInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string RenewInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int RenewInstanceRequest::getRenewPeriod() const {
  return renewPeriod_;
}

void RenewInstanceRequest::setRenewPeriod(int renewPeriod) {
  renewPeriod_ = renewPeriod;
  setParameter(std::string("RenewPeriod"), std::to_string(renewPeriod));
}

