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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureEntityRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::GetProjectFeatureEntityRequest;

GetProjectFeatureEntityRequest::GetProjectFeatureEntityRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]/featureentities/[FeatureEntityName]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectFeatureEntityRequest::~GetProjectFeatureEntityRequest() {}

std::string GetProjectFeatureEntityRequest::getInstanceId() const {
  return instanceId_;
}

void GetProjectFeatureEntityRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetProjectFeatureEntityRequest::getFeatureEntityName() const {
  return featureEntityName_;
}

void GetProjectFeatureEntityRequest::setFeatureEntityName(const std::string &featureEntityName) {
  featureEntityName_ = featureEntityName;
  setParameter(std::string("FeatureEntityName"), featureEntityName);
}

std::string GetProjectFeatureEntityRequest::getProjectId() const {
  return projectId_;
}

void GetProjectFeatureEntityRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

