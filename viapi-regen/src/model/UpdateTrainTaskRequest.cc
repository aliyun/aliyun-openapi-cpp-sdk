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

#include <alibabacloud/viapi-regen/model/UpdateTrainTaskRequest.h>

using AlibabaCloud::Viapi_regen::Model::UpdateTrainTaskRequest;

UpdateTrainTaskRequest::UpdateTrainTaskRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "UpdateTrainTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTrainTaskRequest::~UpdateTrainTaskRequest() {}

std::string UpdateTrainTaskRequest::getDescription() const {
  return description_;
}

void UpdateTrainTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateTrainTaskRequest::getTrainMode() const {
  return trainMode_;
}

void UpdateTrainTaskRequest::setTrainMode(const std::string &trainMode) {
  trainMode_ = trainMode;
  setBodyParameter(std::string("TrainMode"), trainMode);
}

long UpdateTrainTaskRequest::getId() const {
  return id_;
}

void UpdateTrainTaskRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateTrainTaskRequest::getDatasetIds() const {
  return datasetIds_;
}

void UpdateTrainTaskRequest::setDatasetIds(const std::string &datasetIds) {
  datasetIds_ = datasetIds;
  setBodyParameter(std::string("DatasetIds"), datasetIds);
}

long UpdateTrainTaskRequest::getPreTrainTaskId() const {
  return preTrainTaskId_;
}

void UpdateTrainTaskRequest::setPreTrainTaskId(long preTrainTaskId) {
  preTrainTaskId_ = preTrainTaskId;
  setBodyParameter(std::string("PreTrainTaskId"), std::to_string(preTrainTaskId));
}

bool UpdateTrainTaskRequest::getPreTrainTaskFlag() const {
  return preTrainTaskFlag_;
}

void UpdateTrainTaskRequest::setPreTrainTaskFlag(bool preTrainTaskFlag) {
  preTrainTaskFlag_ = preTrainTaskFlag;
  setBodyParameter(std::string("PreTrainTaskFlag"), preTrainTaskFlag ? "true" : "false");
}

std::string UpdateTrainTaskRequest::getAdvancedParameters() const {
  return advancedParameters_;
}

void UpdateTrainTaskRequest::setAdvancedParameters(const std::string &advancedParameters) {
  advancedParameters_ = advancedParameters;
  setBodyParameter(std::string("AdvancedParameters"), advancedParameters);
}

long UpdateTrainTaskRequest::getLabelId() const {
  return labelId_;
}

void UpdateTrainTaskRequest::setLabelId(long labelId) {
  labelId_ = labelId;
  setBodyParameter(std::string("LabelId"), std::to_string(labelId));
}

std::string UpdateTrainTaskRequest::getName() const {
  return name_;
}

void UpdateTrainTaskRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long UpdateTrainTaskRequest::getDatasetId() const {
  return datasetId_;
}

void UpdateTrainTaskRequest::setDatasetId(long datasetId) {
  datasetId_ = datasetId;
  setBodyParameter(std::string("DatasetId"), std::to_string(datasetId));
}

std::string UpdateTrainTaskRequest::getLabelIds() const {
  return labelIds_;
}

void UpdateTrainTaskRequest::setLabelIds(const std::string &labelIds) {
  labelIds_ = labelIds;
  setBodyParameter(std::string("LabelIds"), labelIds);
}

