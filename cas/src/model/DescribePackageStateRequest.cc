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

#include <alibabacloud/cas/model/DescribePackageStateRequest.h>

using AlibabaCloud::Cas::Model::DescribePackageStateRequest;

DescribePackageStateRequest::DescribePackageStateRequest()
    : RpcServiceRequest("cas", "2020-04-07", "DescribePackageState") {
  setMethod(HttpRequest::Method::Post);
}

DescribePackageStateRequest::~DescribePackageStateRequest() {}

std::string DescribePackageStateRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePackageStateRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribePackageStateRequest::getProductCode() const {
  return productCode_;
}

void DescribePackageStateRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

