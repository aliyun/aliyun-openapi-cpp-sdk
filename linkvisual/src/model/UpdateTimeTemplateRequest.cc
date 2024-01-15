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

#include <alibabacloud/linkvisual/model/UpdateTimeTemplateRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateTimeTemplateRequest;

UpdateTimeTemplateRequest::UpdateTimeTemplateRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateTimeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTimeTemplateRequest::~UpdateTimeTemplateRequest() {}

std::vector<UpdateTimeTemplateRequest::TimeSections> UpdateTimeTemplateRequest::getTimeSections() const {
  return timeSections_;
}

void UpdateTimeTemplateRequest::setTimeSections(const std::vector<UpdateTimeTemplateRequest::TimeSections> &timeSections) {
  timeSections_ = timeSections;
  for(int dep1 = 0; dep1 != timeSections.size(); dep1++) {
  auto timeSectionsObj = timeSections.at(dep1);
  std::string timeSectionsObjStr = std::string("TimeSections") + "." + std::to_string(dep1 + 1);
    setParameter(timeSectionsObjStr + ".DayOfWeek", std::to_string(timeSectionsObj.dayOfWeek));
    setParameter(timeSectionsObjStr + ".Begin", std::to_string(timeSectionsObj.begin));
    setParameter(timeSectionsObjStr + ".End", std::to_string(timeSectionsObj.end));
  }
}

std::string UpdateTimeTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateTimeTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

int UpdateTimeTemplateRequest::getAllDay() const {
  return allDay_;
}

void UpdateTimeTemplateRequest::setAllDay(int allDay) {
  allDay_ = allDay;
  setParameter(std::string("AllDay"), std::to_string(allDay));
}

std::string UpdateTimeTemplateRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateTimeTemplateRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateTimeTemplateRequest::getName() const {
  return name_;
}

void UpdateTimeTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateTimeTemplateRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateTimeTemplateRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

