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

#include <alibabacloud/dataworks-public/model/UpdateDIJobRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDIJobRequest;

UpdateDIJobRequest::UpdateDIJobRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDIJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDIJobRequest::~UpdateDIJobRequest() {}

std::string UpdateDIJobRequest::getDescription() const {
  return description_;
}

void UpdateDIJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDIJobRequest::getTransformationRules() const {
  return transformationRules_;
}

void UpdateDIJobRequest::setTransformationRules(const std::string &transformationRules) {
  transformationRules_ = transformationRules;
  setBodyParameter(std::string("TransformationRules"), transformationRules);
}

long UpdateDIJobRequest::getDIJobId() const {
  return dIJobId_;
}

void UpdateDIJobRequest::setDIJobId(long dIJobId) {
  dIJobId_ = dIJobId;
  setBodyParameter(std::string("DIJobId"), std::to_string(dIJobId));
}

std::string UpdateDIJobRequest::getResourceSettings() const {
  return resourceSettings_;
}

void UpdateDIJobRequest::setResourceSettings(const std::string &resourceSettings) {
  resourceSettings_ = resourceSettings;
  setBodyParameter(std::string("ResourceSettings"), resourceSettings);
}

std::string UpdateDIJobRequest::getTableMappings() const {
  return tableMappings_;
}

void UpdateDIJobRequest::setTableMappings(const std::string &tableMappings) {
  tableMappings_ = tableMappings;
  setBodyParameter(std::string("TableMappings"), tableMappings);
}

std::string UpdateDIJobRequest::getJobSettings() const {
  return jobSettings_;
}

void UpdateDIJobRequest::setJobSettings(const std::string &jobSettings) {
  jobSettings_ = jobSettings;
  setBodyParameter(std::string("JobSettings"), jobSettings);
}

