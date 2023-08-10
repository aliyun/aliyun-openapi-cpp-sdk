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

#include <alibabacloud/adcp/model/DescribeHubClusterKubeconfigRequest.h>

using AlibabaCloud::Adcp::Model::DescribeHubClusterKubeconfigRequest;

DescribeHubClusterKubeconfigRequest::DescribeHubClusterKubeconfigRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DescribeHubClusterKubeconfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHubClusterKubeconfigRequest::~DescribeHubClusterKubeconfigRequest() {}

std::string DescribeHubClusterKubeconfigRequest::getClusterId() const {
  return clusterId_;
}

void DescribeHubClusterKubeconfigRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool DescribeHubClusterKubeconfigRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void DescribeHubClusterKubeconfigRequest::setPrivateIpAddress(bool privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress ? "true" : "false");
}

