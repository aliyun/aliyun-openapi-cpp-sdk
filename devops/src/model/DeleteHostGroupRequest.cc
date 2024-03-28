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

#include <alibabacloud/devops/model/DeleteHostGroupRequest.h>

using AlibabaCloud::Devops::Model::DeleteHostGroupRequest;

DeleteHostGroupRequest::DeleteHostGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/hostGroups/[id]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteHostGroupRequest::~DeleteHostGroupRequest() {}

std::string DeleteHostGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteHostGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long DeleteHostGroupRequest::getId() const {
  return id_;
}

void DeleteHostGroupRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("id"), std::to_string(id));
}

