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

#include <alibabacloud/sas/model/DescribeSummaryInfoRequest.h>

using AlibabaCloud::Sas::Model::DescribeSummaryInfoRequest;

DescribeSummaryInfoRequest::DescribeSummaryInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSummaryInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSummaryInfoRequest::~DescribeSummaryInfoRequest() {}

std::string DescribeSummaryInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSummaryInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSummaryInfoRequest::getLang() const {
  return lang_;
}

void DescribeSummaryInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeSummaryInfoRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeSummaryInfoRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

