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

#include <alibabacloud/arms/model/RestartEnvironmentFeatureRequest.h>

using AlibabaCloud::ARMS::Model::RestartEnvironmentFeatureRequest;

RestartEnvironmentFeatureRequest::RestartEnvironmentFeatureRequest()
    : RpcServiceRequest("arms", "2019-08-08", "RestartEnvironmentFeature") {
  setMethod(HttpRequest::Method::Post);
}

RestartEnvironmentFeatureRequest::~RestartEnvironmentFeatureRequest() {}

std::string RestartEnvironmentFeatureRequest::getFeatureName() const {
  return featureName_;
}

void RestartEnvironmentFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string RestartEnvironmentFeatureRequest::getEnvironmentId() const {
  return environmentId_;
}

void RestartEnvironmentFeatureRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string RestartEnvironmentFeatureRequest::getRegionId() const {
  return regionId_;
}

void RestartEnvironmentFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

