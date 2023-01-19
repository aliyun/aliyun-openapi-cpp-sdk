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

#include <alibabacloud/sas/model/AddTagWithUuidRequest.h>

using AlibabaCloud::Sas::Model::AddTagWithUuidRequest;

AddTagWithUuidRequest::AddTagWithUuidRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddTagWithUuid") {
  setMethod(HttpRequest::Method::Post);
}

AddTagWithUuidRequest::~AddTagWithUuidRequest() {}

std::string AddTagWithUuidRequest::getTagName() const {
  return tagName_;
}

void AddTagWithUuidRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string AddTagWithUuidRequest::getSourceIp() const {
  return sourceIp_;
}

void AddTagWithUuidRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AddTagWithUuidRequest::getUuidList() const {
  return uuidList_;
}

void AddTagWithUuidRequest::setUuidList(const std::string &uuidList) {
  uuidList_ = uuidList;
  setParameter(std::string("UuidList"), uuidList);
}

