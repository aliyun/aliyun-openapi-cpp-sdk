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

#include <alibabacloud/ecs/model/ModifyDiagnosticMetricSetRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiagnosticMetricSetRequest;

ModifyDiagnosticMetricSetRequest::ModifyDiagnosticMetricSetRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDiagnosticMetricSet") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDiagnosticMetricSetRequest::~ModifyDiagnosticMetricSetRequest() {}

std::vector<std::string> ModifyDiagnosticMetricSetRequest::getMetricIds() const {
  return metricIds_;
}

void ModifyDiagnosticMetricSetRequest::setMetricIds(const std::vector<std::string> &metricIds) {
  metricIds_ = metricIds;
}

std::string ModifyDiagnosticMetricSetRequest::getMetricSetId() const {
  return metricSetId_;
}

void ModifyDiagnosticMetricSetRequest::setMetricSetId(const std::string &metricSetId) {
  metricSetId_ = metricSetId;
  setParameter(std::string("MetricSetId"), metricSetId);
}

std::string ModifyDiagnosticMetricSetRequest::getDescription() const {
  return description_;
}

void ModifyDiagnosticMetricSetRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyDiagnosticMetricSetRequest::getMetricSetName() const {
  return metricSetName_;
}

void ModifyDiagnosticMetricSetRequest::setMetricSetName(const std::string &metricSetName) {
  metricSetName_ = metricSetName;
  setParameter(std::string("MetricSetName"), metricSetName);
}

std::string ModifyDiagnosticMetricSetRequest::getRegionId() const {
  return regionId_;
}

void ModifyDiagnosticMetricSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDiagnosticMetricSetRequest::getResourceType() const {
  return resourceType_;
}

void ModifyDiagnosticMetricSetRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

