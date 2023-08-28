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

#include <alibabacloud/paifeaturestore/model/DeleteProjectRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteProjectRequest::~DeleteProjectRequest() {}

std::string DeleteProjectRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteProjectRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteProjectRequest::getProjectId() const {
  return projectId_;
}

void DeleteProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

