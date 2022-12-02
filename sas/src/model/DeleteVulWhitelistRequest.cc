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

#include <alibabacloud/sas/model/DeleteVulWhitelistRequest.h>

using AlibabaCloud::Sas::Model::DeleteVulWhitelistRequest;

DeleteVulWhitelistRequest::DeleteVulWhitelistRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteVulWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVulWhitelistRequest::~DeleteVulWhitelistRequest() {}

std::string DeleteVulWhitelistRequest::getWhitelist() const {
  return whitelist_;
}

void DeleteVulWhitelistRequest::setWhitelist(const std::string &whitelist) {
  whitelist_ = whitelist;
  setParameter(std::string("Whitelist"), whitelist);
}

std::string DeleteVulWhitelistRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteVulWhitelistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteVulWhitelistRequest::getId() const {
  return id_;
}

void DeleteVulWhitelistRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

