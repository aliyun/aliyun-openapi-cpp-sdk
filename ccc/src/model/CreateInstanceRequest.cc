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

#include <alibabacloud/ccc/model/CreateInstanceRequest.h>

using AlibabaCloud::CCC::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

std::string CreateInstanceRequest::getAdminRamIdList() const {
  return adminRamIdList_;
}

void CreateInstanceRequest::setAdminRamIdList(const std::string &adminRamIdList) {
  adminRamIdList_ = adminRamIdList;
  setParameter(std::string("AdminRamIdList"), adminRamIdList);
}

std::string CreateInstanceRequest::getDomainName() const {
  return domainName_;
}

void CreateInstanceRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string CreateInstanceRequest::getDescription() const {
  return description_;
}

void CreateInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateInstanceRequest::getNumberList() const {
  return numberList_;
}

void CreateInstanceRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string CreateInstanceRequest::getName() const {
  return name_;
}

void CreateInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

