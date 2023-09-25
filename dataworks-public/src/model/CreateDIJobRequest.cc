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

#include <alibabacloud/dataworks-public/model/CreateDIJobRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDIJobRequest;

CreateDIJobRequest::CreateDIJobRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDIJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateDIJobRequest::~CreateDIJobRequest() {}

std::string CreateDIJobRequest::getSourceDataSourceType() const {
  return sourceDataSourceType_;
}

void CreateDIJobRequest::setSourceDataSourceType(const std::string &sourceDataSourceType) {
  sourceDataSourceType_ = sourceDataSourceType;
  setBodyParameter(std::string("SourceDataSourceType"), sourceDataSourceType);
}

std::string CreateDIJobRequest::getDescription() const {
  return description_;
}

void CreateDIJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDIJobRequest::getTransformationRules() const {
  return transformationRules_;
}

void CreateDIJobRequest::setTransformationRules(const std::string &transformationRules) {
  transformationRules_ = transformationRules;
  setBodyParameter(std::string("TransformationRules"), transformationRules);
}

std::string CreateDIJobRequest::getDestinationDataSourceType() const {
  return destinationDataSourceType_;
}

void CreateDIJobRequest::setDestinationDataSourceType(const std::string &destinationDataSourceType) {
  destinationDataSourceType_ = destinationDataSourceType;
  setBodyParameter(std::string("DestinationDataSourceType"), destinationDataSourceType);
}

std::string CreateDIJobRequest::getDestinationDataSourceSettings() const {
  return destinationDataSourceSettings_;
}

void CreateDIJobRequest::setDestinationDataSourceSettings(const std::string &destinationDataSourceSettings) {
  destinationDataSourceSettings_ = destinationDataSourceSettings;
  setBodyParameter(std::string("DestinationDataSourceSettings"), destinationDataSourceSettings);
}

std::string CreateDIJobRequest::getSourceDataSourceSettings() const {
  return sourceDataSourceSettings_;
}

void CreateDIJobRequest::setSourceDataSourceSettings(const std::string &sourceDataSourceSettings) {
  sourceDataSourceSettings_ = sourceDataSourceSettings;
  setBodyParameter(std::string("SourceDataSourceSettings"), sourceDataSourceSettings);
}

std::string CreateDIJobRequest::getResourceSettings() const {
  return resourceSettings_;
}

void CreateDIJobRequest::setResourceSettings(const std::string &resourceSettings) {
  resourceSettings_ = resourceSettings;
  setBodyParameter(std::string("ResourceSettings"), resourceSettings);
}

std::string CreateDIJobRequest::getMigrationType() const {
  return migrationType_;
}

void CreateDIJobRequest::setMigrationType(const std::string &migrationType) {
  migrationType_ = migrationType;
  setBodyParameter(std::string("MigrationType"), migrationType);
}

std::string CreateDIJobRequest::getSystemDebug() const {
  return systemDebug_;
}

void CreateDIJobRequest::setSystemDebug(const std::string &systemDebug) {
  systemDebug_ = systemDebug;
  setParameter(std::string("SystemDebug"), systemDebug);
}

long CreateDIJobRequest::getProjectId() const {
  return projectId_;
}

void CreateDIJobRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateDIJobRequest::getJobName() const {
  return jobName_;
}

void CreateDIJobRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setBodyParameter(std::string("JobName"), jobName);
}

std::string CreateDIJobRequest::getTableMappings() const {
  return tableMappings_;
}

void CreateDIJobRequest::setTableMappings(const std::string &tableMappings) {
  tableMappings_ = tableMappings;
  setBodyParameter(std::string("TableMappings"), tableMappings);
}

std::string CreateDIJobRequest::getJobSettings() const {
  return jobSettings_;
}

void CreateDIJobRequest::setJobSettings(const std::string &jobSettings) {
  jobSettings_ = jobSettings;
  setBodyParameter(std::string("JobSettings"), jobSettings);
}

