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

#include <alibabacloud/ecs/model/CreateDiagnosticMetricSetRequest.h>

using AlibabaCloud::Ecs::Model::CreateDiagnosticMetricSetRequest;

CreateDiagnosticMetricSetRequest::CreateDiagnosticMetricSetRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDiagnosticMetricSet") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiagnosticMetricSetRequest::~CreateDiagnosticMetricSetRequest() {}

std::vector<std::string> CreateDiagnosticMetricSetRequest::getMetricIds() const {
  return metricIds_;
}

void CreateDiagnosticMetricSetRequest::setMetricIds(const std::vector<std::string> &metricIds) {
  metricIds_ = metricIds;
}

std::string CreateDiagnosticMetricSetRequest::getDescription() const {
  return description_;
}

void CreateDiagnosticMetricSetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDiagnosticMetricSetRequest::getMetricSetName() const {
  return metricSetName_;
}

void CreateDiagnosticMetricSetRequest::setMetricSetName(const std::string &metricSetName) {
  metricSetName_ = metricSetName;
  setParameter(std::string("MetricSetName"), metricSetName);
}

std::string CreateDiagnosticMetricSetRequest::getRegionId() const {
  return regionId_;
}

void CreateDiagnosticMetricSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiagnosticMetricSetRequest::getResourceType() const {
  return resourceType_;
}

void CreateDiagnosticMetricSetRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

