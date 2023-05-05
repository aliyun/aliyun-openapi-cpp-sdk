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

#include <alibabacloud/ecd/model/DescribeAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecd::Model::DescribeAutoSnapshotPolicyRequest;

DescribeAutoSnapshotPolicyRequest::DescribeAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoSnapshotPolicyRequest::~DescribeAutoSnapshotPolicyRequest() {}

std::string DescribeAutoSnapshotPolicyRequest::getPolicyId() const {
  return policyId_;
}

void DescribeAutoSnapshotPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string DescribeAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAutoSnapshotPolicyRequest::getNextToken() const {
  return nextToken_;
}

void DescribeAutoSnapshotPolicyRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeAutoSnapshotPolicyRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeAutoSnapshotPolicyRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeAutoSnapshotPolicyRequest::getPolicyName() const {
  return policyName_;
}

void DescribeAutoSnapshotPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

