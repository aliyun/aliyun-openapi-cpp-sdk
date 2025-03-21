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

#include <alibabacloud/eiam/model/ObtainDomainProxyTokenRequest.h>

using AlibabaCloud::Eiam::Model::ObtainDomainProxyTokenRequest;

ObtainDomainProxyTokenRequest::ObtainDomainProxyTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ObtainDomainProxyToken") {
  setMethod(HttpRequest::Method::Post);
}

ObtainDomainProxyTokenRequest::~ObtainDomainProxyTokenRequest() {}

std::string ObtainDomainProxyTokenRequest::getDomainProxyTokenId() const {
  return domainProxyTokenId_;
}

void ObtainDomainProxyTokenRequest::setDomainProxyTokenId(const std::string &domainProxyTokenId) {
  domainProxyTokenId_ = domainProxyTokenId;
  setParameter(std::string("DomainProxyTokenId"), domainProxyTokenId);
}

std::string ObtainDomainProxyTokenRequest::getDomainId() const {
  return domainId_;
}

void ObtainDomainProxyTokenRequest::setDomainId(const std::string &domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), domainId);
}

std::string ObtainDomainProxyTokenRequest::getInstanceId() const {
  return instanceId_;
}

void ObtainDomainProxyTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

