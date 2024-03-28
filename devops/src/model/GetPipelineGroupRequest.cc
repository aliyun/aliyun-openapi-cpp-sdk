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

#include <alibabacloud/devops/model/GetPipelineGroupRequest.h>

using AlibabaCloud::Devops::Model::GetPipelineGroupRequest;

GetPipelineGroupRequest::GetPipelineGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelineGroups/[groupId]"};
  setMethod(HttpRequest::Method::Get);
}

GetPipelineGroupRequest::~GetPipelineGroupRequest() {}

long GetPipelineGroupRequest::getGroupId() const {
  return groupId_;
}

void GetPipelineGroupRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

std::string GetPipelineGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void GetPipelineGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

