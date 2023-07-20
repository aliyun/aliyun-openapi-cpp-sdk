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

#include <alibabacloud/ens/model/DescribeEnsSaleControlAvailableResourceRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsSaleControlAvailableResourceRequest;

DescribeEnsSaleControlAvailableResourceRequest::DescribeEnsSaleControlAvailableResourceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsSaleControlAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsSaleControlAvailableResourceRequest::~DescribeEnsSaleControlAvailableResourceRequest() {}

std::string DescribeEnsSaleControlAvailableResourceRequest::getCustomAccount() const {
  return customAccount_;
}

void DescribeEnsSaleControlAvailableResourceRequest::setCustomAccount(const std::string &customAccount) {
  customAccount_ = customAccount;
  setParameter(std::string("CustomAccount"), customAccount);
}

std::string DescribeEnsSaleControlAvailableResourceRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeEnsSaleControlAvailableResourceRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeEnsSaleControlAvailableResourceRequest::getOrderType() const {
  return orderType_;
}

void DescribeEnsSaleControlAvailableResourceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

