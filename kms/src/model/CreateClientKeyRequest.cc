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

#include <alibabacloud/kms/model/CreateClientKeyRequest.h>

using AlibabaCloud::Kms::Model::CreateClientKeyRequest;

CreateClientKeyRequest::CreateClientKeyRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CreateClientKey") {
  setMethod(HttpRequest::Method::Post);
}

CreateClientKeyRequest::~CreateClientKeyRequest() {}

std::string CreateClientKeyRequest::getNotBefore() const {
  return notBefore_;
}

void CreateClientKeyRequest::setNotBefore(const std::string &notBefore) {
  notBefore_ = notBefore;
  setParameter(std::string("NotBefore"), notBefore);
}

std::string CreateClientKeyRequest::getNotAfter() const {
  return notAfter_;
}

void CreateClientKeyRequest::setNotAfter(const std::string &notAfter) {
  notAfter_ = notAfter;
  setParameter(std::string("NotAfter"), notAfter);
}

std::string CreateClientKeyRequest::getPassword() const {
  return password_;
}

void CreateClientKeyRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateClientKeyRequest::getAapName() const {
  return aapName_;
}

void CreateClientKeyRequest::setAapName(const std::string &aapName) {
  aapName_ = aapName;
  setParameter(std::string("AapName"), aapName);
}

