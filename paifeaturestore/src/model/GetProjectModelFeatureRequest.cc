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

#include <alibabacloud/paifeaturestore/model/GetProjectModelFeatureRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::GetProjectModelFeatureRequest;

GetProjectModelFeatureRequest::GetProjectModelFeatureRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]/modelfeatures/[ModelFeatureName]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectModelFeatureRequest::~GetProjectModelFeatureRequest() {}

std::string GetProjectModelFeatureRequest::getModelFeatureName() const {
  return modelFeatureName_;
}

void GetProjectModelFeatureRequest::setModelFeatureName(const std::string &modelFeatureName) {
  modelFeatureName_ = modelFeatureName;
  setParameter(std::string("ModelFeatureName"), modelFeatureName);
}

std::string GetProjectModelFeatureRequest::getInstanceId() const {
  return instanceId_;
}

void GetProjectModelFeatureRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetProjectModelFeatureRequest::getProjectId() const {
  return projectId_;
}

void GetProjectModelFeatureRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

