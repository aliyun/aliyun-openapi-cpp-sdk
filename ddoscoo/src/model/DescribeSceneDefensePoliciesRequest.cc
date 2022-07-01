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

#include <alibabacloud/ddoscoo/model/DescribeSceneDefensePoliciesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSceneDefensePoliciesRequest;

DescribeSceneDefensePoliciesRequest::DescribeSceneDefensePoliciesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSceneDefensePolicies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSceneDefensePoliciesRequest::~DescribeSceneDefensePoliciesRequest() {}

std::string DescribeSceneDefensePoliciesRequest::get_Template() const {
  return _template_;
}

void DescribeSceneDefensePoliciesRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string DescribeSceneDefensePoliciesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSceneDefensePoliciesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSceneDefensePoliciesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSceneDefensePoliciesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSceneDefensePoliciesRequest::getStatus() const {
  return status_;
}

void DescribeSceneDefensePoliciesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

