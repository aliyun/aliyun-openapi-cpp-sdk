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

#include <alibabacloud/eiam/model/EnableDomainProxyTokenRequest.h>

using AlibabaCloud::Eiam::Model::EnableDomainProxyTokenRequest;

EnableDomainProxyTokenRequest::EnableDomainProxyTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "EnableDomainProxyToken") {
  setMethod(HttpRequest::Method::Post);
}

EnableDomainProxyTokenRequest::~EnableDomainProxyTokenRequest() {}

std::string EnableDomainProxyTokenRequest::getDomainProxyTokenId() const {
  return domainProxyTokenId_;
}

void EnableDomainProxyTokenRequest::setDomainProxyTokenId(const std::string &domainProxyTokenId) {
  domainProxyTokenId_ = domainProxyTokenId;
  setParameter(std::string("DomainProxyTokenId"), domainProxyTokenId);
}

std::string EnableDomainProxyTokenRequest::getDomainId() const {
  return domainId_;
}

void EnableDomainProxyTokenRequest::setDomainId(const std::string &domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), domainId);
}

std::string EnableDomainProxyTokenRequest::getInstanceId() const {
  return instanceId_;
}

void EnableDomainProxyTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

