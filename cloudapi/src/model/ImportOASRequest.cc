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

#include <alibabacloud/cloudapi/model/ImportOASRequest.h>

using AlibabaCloud::CloudAPI::Model::ImportOASRequest;

ImportOASRequest::ImportOASRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ImportOAS") {
  setMethod(HttpRequest::Method::Post);
}

ImportOASRequest::~ImportOASRequest() {}

std::string ImportOASRequest::getData() const {
  return data_;
}

void ImportOASRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

std::string ImportOASRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ImportOASRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ImportOASRequest::getAuthType() const {
  return authType_;
}

void ImportOASRequest::setAuthType(const std::string &authType) {
  authType_ = authType;
  setParameter(std::string("AuthType"), authType);
}

std::string ImportOASRequest::getSecurityToken() const {
  return securityToken_;
}

void ImportOASRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool ImportOASRequest::getOverwrite() const {
  return overwrite_;
}

void ImportOASRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

bool ImportOASRequest::getDryRun() const {
  return dryRun_;
}

void ImportOASRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool ImportOASRequest::getIgnoreWarning() const {
  return ignoreWarning_;
}

void ImportOASRequest::setIgnoreWarning(bool ignoreWarning) {
  ignoreWarning_ = ignoreWarning;
  setParameter(std::string("IgnoreWarning"), ignoreWarning ? "true" : "false");
}

std::string ImportOASRequest::getGroupId() const {
  return groupId_;
}

void ImportOASRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ImportOASRequest::getRequestMode() const {
  return requestMode_;
}

void ImportOASRequest::setRequestMode(const std::string &requestMode) {
  requestMode_ = requestMode;
  setParameter(std::string("RequestMode"), requestMode);
}

std::string ImportOASRequest::getBackendName() const {
  return backendName_;
}

void ImportOASRequest::setBackendName(const std::string &backendName) {
  backendName_ = backendName;
  setParameter(std::string("BackendName"), backendName);
}

bool ImportOASRequest::getSkipDryRun() const {
  return skipDryRun_;
}

void ImportOASRequest::setSkipDryRun(bool skipDryRun) {
  skipDryRun_ = skipDryRun;
  setParameter(std::string("SkipDryRun"), skipDryRun ? "true" : "false");
}

std::string ImportOASRequest::getOASVersion() const {
  return oASVersion_;
}

void ImportOASRequest::setOASVersion(const std::string &oASVersion) {
  oASVersion_ = oASVersion;
  setParameter(std::string("OASVersion"), oASVersion);
}

