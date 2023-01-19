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

#include <alibabacloud/sas/model/AddCheckInstanceResultWhiteListRequest.h>

using AlibabaCloud::Sas::Model::AddCheckInstanceResultWhiteListRequest;

AddCheckInstanceResultWhiteListRequest::AddCheckInstanceResultWhiteListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddCheckInstanceResultWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

AddCheckInstanceResultWhiteListRequest::~AddCheckInstanceResultWhiteListRequest() {}

std::string AddCheckInstanceResultWhiteListRequest::getSourceIp() const {
  return sourceIp_;
}

void AddCheckInstanceResultWhiteListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long AddCheckInstanceResultWhiteListRequest::getCheckId() const {
  return checkId_;
}

void AddCheckInstanceResultWhiteListRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

std::string AddCheckInstanceResultWhiteListRequest::getCheckGroupId() const {
  return checkGroupId_;
}

void AddCheckInstanceResultWhiteListRequest::setCheckGroupId(const std::string &checkGroupId) {
  checkGroupId_ = checkGroupId;
  setParameter(std::string("CheckGroupId"), checkGroupId);
}

std::vector<std::string> AddCheckInstanceResultWhiteListRequest::getInstanceIds() const {
  return instanceIds_;
}

void AddCheckInstanceResultWhiteListRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

