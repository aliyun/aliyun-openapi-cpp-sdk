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

#include <alibabacloud/bssopenapi/model/QuerySplitItemBillRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySplitItemBillRequest;

QuerySplitItemBillRequest::QuerySplitItemBillRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySplitItemBill") {
  setMethod(HttpRequest::Method::Post);
}

QuerySplitItemBillRequest::~QuerySplitItemBillRequest() {}

std::string QuerySplitItemBillRequest::getProductCode() const {
  return productCode_;
}

void QuerySplitItemBillRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string QuerySplitItemBillRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QuerySplitItemBillRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::string QuerySplitItemBillRequest::getBillingCycle() const {
  return billingCycle_;
}

void QuerySplitItemBillRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

long QuerySplitItemBillRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySplitItemBillRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int QuerySplitItemBillRequest::getPageNum() const {
  return pageNum_;
}

void QuerySplitItemBillRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long QuerySplitItemBillRequest::getBillOwnerId() const {
  return billOwnerId_;
}

void QuerySplitItemBillRequest::setBillOwnerId(long billOwnerId) {
  billOwnerId_ = billOwnerId;
  setParameter(std::string("BillOwnerId"), std::to_string(billOwnerId));
}

std::string QuerySplitItemBillRequest::getProductType() const {
  return productType_;
}

void QuerySplitItemBillRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int QuerySplitItemBillRequest::getPageSize() const {
  return pageSize_;
}

void QuerySplitItemBillRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

