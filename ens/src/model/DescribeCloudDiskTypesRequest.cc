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

#include <alibabacloud/ens/model/DescribeCloudDiskTypesRequest.h>

using AlibabaCloud::Ens::Model::DescribeCloudDiskTypesRequest;

DescribeCloudDiskTypesRequest::DescribeCloudDiskTypesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeCloudDiskTypes") {
  setMethod(HttpRequest::Method::Get);
}

DescribeCloudDiskTypesRequest::~DescribeCloudDiskTypesRequest() {}

std::string DescribeCloudDiskTypesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeCloudDiskTypesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::vector<DescribeCloudDiskTypesRequest::std::string> DescribeCloudDiskTypesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeCloudDiskTypesRequest::setEnsRegionIds(const std::vector<DescribeCloudDiskTypesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

