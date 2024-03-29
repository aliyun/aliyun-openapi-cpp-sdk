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

#include <alibabacloud/sas/model/DescribeSuspiciousOverallConfigRequest.h>

using AlibabaCloud::Sas::Model::DescribeSuspiciousOverallConfigRequest;

DescribeSuspiciousOverallConfigRequest::DescribeSuspiciousOverallConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSuspiciousOverallConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspiciousOverallConfigRequest::~DescribeSuspiciousOverallConfigRequest() {}

std::string DescribeSuspiciousOverallConfigRequest::getType() const {
  return type_;
}

void DescribeSuspiciousOverallConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeSuspiciousOverallConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSuspiciousOverallConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSuspiciousOverallConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeSuspiciousOverallConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

