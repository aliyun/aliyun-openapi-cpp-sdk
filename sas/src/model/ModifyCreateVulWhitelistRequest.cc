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

#include <alibabacloud/sas/model/ModifyCreateVulWhitelistRequest.h>

using AlibabaCloud::Sas::Model::ModifyCreateVulWhitelistRequest;

ModifyCreateVulWhitelistRequest::ModifyCreateVulWhitelistRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyCreateVulWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCreateVulWhitelistRequest::~ModifyCreateVulWhitelistRequest() {}

std::string ModifyCreateVulWhitelistRequest::getReason() const {
  return reason_;
}

void ModifyCreateVulWhitelistRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string ModifyCreateVulWhitelistRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyCreateVulWhitelistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyCreateVulWhitelistRequest::getWhitelist() const {
  return whitelist_;
}

void ModifyCreateVulWhitelistRequest::setWhitelist(const std::string &whitelist) {
  whitelist_ = whitelist;
  setParameter(std::string("Whitelist"), whitelist);
}

std::string ModifyCreateVulWhitelistRequest::getTargetInfo() const {
  return targetInfo_;
}

void ModifyCreateVulWhitelistRequest::setTargetInfo(const std::string &targetInfo) {
  targetInfo_ = targetInfo;
  setParameter(std::string("TargetInfo"), targetInfo);
}

