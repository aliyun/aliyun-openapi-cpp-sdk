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

#include <alibabacloud/sas/model/GetCheckSummaryRequest.h>

using AlibabaCloud::Sas::Model::GetCheckSummaryRequest;

GetCheckSummaryRequest::GetCheckSummaryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCheckSummary") {
  setMethod(HttpRequest::Method::Post);
}

GetCheckSummaryRequest::~GetCheckSummaryRequest() {}

std::string GetCheckSummaryRequest::getSourceIp() const {
  return sourceIp_;
}

void GetCheckSummaryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetCheckSummaryRequest::getLang() const {
  return lang_;
}

void GetCheckSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetCheckSummaryRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void GetCheckSummaryRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

