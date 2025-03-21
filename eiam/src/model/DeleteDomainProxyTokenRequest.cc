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

#include <alibabacloud/eiam/model/DeleteDomainProxyTokenRequest.h>

using AlibabaCloud::Eiam::Model::DeleteDomainProxyTokenRequest;

DeleteDomainProxyTokenRequest::DeleteDomainProxyTokenRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DeleteDomainProxyToken") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDomainProxyTokenRequest::~DeleteDomainProxyTokenRequest() {}

std::string DeleteDomainProxyTokenRequest::getDomainProxyTokenId() const {
  return domainProxyTokenId_;
}

void DeleteDomainProxyTokenRequest::setDomainProxyTokenId(const std::string &domainProxyTokenId) {
  domainProxyTokenId_ = domainProxyTokenId;
  setParameter(std::string("DomainProxyTokenId"), domainProxyTokenId);
}

std::string DeleteDomainProxyTokenRequest::getDomainId() const {
  return domainId_;
}

void DeleteDomainProxyTokenRequest::setDomainId(const std::string &domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), domainId);
}

std::string DeleteDomainProxyTokenRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteDomainProxyTokenRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

