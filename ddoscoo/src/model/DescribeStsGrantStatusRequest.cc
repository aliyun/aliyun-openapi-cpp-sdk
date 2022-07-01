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

#include <alibabacloud/ddoscoo/model/DescribeStsGrantStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeStsGrantStatusRequest;

DescribeStsGrantStatusRequest::DescribeStsGrantStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeStsGrantStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStsGrantStatusRequest::~DescribeStsGrantStatusRequest() {}

std::string DescribeStsGrantStatusRequest::getRole() const {
  return role_;
}

void DescribeStsGrantStatusRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string DescribeStsGrantStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeStsGrantStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeStsGrantStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeStsGrantStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

