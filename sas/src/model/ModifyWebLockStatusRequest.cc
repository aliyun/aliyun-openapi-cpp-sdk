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

#include <alibabacloud/sas/model/ModifyWebLockStatusRequest.h>

using AlibabaCloud::Sas::Model::ModifyWebLockStatusRequest;

ModifyWebLockStatusRequest::ModifyWebLockStatusRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyWebLockStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebLockStatusRequest::~ModifyWebLockStatusRequest() {}

std::string ModifyWebLockStatusRequest::getUuid() const {
  return uuid_;
}

void ModifyWebLockStatusRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyWebLockStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebLockStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebLockStatusRequest::getLang() const {
  return lang_;
}

void ModifyWebLockStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyWebLockStatusRequest::getStatus() const {
  return status_;
}

void ModifyWebLockStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

