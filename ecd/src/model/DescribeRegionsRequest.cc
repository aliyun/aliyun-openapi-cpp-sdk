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

#include <alibabacloud/ecd/model/DescribeRegionsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeRegionsRequest;

DescribeRegionsRequest::DescribeRegionsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeRegions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRegionsRequest::~DescribeRegionsRequest() {}

std::string DescribeRegionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRegionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRegionsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeRegionsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

