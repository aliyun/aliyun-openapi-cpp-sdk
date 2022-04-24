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

#include <alibabacloud/bssopenapi/model/RefundInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::RefundInstanceRequest;

RefundInstanceRequest::RefundInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "RefundInstance") {
  setMethod(HttpRequest::Method::Post);
}

RefundInstanceRequest::~RefundInstanceRequest() {}

std::string RefundInstanceRequest::getProductCode() const {
  return productCode_;
}

void RefundInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string RefundInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RefundInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RefundInstanceRequest::getImmediatelyRelease() const {
  return immediatelyRelease_;
}

void RefundInstanceRequest::setImmediatelyRelease(const std::string &immediatelyRelease) {
  immediatelyRelease_ = immediatelyRelease;
  setParameter(std::string("ImmediatelyRelease"), immediatelyRelease);
}

std::string RefundInstanceRequest::getProductType() const {
  return productType_;
}

void RefundInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string RefundInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RefundInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

