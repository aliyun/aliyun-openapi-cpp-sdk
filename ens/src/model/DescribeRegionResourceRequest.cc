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

#include <alibabacloud/ens/model/DescribeRegionResourceRequest.h>

using AlibabaCloud::Ens::Model::DescribeRegionResourceRequest;

DescribeRegionResourceRequest::DescribeRegionResourceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeRegionResource") {
  setMethod(HttpRequest::Method::Get);
}

DescribeRegionResourceRequest::~DescribeRegionResourceRequest() {}

std::string DescribeRegionResourceRequest::getIspType() const {
  return ispType_;
}

void DescribeRegionResourceRequest::setIspType(const std::string &ispType) {
  ispType_ = ispType;
  setParameter(std::string("IspType"), ispType);
}

std::string DescribeRegionResourceRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeRegionResourceRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeRegionResourceRequest::getOpenapiCheck() const {
  return openapiCheck_;
}

void DescribeRegionResourceRequest::setOpenapiCheck(const std::string &openapiCheck) {
  openapiCheck_ = openapiCheck;
  setParameter(std::string("OpenapiCheck"), openapiCheck);
}

