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

#include <alibabacloud/ddoscoo/model/ConfigL7RsPolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigL7RsPolicyRequest;

ConfigL7RsPolicyRequest::ConfigL7RsPolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigL7RsPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ConfigL7RsPolicyRequest::~ConfigL7RsPolicyRequest() {}

int ConfigL7RsPolicyRequest::getUpstreamRetry() const {
  return upstreamRetry_;
}

void ConfigL7RsPolicyRequest::setUpstreamRetry(int upstreamRetry) {
  upstreamRetry_ = upstreamRetry;
  setParameter(std::string("UpstreamRetry"), std::to_string(upstreamRetry));
}

std::string ConfigL7RsPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ConfigL7RsPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ConfigL7RsPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigL7RsPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigL7RsPolicyRequest::getDomain() const {
  return domain_;
}

void ConfigL7RsPolicyRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string ConfigL7RsPolicyRequest::getPolicy() const {
  return policy_;
}

void ConfigL7RsPolicyRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

