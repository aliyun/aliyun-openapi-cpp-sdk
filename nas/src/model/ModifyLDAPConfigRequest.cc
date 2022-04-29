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

#include <alibabacloud/nas/model/ModifyLDAPConfigRequest.h>

using AlibabaCloud::NAS::Model::ModifyLDAPConfigRequest;

ModifyLDAPConfigRequest::ModifyLDAPConfigRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyLDAPConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLDAPConfigRequest::~ModifyLDAPConfigRequest() {}

std::string ModifyLDAPConfigRequest::getSearchBase() const {
  return searchBase_;
}

void ModifyLDAPConfigRequest::setSearchBase(const std::string &searchBase) {
  searchBase_ = searchBase;
  setParameter(std::string("SearchBase"), searchBase);
}

std::string ModifyLDAPConfigRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ModifyLDAPConfigRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string ModifyLDAPConfigRequest::getURI() const {
  return uRI_;
}

void ModifyLDAPConfigRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

std::string ModifyLDAPConfigRequest::getBindDN() const {
  return bindDN_;
}

void ModifyLDAPConfigRequest::setBindDN(const std::string &bindDN) {
  bindDN_ = bindDN;
  setParameter(std::string("BindDN"), bindDN);
}

