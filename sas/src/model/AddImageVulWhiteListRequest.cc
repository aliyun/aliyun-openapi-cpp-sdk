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

#include <alibabacloud/sas/model/AddImageVulWhiteListRequest.h>

using AlibabaCloud::Sas::Model::AddImageVulWhiteListRequest;

AddImageVulWhiteListRequest::AddImageVulWhiteListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddImageVulWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

AddImageVulWhiteListRequest::~AddImageVulWhiteListRequest() {}

std::string AddImageVulWhiteListRequest::getReason() const {
  return reason_;
}

void AddImageVulWhiteListRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string AddImageVulWhiteListRequest::getType() const {
  return type_;
}

void AddImageVulWhiteListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddImageVulWhiteListRequest::getLang() const {
  return lang_;
}

void AddImageVulWhiteListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string AddImageVulWhiteListRequest::getWhitelist() const {
  return whitelist_;
}

void AddImageVulWhiteListRequest::setWhitelist(const std::string &whitelist) {
  whitelist_ = whitelist;
  setParameter(std::string("Whitelist"), whitelist);
}

std::string AddImageVulWhiteListRequest::getTarget() const {
  return target_;
}

void AddImageVulWhiteListRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

