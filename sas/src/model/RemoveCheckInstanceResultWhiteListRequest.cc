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

#include <alibabacloud/sas/model/RemoveCheckInstanceResultWhiteListRequest.h>

using AlibabaCloud::Sas::Model::RemoveCheckInstanceResultWhiteListRequest;

RemoveCheckInstanceResultWhiteListRequest::RemoveCheckInstanceResultWhiteListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "RemoveCheckInstanceResultWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

RemoveCheckInstanceResultWhiteListRequest::~RemoveCheckInstanceResultWhiteListRequest() {}

std::string RemoveCheckInstanceResultWhiteListRequest::getSourceIp() const {
  return sourceIp_;
}

void RemoveCheckInstanceResultWhiteListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> RemoveCheckInstanceResultWhiteListRequest::getInstanceIds() const {
  return instanceIds_;
}

void RemoveCheckInstanceResultWhiteListRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

long RemoveCheckInstanceResultWhiteListRequest::getCheckId() const {
  return checkId_;
}

void RemoveCheckInstanceResultWhiteListRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

