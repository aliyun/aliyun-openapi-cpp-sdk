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

#include <alibabacloud/bssopenapi/model/QueryInstanceGaapCostRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryInstanceGaapCostRequest;

QueryInstanceGaapCostRequest::QueryInstanceGaapCostRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryInstanceGaapCost") {
  setMethod(HttpRequest::Method::Post);
}

QueryInstanceGaapCostRequest::~QueryInstanceGaapCostRequest() {}

std::string QueryInstanceGaapCostRequest::getProductCode() const {
  return productCode_;
}

void QueryInstanceGaapCostRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string QueryInstanceGaapCostRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QueryInstanceGaapCostRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QueryInstanceGaapCostRequest::getBillingCycle() const {
  return billingCycle_;
}

void QueryInstanceGaapCostRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

int QueryInstanceGaapCostRequest::getPageNum() const {
  return pageNum_;
}

void QueryInstanceGaapCostRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryInstanceGaapCostRequest::getProductType() const {
  return productType_;
}

void QueryInstanceGaapCostRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int QueryInstanceGaapCostRequest::getPageSize() const {
  return pageSize_;
}

void QueryInstanceGaapCostRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

