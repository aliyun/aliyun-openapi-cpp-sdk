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

#include <alibabacloud/ddoscoo/model/DescribeL7RsPolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeL7RsPolicyRequest;

DescribeL7RsPolicyRequest::DescribeL7RsPolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeL7RsPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeL7RsPolicyRequest::~DescribeL7RsPolicyRequest() {}

std::string DescribeL7RsPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeL7RsPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<std::string> DescribeL7RsPolicyRequest::getRealServers() const {
  return realServers_;
}

void DescribeL7RsPolicyRequest::setRealServers(const std::vector<std::string> &realServers) {
  realServers_ = realServers;
}

std::string DescribeL7RsPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeL7RsPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeL7RsPolicyRequest::getDomain() const {
  return domain_;
}

void DescribeL7RsPolicyRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

