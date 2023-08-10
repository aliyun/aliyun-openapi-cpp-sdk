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

#include <alibabacloud/adcp/model/DescribeHubClustersRequest.h>

using AlibabaCloud::Adcp::Model::DescribeHubClustersRequest;

DescribeHubClustersRequest::DescribeHubClustersRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "DescribeHubClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHubClustersRequest::~DescribeHubClustersRequest() {}

std::string DescribeHubClustersRequest::getProfile() const {
  return profile_;
}

void DescribeHubClustersRequest::setProfile(const std::string &profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), profile);
}

