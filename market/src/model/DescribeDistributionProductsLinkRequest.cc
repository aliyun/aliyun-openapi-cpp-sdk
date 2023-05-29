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

#include <alibabacloud/market/model/DescribeDistributionProductsLinkRequest.h>

using AlibabaCloud::Market::Model::DescribeDistributionProductsLinkRequest;

DescribeDistributionProductsLinkRequest::DescribeDistributionProductsLinkRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeDistributionProductsLink") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDistributionProductsLinkRequest::~DescribeDistributionProductsLinkRequest() {}

std::vector<DescribeDistributionProductsLinkRequest::std::string> DescribeDistributionProductsLinkRequest::getCodes() const {
  return codes_;
}

void DescribeDistributionProductsLinkRequest::setCodes(const std::vector<DescribeDistributionProductsLinkRequest::std::string> &codes) {
  codes_ = codes;
  for(int dep1 = 0; dep1 != codes.size(); dep1++) {
    setParameter(std::string("Codes") + "." + std::to_string(dep1 + 1), codes[dep1]);
  }
}

