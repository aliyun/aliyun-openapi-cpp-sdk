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

#include <alibabacloud/market/model/DescribeApiMeteringRequest.h>

using AlibabaCloud::Market::Model::DescribeApiMeteringRequest;

DescribeApiMeteringRequest::DescribeApiMeteringRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeApiMetering") {
  setMethod(HttpRequest::Method::Get);
}

DescribeApiMeteringRequest::~DescribeApiMeteringRequest() {}

std::string DescribeApiMeteringRequest::getProductCode() const {
  return productCode_;
}

void DescribeApiMeteringRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("productCode"), productCode);
}

int DescribeApiMeteringRequest::getType() const {
  return type_;
}

void DescribeApiMeteringRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("type"), std::to_string(type));
}

int DescribeApiMeteringRequest::getPageNum() const {
  return pageNum_;
}

void DescribeApiMeteringRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("pageNum"), std::to_string(pageNum));
}

