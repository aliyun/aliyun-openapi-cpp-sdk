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

#include <alibabacloud/nas/model/CreateLDAPConfigRequest.h>

using AlibabaCloud::NAS::Model::CreateLDAPConfigRequest;

CreateLDAPConfigRequest::CreateLDAPConfigRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateLDAPConfig") {
  setMethod(HttpRequest::Method::Post);
}

CreateLDAPConfigRequest::~CreateLDAPConfigRequest() {}

std::string CreateLDAPConfigRequest::getSearchBase() const {
  return searchBase_;
}

void CreateLDAPConfigRequest::setSearchBase(const std::string &searchBase) {
  searchBase_ = searchBase;
  setParameter(std::string("SearchBase"), searchBase);
}

std::string CreateLDAPConfigRequest::getFileSystemId() const {
  return fileSystemId_;
}

void CreateLDAPConfigRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string CreateLDAPConfigRequest::getURI() const {
  return uRI_;
}

void CreateLDAPConfigRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

std::string CreateLDAPConfigRequest::getBindDN() const {
  return bindDN_;
}

void CreateLDAPConfigRequest::setBindDN(const std::string &bindDN) {
  bindDN_ = bindDN;
  setParameter(std::string("BindDN"), bindDN);
}

