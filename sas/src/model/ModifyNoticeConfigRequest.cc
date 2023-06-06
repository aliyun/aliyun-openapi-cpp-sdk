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

#include <alibabacloud/sas/model/ModifyNoticeConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyNoticeConfigRequest;

ModifyNoticeConfigRequest::ModifyNoticeConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyNoticeConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNoticeConfigRequest::~ModifyNoticeConfigRequest() {}

std::string ModifyNoticeConfigRequest::getProject() const {
  return project_;
}

void ModifyNoticeConfigRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string ModifyNoticeConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyNoticeConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyNoticeConfigRequest::getTimeLimit() const {
  return timeLimit_;
}

void ModifyNoticeConfigRequest::setTimeLimit(int timeLimit) {
  timeLimit_ = timeLimit;
  setParameter(std::string("TimeLimit"), std::to_string(timeLimit));
}

int ModifyNoticeConfigRequest::getRoute() const {
  return route_;
}

void ModifyNoticeConfigRequest::setRoute(int route) {
  route_ = route;
  setParameter(std::string("Route"), std::to_string(route));
}

std::string ModifyNoticeConfigRequest::getFocusLevel() const {
  return focusLevel_;
}

void ModifyNoticeConfigRequest::setFocusLevel(const std::string &focusLevel) {
  focusLevel_ = focusLevel;
  setParameter(std::string("FocusLevel"), focusLevel);
}

int ModifyNoticeConfigRequest::getCustomThreshold() const {
  return customThreshold_;
}

void ModifyNoticeConfigRequest::setCustomThreshold(int customThreshold) {
  customThreshold_ = customThreshold;
  setParameter(std::string("CustomThreshold"), std::to_string(customThreshold));
}

