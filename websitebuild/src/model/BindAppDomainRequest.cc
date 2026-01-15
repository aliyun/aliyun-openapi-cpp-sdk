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

#include <alibabacloud/websitebuild/model/BindAppDomainRequest.h>

using AlibabaCloud::WebsiteBuild::Model::BindAppDomainRequest;

BindAppDomainRequest::BindAppDomainRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "BindAppDomain") {
  setMethod(HttpRequest::Method::Post);
}

BindAppDomainRequest::~BindAppDomainRequest() {}

std::string BindAppDomainRequest::getDomainName() const {
  return domainName_;
}

void BindAppDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string BindAppDomainRequest::getExtend() const {
  return extend_;
}

void BindAppDomainRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string BindAppDomainRequest::getBizId() const {
  return bizId_;
}

void BindAppDomainRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string BindAppDomainRequest::getOperateType() const {
  return operateType_;
}

void BindAppDomainRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

