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

#include <alibabacloud/ddoscoo/model/DescribeSceneDefenseObjectsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSceneDefenseObjectsRequest;

DescribeSceneDefenseObjectsRequest::DescribeSceneDefenseObjectsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSceneDefenseObjects") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSceneDefenseObjectsRequest::~DescribeSceneDefenseObjectsRequest() {}

std::string DescribeSceneDefenseObjectsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSceneDefenseObjectsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSceneDefenseObjectsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSceneDefenseObjectsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSceneDefenseObjectsRequest::getPolicyId() const {
  return policyId_;
}

void DescribeSceneDefenseObjectsRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

