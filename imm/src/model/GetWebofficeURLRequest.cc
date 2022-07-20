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

#include <alibabacloud/imm/model/GetWebofficeURLRequest.h>

using AlibabaCloud::Imm::Model::GetWebofficeURLRequest;

GetWebofficeURLRequest::GetWebofficeURLRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GetWebofficeURL") {
  setMethod(HttpRequest::Method::Post);
}

GetWebofficeURLRequest::~GetWebofficeURLRequest() {}

std::string GetWebofficeURLRequest::getReferer() const {
  return referer_;
}

void GetWebofficeURLRequest::setReferer(const std::string &referer) {
  referer_ = referer;
  setParameter(std::string("Referer"), referer);
}

std::string GetWebofficeURLRequest::getPassword() const {
  return password_;
}

void GetWebofficeURLRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string GetWebofficeURLRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void GetWebofficeURLRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string GetWebofficeURLRequest::getProjectName() const {
  return projectName_;
}

void GetWebofficeURLRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

GetWebofficeURLRequest::Watermark GetWebofficeURLRequest::getWatermark() const {
  return watermark_;
}

void GetWebofficeURLRequest::setWatermark(const GetWebofficeURLRequest::Watermark &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark") + ".Rotate", std::to_string(watermark.rotate));
  setParameter(std::string("Watermark") + ".Horizontal", std::to_string(watermark.horizontal));
  setParameter(std::string("Watermark") + ".FillStyle", watermark.fillStyle);
  setParameter(std::string("Watermark") + ".Vertical", std::to_string(watermark.vertical));
  setParameter(std::string("Watermark") + ".Type", std::to_string(watermark.type));
  setParameter(std::string("Watermark") + ".Value", watermark.value);
  setParameter(std::string("Watermark") + ".Font", watermark.font);
}

std::string GetWebofficeURLRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void GetWebofficeURLRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string GetWebofficeURLRequest::getFilename() const {
  return filename_;
}

void GetWebofficeURLRequest::setFilename(const std::string &filename) {
  filename_ = filename;
  setParameter(std::string("Filename"), filename);
}

std::string GetWebofficeURLRequest::getSourceURI() const {
  return sourceURI_;
}

void GetWebofficeURLRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

bool GetWebofficeURLRequest::getExternalUploaded() const {
  return externalUploaded_;
}

void GetWebofficeURLRequest::setExternalUploaded(bool externalUploaded) {
  externalUploaded_ = externalUploaded;
  setParameter(std::string("ExternalUploaded"), externalUploaded ? "true" : "false");
}

std::string GetWebofficeURLRequest::getUserData() const {
  return userData_;
}

void GetWebofficeURLRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long GetWebofficeURLRequest::getPreviewPages() const {
  return previewPages_;
}

void GetWebofficeURLRequest::setPreviewPages(long previewPages) {
  previewPages_ = previewPages;
  setParameter(std::string("PreviewPages"), std::to_string(previewPages));
}

bool GetWebofficeURLRequest::getHidecmb() const {
  return hidecmb_;
}

void GetWebofficeURLRequest::setHidecmb(bool hidecmb) {
  hidecmb_ = hidecmb;
  setParameter(std::string("Hidecmb"), hidecmb ? "true" : "false");
}

bool GetWebofficeURLRequest::getCachePreview() const {
  return cachePreview_;
}

void GetWebofficeURLRequest::setCachePreview(bool cachePreview) {
  cachePreview_ = cachePreview;
  setParameter(std::string("CachePreview"), cachePreview ? "true" : "false");
}

GetWebofficeURLRequest::Permission GetWebofficeURLRequest::getPermission() const {
  return permission_;
}

void GetWebofficeURLRequest::setPermission(const GetWebofficeURLRequest::Permission &permission) {
  permission_ = permission;
  setParameter(std::string("Permission") + ".Print", permission.print ? "true" : "false");
  setParameter(std::string("Permission") + ".Readonly", permission.readonly ? "true" : "false");
  setParameter(std::string("Permission") + ".Rename", permission.rename ? "true" : "false");
  setParameter(std::string("Permission") + ".History", permission.history ? "true" : "false");
  setParameter(std::string("Permission") + ".Copy", permission.copy ? "true" : "false");
  setParameter(std::string("Permission") + ".Export", permission.export ? "true" : "false");
}

GetWebofficeURLRequest::CredentialConfig GetWebofficeURLRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void GetWebofficeURLRequest::setCredentialConfig(const GetWebofficeURLRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

GetWebofficeURLRequest::User GetWebofficeURLRequest::getUser() const {
  return user_;
}

void GetWebofficeURLRequest::setUser(const GetWebofficeURLRequest::User &user) {
  user_ = user;
  setParameter(std::string("User") + ".Name", user.name);
  setParameter(std::string("User") + ".Id", user.id);
  setParameter(std::string("User") + ".Avatar", user.avatar);
}

