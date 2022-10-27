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

#include <alibabacloud/ehpc/model/DescribeGWSClusterPolicyRequest.h>

using AlibabaCloud::EHPC::Model::DescribeGWSClusterPolicyRequest;

DescribeGWSClusterPolicyRequest::DescribeGWSClusterPolicyRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribeGWSClusterPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGWSClusterPolicyRequest::~DescribeGWSClusterPolicyRequest() {}

std::string DescribeGWSClusterPolicyRequest::getClusterId() const {
  return clusterId_;
}

void DescribeGWSClusterPolicyRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeGWSClusterPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGWSClusterPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DescribeGWSClusterPolicyRequest::getAsyncMode() const {
  return asyncMode_;
}

void DescribeGWSClusterPolicyRequest::setAsyncMode(bool asyncMode) {
  asyncMode_ = asyncMode;
  setParameter(std::string("AsyncMode"), asyncMode ? "true" : "false");
}

std::string DescribeGWSClusterPolicyRequest::getTaskId() const {
  return taskId_;
}

void DescribeGWSClusterPolicyRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

