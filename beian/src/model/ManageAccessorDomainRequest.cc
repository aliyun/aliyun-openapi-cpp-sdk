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

#include <alibabacloud/beian/model/ManageAccessorDomainRequest.h>

using AlibabaCloud::Beian::Model::ManageAccessorDomainRequest;

ManageAccessorDomainRequest::ManageAccessorDomainRequest()
    : RpcServiceRequest("beian", "2016-08-10", "ManageAccessorDomain") {
  setMethod(HttpRequest::Method::Post);
}

ManageAccessorDomainRequest::~ManageAccessorDomainRequest() {}

std::string ManageAccessorDomainRequest::getCaller() const {
  return caller_;
}

void ManageAccessorDomainRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string ManageAccessorDomainRequest::getDomain() const {
  return domain_;
}

void ManageAccessorDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string ManageAccessorDomainRequest::getOperation() const {
  return operation_;
}

void ManageAccessorDomainRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

