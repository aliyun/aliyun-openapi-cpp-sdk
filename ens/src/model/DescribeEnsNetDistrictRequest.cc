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

#include <alibabacloud/ens/model/DescribeEnsNetDistrictRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsNetDistrictRequest;

DescribeEnsNetDistrictRequest::DescribeEnsNetDistrictRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsNetDistrict") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsNetDistrictRequest::~DescribeEnsNetDistrictRequest() {}

std::string DescribeEnsNetDistrictRequest::getNetLevelCode() const {
  return netLevelCode_;
}

void DescribeEnsNetDistrictRequest::setNetLevelCode(const std::string &netLevelCode) {
  netLevelCode_ = netLevelCode;
  setParameter(std::string("NetLevelCode"), netLevelCode);
}

std::string DescribeEnsNetDistrictRequest::getNetDistrictCode() const {
  return netDistrictCode_;
}

void DescribeEnsNetDistrictRequest::setNetDistrictCode(const std::string &netDistrictCode) {
  netDistrictCode_ = netDistrictCode;
  setParameter(std::string("NetDistrictCode"), netDistrictCode);
}

