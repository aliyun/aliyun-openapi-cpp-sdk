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

#include <alibabacloud/bssopenapi/model/QueryBillOverviewRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryBillOverviewRequest;

QueryBillOverviewRequest::QueryBillOverviewRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryBillOverview") {
  setMethod(HttpRequest::Method::Post);
}

QueryBillOverviewRequest::~QueryBillOverviewRequest() {}

std::string QueryBillOverviewRequest::getProductCode() const {
  return productCode_;
}

void QueryBillOverviewRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string QueryBillOverviewRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QueryBillOverviewRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QueryBillOverviewRequest::getBillingCycle() const {
  return billingCycle_;
}

void QueryBillOverviewRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

long QueryBillOverviewRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void QueryBillOverviewRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string QueryBillOverviewRequest::getProductType() const {
  return productType_;
}

void QueryBillOverviewRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

