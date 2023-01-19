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

#include <alibabacloud/sas/model/AddUninstallClientsByUuidsRequest.h>

using AlibabaCloud::Sas::Model::AddUninstallClientsByUuidsRequest;

AddUninstallClientsByUuidsRequest::AddUninstallClientsByUuidsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddUninstallClientsByUuids") {
  setMethod(HttpRequest::Method::Post);
}

AddUninstallClientsByUuidsRequest::~AddUninstallClientsByUuidsRequest() {}

std::string AddUninstallClientsByUuidsRequest::getCallMethod() const {
  return callMethod_;
}

void AddUninstallClientsByUuidsRequest::setCallMethod(const std::string &callMethod) {
  callMethod_ = callMethod;
  setParameter(std::string("CallMethod"), callMethod);
}

std::string AddUninstallClientsByUuidsRequest::getFeedback() const {
  return feedback_;
}

void AddUninstallClientsByUuidsRequest::setFeedback(const std::string &feedback) {
  feedback_ = feedback;
  setParameter(std::string("Feedback"), feedback);
}

std::string AddUninstallClientsByUuidsRequest::getSourceIp() const {
  return sourceIp_;
}

void AddUninstallClientsByUuidsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AddUninstallClientsByUuidsRequest::getRegion() const {
  return region_;
}

void AddUninstallClientsByUuidsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string AddUninstallClientsByUuidsRequest::getUuids() const {
  return uuids_;
}

void AddUninstallClientsByUuidsRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

