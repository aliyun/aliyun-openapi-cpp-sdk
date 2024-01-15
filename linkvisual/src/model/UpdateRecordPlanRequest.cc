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

#include <alibabacloud/linkvisual/model/UpdateRecordPlanRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateRecordPlanRequest;

UpdateRecordPlanRequest::UpdateRecordPlanRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateRecordPlan") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRecordPlanRequest::~UpdateRecordPlanRequest() {}

std::string UpdateRecordPlanRequest::getTemplateId() const {
  return templateId_;
}

void UpdateRecordPlanRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateRecordPlanRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateRecordPlanRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateRecordPlanRequest::getName() const {
  return name_;
}

void UpdateRecordPlanRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateRecordPlanRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateRecordPlanRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UpdateRecordPlanRequest::getPlanId() const {
  return planId_;
}

void UpdateRecordPlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

