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

#include <alibabacloud/sas/model/DeleteStrategyRequest.h>

using AlibabaCloud::Sas::Model::DeleteStrategyRequest;

DeleteStrategyRequest::DeleteStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteStrategy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteStrategyRequest::~DeleteStrategyRequest() {}

std::string DeleteStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteStrategyRequest::getId() const {
  return id_;
}

void DeleteStrategyRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DeleteStrategyRequest::getLang() const {
  return lang_;
}

void DeleteStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DeleteStrategyRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DeleteStrategyRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

