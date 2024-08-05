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

#include <alibabacloud/arms/model/DeleteEnvironmentFeatureRequest.h>

using AlibabaCloud::ARMS::Model::DeleteEnvironmentFeatureRequest;

DeleteEnvironmentFeatureRequest::DeleteEnvironmentFeatureRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteEnvironmentFeature") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEnvironmentFeatureRequest::~DeleteEnvironmentFeatureRequest() {}

std::string DeleteEnvironmentFeatureRequest::getFeatureName() const {
  return featureName_;
}

void DeleteEnvironmentFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string DeleteEnvironmentFeatureRequest::getEnvironmentId() const {
  return environmentId_;
}

void DeleteEnvironmentFeatureRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DeleteEnvironmentFeatureRequest::getRegionId() const {
  return regionId_;
}

void DeleteEnvironmentFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

