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

#include <alibabacloud/adcp/model/DescribePolicyInstancesRequest.h>

using AlibabaCloud::Adcp::Model::DescribePolicyInstancesRequest;

DescribePolicyInstancesRequest::DescribePolicyInstancesRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DescribePolicyInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribePolicyInstancesRequest::~DescribePolicyInstancesRequest() {}

std::string DescribePolicyInstancesRequest::getClusterId() const {
  return clusterId_;
}

void DescribePolicyInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribePolicyInstancesRequest::getPolicyName() const {
  return policyName_;
}

void DescribePolicyInstancesRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

