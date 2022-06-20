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

#include <alibabacloud/sas/model/DescribeSuspiciousUUIDConfigRequest.h>

using AlibabaCloud::Sas::Model::DescribeSuspiciousUUIDConfigRequest;

DescribeSuspiciousUUIDConfigRequest::DescribeSuspiciousUUIDConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSuspiciousUUIDConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspiciousUUIDConfigRequest::~DescribeSuspiciousUUIDConfigRequest() {}

std::string DescribeSuspiciousUUIDConfigRequest::getType() const {
  return type_;
}

void DescribeSuspiciousUUIDConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeSuspiciousUUIDConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSuspiciousUUIDConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSuspiciousUUIDConfigRequest::getLang() const {
  return lang_;
}

void DescribeSuspiciousUUIDConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeSuspiciousUUIDConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeSuspiciousUUIDConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

