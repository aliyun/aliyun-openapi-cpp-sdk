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

#include <alibabacloud/paifeaturestore/model/CheckModelFeatureFGFeatureRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::CheckModelFeatureFGFeatureRequest;

CheckModelFeatureFGFeatureRequest::CheckModelFeatureFGFeatureRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/modelfeatures/[ModelFeatureId]/action/checkfgfeature"};
  setMethod(HttpRequest::Method::Post);
}

CheckModelFeatureFGFeatureRequest::~CheckModelFeatureFGFeatureRequest() {}

std::string CheckModelFeatureFGFeatureRequest::getModelFeatureId() const {
  return modelFeatureId_;
}

void CheckModelFeatureFGFeatureRequest::setModelFeatureId(const std::string &modelFeatureId) {
  modelFeatureId_ = modelFeatureId;
  setParameter(std::string("ModelFeatureId"), modelFeatureId);
}

std::string CheckModelFeatureFGFeatureRequest::getInstanceId() const {
  return instanceId_;
}

void CheckModelFeatureFGFeatureRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

