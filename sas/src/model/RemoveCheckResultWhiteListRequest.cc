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

#include <alibabacloud/sas/model/RemoveCheckResultWhiteListRequest.h>

using AlibabaCloud::Sas::Model::RemoveCheckResultWhiteListRequest;

RemoveCheckResultWhiteListRequest::RemoveCheckResultWhiteListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "RemoveCheckResultWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

RemoveCheckResultWhiteListRequest::~RemoveCheckResultWhiteListRequest() {}

std::string RemoveCheckResultWhiteListRequest::getType() const {
  return type_;
}

void RemoveCheckResultWhiteListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string RemoveCheckResultWhiteListRequest::getSourceIp() const {
  return sourceIp_;
}

void RemoveCheckResultWhiteListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<long> RemoveCheckResultWhiteListRequest::getCheckIds() const {
  return checkIds_;
}

void RemoveCheckResultWhiteListRequest::setCheckIds(const std::vector<long> &checkIds) {
  checkIds_ = checkIds;
}

std::string RemoveCheckResultWhiteListRequest::getCheckGroupId() const {
  return checkGroupId_;
}

void RemoveCheckResultWhiteListRequest::setCheckGroupId(const std::string &checkGroupId) {
  checkGroupId_ = checkGroupId;
  setParameter(std::string("CheckGroupId"), checkGroupId);
}

