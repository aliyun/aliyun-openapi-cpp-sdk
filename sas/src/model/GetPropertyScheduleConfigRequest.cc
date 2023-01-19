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

#include <alibabacloud/sas/model/GetPropertyScheduleConfigRequest.h>

using AlibabaCloud::Sas::Model::GetPropertyScheduleConfigRequest;

GetPropertyScheduleConfigRequest::GetPropertyScheduleConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetPropertyScheduleConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetPropertyScheduleConfigRequest::~GetPropertyScheduleConfigRequest() {}

std::string GetPropertyScheduleConfigRequest::getType() const {
  return type_;
}

void GetPropertyScheduleConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string GetPropertyScheduleConfigRequest::getUuid() const {
  return uuid_;
}

void GetPropertyScheduleConfigRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string GetPropertyScheduleConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void GetPropertyScheduleConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetPropertyScheduleConfigRequest::getLang() const {
  return lang_;
}

void GetPropertyScheduleConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

