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

#include <alibabacloud/eas/model/DescribeGroupRequest.h>

using AlibabaCloud::Eas::Model::DescribeGroupRequest;

DescribeGroupRequest::DescribeGroupRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/groups/[ClusterId]/[GroupName]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeGroupRequest::~DescribeGroupRequest() {}

std::string DescribeGroupRequest::getClusterId() const {
  return clusterId_;
}

void DescribeGroupRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeGroupRequest::getGroupName() const {
  return groupName_;
}

void DescribeGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

