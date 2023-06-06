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

#include <alibabacloud/sas/model/UpdateHoneypotRequest.h>

using AlibabaCloud::Sas::Model::UpdateHoneypotRequest;

UpdateHoneypotRequest::UpdateHoneypotRequest()
    : RpcServiceRequest("sas", "2018-12-03", "UpdateHoneypot") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHoneypotRequest::~UpdateHoneypotRequest() {}

std::string UpdateHoneypotRequest::getHoneypotName() const {
  return honeypotName_;
}

void UpdateHoneypotRequest::setHoneypotName(const std::string &honeypotName) {
  honeypotName_ = honeypotName;
  setParameter(std::string("HoneypotName"), honeypotName);
}

std::string UpdateHoneypotRequest::getLang() const {
  return lang_;
}

void UpdateHoneypotRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string UpdateHoneypotRequest::getHoneypotId() const {
  return honeypotId_;
}

void UpdateHoneypotRequest::setHoneypotId(const std::string &honeypotId) {
  honeypotId_ = honeypotId;
  setParameter(std::string("HoneypotId"), honeypotId);
}

std::string UpdateHoneypotRequest::getMeta() const {
  return meta_;
}

void UpdateHoneypotRequest::setMeta(const std::string &meta) {
  meta_ = meta;
  setParameter(std::string("Meta"), meta);
}

