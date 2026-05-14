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

#include <alibabacloud/paifeaturestore/model/UpdateFeatureViewRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::UpdateFeatureViewRequest;

UpdateFeatureViewRequest::UpdateFeatureViewRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/featureviews/[FeatureViewId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateFeatureViewRequest::~UpdateFeatureViewRequest() {}

std::string UpdateFeatureViewRequest::getBody() const {
  return body_;
}

void UpdateFeatureViewRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string UpdateFeatureViewRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateFeatureViewRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateFeatureViewRequest::getFeatureViewId() const {
  return featureViewId_;
}

void UpdateFeatureViewRequest::setFeatureViewId(const std::string &featureViewId) {
  featureViewId_ = featureViewId;
  setParameter(std::string("FeatureViewId"), featureViewId);
}

