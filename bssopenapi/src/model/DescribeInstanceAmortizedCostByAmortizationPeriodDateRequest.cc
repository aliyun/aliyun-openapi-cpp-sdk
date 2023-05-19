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

#include <alibabacloud/bssopenapi/model/DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest;

DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeInstanceAmortizedCostByAmortizationPeriodDate") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::~DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest() {}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getAmortizationDateStart() const {
  return amortizationDateStart_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setAmortizationDateStart(const std::string &amortizationDateStart) {
  amortizationDateStart_ = amortizationDateStart;
  setBodyParameter(std::string("AmortizationDateStart"), amortizationDateStart);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setBodyParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getCostUnitCode() const {
  return costUnitCode_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setCostUnitCode(const std::string &costUnitCode) {
  costUnitCode_ = costUnitCode;
  setBodyParameter(std::string("CostUnitCode"), costUnitCode);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getBillUserIdList() const {
  return billUserIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setBillUserIdList(const std::vector<std::string> &billUserIdList) {
  billUserIdList_ = billUserIdList;
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getProductDetail() const {
  return productDetail_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setProductDetail(const std::string &productDetail) {
  productDetail_ = productDetail;
  setBodyParameter(std::string("ProductDetail"), productDetail);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getBillOwnerIdList() const {
  return billOwnerIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList) {
  billOwnerIdList_ = billOwnerIdList;
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getBillingCycle() const {
  return billingCycle_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setBodyParameter(std::string("BillingCycle"), billingCycle);
}

std::string DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getAmortizationDateEnd() const {
  return amortizationDateEnd_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setAmortizationDateEnd(const std::string &amortizationDateEnd) {
  amortizationDateEnd_ = amortizationDateEnd;
  setBodyParameter(std::string("AmortizationDateEnd"), amortizationDateEnd);
}

std::vector<std::string> DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getInstanceIdList() const {
  return instanceIdList_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setInstanceIdList(const std::vector<std::string> &instanceIdList) {
  instanceIdList_ = instanceIdList;
}

int DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

