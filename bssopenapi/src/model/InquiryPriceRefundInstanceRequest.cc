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

#include <alibabacloud/bssopenapi/model/InquiryPriceRefundInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::InquiryPriceRefundInstanceRequest;

InquiryPriceRefundInstanceRequest::InquiryPriceRefundInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "InquiryPriceRefundInstance") {
  setMethod(HttpRequest::Method::Post);
}

InquiryPriceRefundInstanceRequest::~InquiryPriceRefundInstanceRequest() {}

std::string InquiryPriceRefundInstanceRequest::getProductCode() const {
  return productCode_;
}

void InquiryPriceRefundInstanceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string InquiryPriceRefundInstanceRequest::getClientToken() const {
  return clientToken_;
}

void InquiryPriceRefundInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string InquiryPriceRefundInstanceRequest::getProductType() const {
  return productType_;
}

void InquiryPriceRefundInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string InquiryPriceRefundInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void InquiryPriceRefundInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

