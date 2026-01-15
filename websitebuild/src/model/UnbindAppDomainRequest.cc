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

#include <alibabacloud/websitebuild/model/UnbindAppDomainRequest.h>

using AlibabaCloud::WebsiteBuild::Model::UnbindAppDomainRequest;

UnbindAppDomainRequest::UnbindAppDomainRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "UnbindAppDomain") {
  setMethod(HttpRequest::Method::Post);
}

UnbindAppDomainRequest::~UnbindAppDomainRequest() {}

std::string UnbindAppDomainRequest::getDomainName() const {
  return domainName_;
}

void UnbindAppDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string UnbindAppDomainRequest::getBizId() const {
  return bizId_;
}

void UnbindAppDomainRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

