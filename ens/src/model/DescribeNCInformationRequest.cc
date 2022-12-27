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

#include <alibabacloud/ens/model/DescribeNCInformationRequest.h>

using AlibabaCloud::Ens::Model::DescribeNCInformationRequest;

DescribeNCInformationRequest::DescribeNCInformationRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeNCInformation") {
  setMethod(HttpRequest::Method::Get);
}

DescribeNCInformationRequest::~DescribeNCInformationRequest() {}

std::string DescribeNCInformationRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeNCInformationRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeNCInformationRequest::getResourceId() const {
  return resourceId_;
}

void DescribeNCInformationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeNCInformationRequest::getOpenapiCheck() const {
  return openapiCheck_;
}

void DescribeNCInformationRequest::setOpenapiCheck(const std::string &openapiCheck) {
  openapiCheck_ = openapiCheck;
  setParameter(std::string("OpenapiCheck"), openapiCheck);
}

