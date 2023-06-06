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

#include <alibabacloud/sas/model/ModifySecurityCheckScheduleConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifySecurityCheckScheduleConfigRequest;

ModifySecurityCheckScheduleConfigRequest::ModifySecurityCheckScheduleConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifySecurityCheckScheduleConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityCheckScheduleConfigRequest::~ModifySecurityCheckScheduleConfigRequest() {}

long ModifySecurityCheckScheduleConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityCheckScheduleConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifySecurityCheckScheduleConfigRequest::getStartTime() const {
  return startTime_;
}

void ModifySecurityCheckScheduleConfigRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ModifySecurityCheckScheduleConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifySecurityCheckScheduleConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifySecurityCheckScheduleConfigRequest::getDaysOfWeek() const {
  return daysOfWeek_;
}

void ModifySecurityCheckScheduleConfigRequest::setDaysOfWeek(const std::string &daysOfWeek) {
  daysOfWeek_ = daysOfWeek;
  setParameter(std::string("DaysOfWeek"), daysOfWeek);
}

std::string ModifySecurityCheckScheduleConfigRequest::getLang() const {
  return lang_;
}

void ModifySecurityCheckScheduleConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int ModifySecurityCheckScheduleConfigRequest::getEndTime() const {
  return endTime_;
}

void ModifySecurityCheckScheduleConfigRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

