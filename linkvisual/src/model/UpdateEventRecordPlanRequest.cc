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

#include <alibabacloud/linkvisual/model/UpdateEventRecordPlanRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateEventRecordPlanRequest;

UpdateEventRecordPlanRequest::UpdateEventRecordPlanRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateEventRecordPlan") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEventRecordPlanRequest::~UpdateEventRecordPlanRequest() {}

std::string UpdateEventRecordPlanRequest::getEventTypes() const {
  return eventTypes_;
}

void UpdateEventRecordPlanRequest::setEventTypes(const std::string &eventTypes) {
  eventTypes_ = eventTypes;
  setParameter(std::string("EventTypes"), eventTypes);
}

int UpdateEventRecordPlanRequest::getPreRecordDuration() const {
  return preRecordDuration_;
}

void UpdateEventRecordPlanRequest::setPreRecordDuration(int preRecordDuration) {
  preRecordDuration_ = preRecordDuration;
  setParameter(std::string("PreRecordDuration"), std::to_string(preRecordDuration));
}

int UpdateEventRecordPlanRequest::getRecordDuration() const {
  return recordDuration_;
}

void UpdateEventRecordPlanRequest::setRecordDuration(int recordDuration) {
  recordDuration_ = recordDuration;
  setParameter(std::string("RecordDuration"), std::to_string(recordDuration));
}

std::string UpdateEventRecordPlanRequest::getTemplateId() const {
  return templateId_;
}

void UpdateEventRecordPlanRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateEventRecordPlanRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateEventRecordPlanRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateEventRecordPlanRequest::getName() const {
  return name_;
}

void UpdateEventRecordPlanRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateEventRecordPlanRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateEventRecordPlanRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UpdateEventRecordPlanRequest::getPlanId() const {
  return planId_;
}

void UpdateEventRecordPlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

