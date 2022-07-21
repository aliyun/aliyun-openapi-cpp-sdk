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

#include <alibabacloud/domain/model/UpdateDomainToDomainGroupRequest.h>

using AlibabaCloud::Domain::Model::UpdateDomainToDomainGroupRequest;

UpdateDomainToDomainGroupRequest::UpdateDomainToDomainGroupRequest()
    : RpcServiceRequest("domain", "2018-01-29", "UpdateDomainToDomainGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDomainToDomainGroupRequest::~UpdateDomainToDomainGroupRequest() {}

std::string UpdateDomainToDomainGroupRequest::getFileToUpload() const {
  return fileToUpload_;
}

void UpdateDomainToDomainGroupRequest::setFileToUpload(const std::string &fileToUpload) {
  fileToUpload_ = fileToUpload;
  setBodyParameter(std::string("FileToUpload"), fileToUpload);
}

bool UpdateDomainToDomainGroupRequest::getReplace() const {
  return replace_;
}

void UpdateDomainToDomainGroupRequest::setReplace(bool replace) {
  replace_ = replace;
  setParameter(std::string("Replace"), replace ? "true" : "false");
}

std::vector<std::string> UpdateDomainToDomainGroupRequest::getDomainName() const {
  return domainName_;
}

void UpdateDomainToDomainGroupRequest::setDomainName(const std::vector<std::string> &domainName) {
  domainName_ = domainName;
}

long UpdateDomainToDomainGroupRequest::getDomainGroupId() const {
  return domainGroupId_;
}

void UpdateDomainToDomainGroupRequest::setDomainGroupId(long domainGroupId) {
  domainGroupId_ = domainGroupId;
  setParameter(std::string("DomainGroupId"), std::to_string(domainGroupId));
}

int UpdateDomainToDomainGroupRequest::getDataSource() const {
  return dataSource_;
}

void UpdateDomainToDomainGroupRequest::setDataSource(int dataSource) {
  dataSource_ = dataSource;
  setParameter(std::string("DataSource"), std::to_string(dataSource));
}

std::string UpdateDomainToDomainGroupRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDomainToDomainGroupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDomainToDomainGroupRequest::getLang() const {
  return lang_;
}

void UpdateDomainToDomainGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

