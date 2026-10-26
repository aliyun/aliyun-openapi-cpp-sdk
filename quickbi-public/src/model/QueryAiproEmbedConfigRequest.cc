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

#include <alibabacloud/quickbi-public/model/QueryAiproEmbedConfigRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryAiproEmbedConfigRequest;

QueryAiproEmbedConfigRequest::QueryAiproEmbedConfigRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryAiproEmbedConfig") {
  setMethod(HttpRequest::Method::Post);
}

QueryAiproEmbedConfigRequest::~QueryAiproEmbedConfigRequest() {}

std::string QueryAiproEmbedConfigRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryAiproEmbedConfigRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryAiproEmbedConfigRequest::getSignType() const {
  return signType_;
}

void QueryAiproEmbedConfigRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryAiproEmbedConfigRequest::getKeyword() const {
  return keyword_;
}

void QueryAiproEmbedConfigRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

