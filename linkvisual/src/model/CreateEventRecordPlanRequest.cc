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

#include <alibabacloud/linkvisual/model/CreateEventRecordPlanRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateEventRecordPlanRequest;

CreateEventRecordPlanRequest::CreateEventRecordPlanRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateEventRecordPlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventRecordPlanRequest::~CreateEventRecordPlanRequest() {}

std::string CreateEventRecordPlanRequest::getEventTypes() const {
  return eventTypes_;
}

void CreateEventRecordPlanRequest::setEventTypes(const std::string &eventTypes) {
  eventTypes_ = eventTypes;
  setParameter(std::string("EventTypes"), eventTypes);
}

int CreateEventRecordPlanRequest::getPreRecordDuration() const {
  return preRecordDuration_;
}

void CreateEventRecordPlanRequest::setPreRecordDuration(int preRecordDuration) {
  preRecordDuration_ = preRecordDuration;
  setParameter(std::string("PreRecordDuration"), std::to_string(preRecordDuration));
}

int CreateEventRecordPlanRequest::getRecordDuration() const {
  return recordDuration_;
}

void CreateEventRecordPlanRequest::setRecordDuration(int recordDuration) {
  recordDuration_ = recordDuration;
  setParameter(std::string("RecordDuration"), std::to_string(recordDuration));
}

std::string CreateEventRecordPlanRequest::getTemplateId() const {
  return templateId_;
}

void CreateEventRecordPlanRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string CreateEventRecordPlanRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateEventRecordPlanRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateEventRecordPlanRequest::getName() const {
  return name_;
}

void CreateEventRecordPlanRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateEventRecordPlanRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateEventRecordPlanRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

