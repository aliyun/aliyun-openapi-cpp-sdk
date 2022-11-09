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

#include <alibabacloud/viapi-regen/model/CreateTrainTaskRequest.h>

using AlibabaCloud::Viapi_regen::Model::CreateTrainTaskRequest;

CreateTrainTaskRequest::CreateTrainTaskRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "CreateTrainTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateTrainTaskRequest::~CreateTrainTaskRequest() {}

std::string CreateTrainTaskRequest::getDescription() const {
  return description_;
}

void CreateTrainTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateTrainTaskRequest::getTrainMode() const {
  return trainMode_;
}

void CreateTrainTaskRequest::setTrainMode(const std::string &trainMode) {
  trainMode_ = trainMode;
  setBodyParameter(std::string("TrainMode"), trainMode);
}

std::string CreateTrainTaskRequest::getDatasetIds() const {
  return datasetIds_;
}

void CreateTrainTaskRequest::setDatasetIds(const std::string &datasetIds) {
  datasetIds_ = datasetIds;
  setBodyParameter(std::string("DatasetIds"), datasetIds);
}

long CreateTrainTaskRequest::getPreTrainTaskId() const {
  return preTrainTaskId_;
}

void CreateTrainTaskRequest::setPreTrainTaskId(long preTrainTaskId) {
  preTrainTaskId_ = preTrainTaskId;
  setBodyParameter(std::string("PreTrainTaskId"), std::to_string(preTrainTaskId));
}

std::string CreateTrainTaskRequest::getAdvancedParameters() const {
  return advancedParameters_;
}

void CreateTrainTaskRequest::setAdvancedParameters(const std::string &advancedParameters) {
  advancedParameters_ = advancedParameters;
  setBodyParameter(std::string("AdvancedParameters"), advancedParameters);
}

long CreateTrainTaskRequest::getLabelId() const {
  return labelId_;
}

void CreateTrainTaskRequest::setLabelId(long labelId) {
  labelId_ = labelId;
  setBodyParameter(std::string("LabelId"), std::to_string(labelId));
}

std::string CreateTrainTaskRequest::getName() const {
  return name_;
}

void CreateTrainTaskRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateTrainTaskRequest::getDatasetId() const {
  return datasetId_;
}

void CreateTrainTaskRequest::setDatasetId(long datasetId) {
  datasetId_ = datasetId;
  setBodyParameter(std::string("DatasetId"), std::to_string(datasetId));
}

std::string CreateTrainTaskRequest::getLabelIds() const {
  return labelIds_;
}

void CreateTrainTaskRequest::setLabelIds(const std::string &labelIds) {
  labelIds_ = labelIds;
  setBodyParameter(std::string("LabelIds"), labelIds);
}

long CreateTrainTaskRequest::getWorkspaceId() const {
  return workspaceId_;
}

void CreateTrainTaskRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

