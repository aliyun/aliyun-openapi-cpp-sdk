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

#include <alibabacloud/imm/model/GenerateWebofficeTokenRequest.h>

using AlibabaCloud::Imm::Model::GenerateWebofficeTokenRequest;

GenerateWebofficeTokenRequest::GenerateWebofficeTokenRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GenerateWebofficeToken") {
  setMethod(HttpRequest::Method::Post);
}

GenerateWebofficeTokenRequest::~GenerateWebofficeTokenRequest() {}

std::string GenerateWebofficeTokenRequest::getReferer() const {
  return referer_;
}

void GenerateWebofficeTokenRequest::setReferer(const std::string &referer) {
  referer_ = referer;
  setParameter(std::string("Referer"), referer);
}

GenerateWebofficeTokenRequest::Notification GenerateWebofficeTokenRequest::getNotification() const {
  return notification_;
}

void GenerateWebofficeTokenRequest::setNotification(const GenerateWebofficeTokenRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string GenerateWebofficeTokenRequest::getPassword() const {
  return password_;
}

void GenerateWebofficeTokenRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string GenerateWebofficeTokenRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void GenerateWebofficeTokenRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string GenerateWebofficeTokenRequest::getProjectName() const {
  return projectName_;
}

void GenerateWebofficeTokenRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

GenerateWebofficeTokenRequest::Watermark GenerateWebofficeTokenRequest::getWatermark() const {
  return watermark_;
}

void GenerateWebofficeTokenRequest::setWatermark(const GenerateWebofficeTokenRequest::Watermark &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark") + ".Rotate", std::to_string(watermark.rotate));
  setParameter(std::string("Watermark") + ".Horizontal", std::to_string(watermark.horizontal));
  setParameter(std::string("Watermark") + ".FillStyle", watermark.fillStyle);
  setParameter(std::string("Watermark") + ".Vertical", std::to_string(watermark.vertical));
  setParameter(std::string("Watermark") + ".Type", std::to_string(watermark.type));
  setParameter(std::string("Watermark") + ".Value", watermark.value);
  setParameter(std::string("Watermark") + ".Font", watermark.font);
}

std::string GenerateWebofficeTokenRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void GenerateWebofficeTokenRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string GenerateWebofficeTokenRequest::getFilename() const {
  return filename_;
}

void GenerateWebofficeTokenRequest::setFilename(const std::string &filename) {
  filename_ = filename;
  setParameter(std::string("Filename"), filename);
}

std::string GenerateWebofficeTokenRequest::getSourceURI() const {
  return sourceURI_;
}

void GenerateWebofficeTokenRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

bool GenerateWebofficeTokenRequest::getExternalUploaded() const {
  return externalUploaded_;
}

void GenerateWebofficeTokenRequest::setExternalUploaded(bool externalUploaded) {
  externalUploaded_ = externalUploaded;
  setParameter(std::string("ExternalUploaded"), externalUploaded ? "true" : "false");
}

std::string GenerateWebofficeTokenRequest::getUserData() const {
  return userData_;
}

void GenerateWebofficeTokenRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long GenerateWebofficeTokenRequest::getPreviewPages() const {
  return previewPages_;
}

void GenerateWebofficeTokenRequest::setPreviewPages(long previewPages) {
  previewPages_ = previewPages;
  setParameter(std::string("PreviewPages"), std::to_string(previewPages));
}

bool GenerateWebofficeTokenRequest::getHidecmb() const {
  return hidecmb_;
}

void GenerateWebofficeTokenRequest::setHidecmb(bool hidecmb) {
  hidecmb_ = hidecmb;
  setParameter(std::string("Hidecmb"), hidecmb ? "true" : "false");
}

bool GenerateWebofficeTokenRequest::getCachePreview() const {
  return cachePreview_;
}

void GenerateWebofficeTokenRequest::setCachePreview(bool cachePreview) {
  cachePreview_ = cachePreview;
  setParameter(std::string("CachePreview"), cachePreview ? "true" : "false");
}

GenerateWebofficeTokenRequest::Permission GenerateWebofficeTokenRequest::getPermission() const {
  return permission_;
}

void GenerateWebofficeTokenRequest::setPermission(const GenerateWebofficeTokenRequest::Permission &permission) {
  permission_ = permission;
  setParameter(std::string("Permission") + ".Print", permission.print ? "true" : "false");
  setParameter(std::string("Permission") + ".Readonly", permission.readonly ? "true" : "false");
  setParameter(std::string("Permission") + ".Rename", permission.rename ? "true" : "false");
  setParameter(std::string("Permission") + ".History", permission.history ? "true" : "false");
  setParameter(std::string("Permission") + ".Copy", permission.copy ? "true" : "false");
  setParameter(std::string("Permission") + ".Export", permission.export ? "true" : "false");
}

GenerateWebofficeTokenRequest::CredentialConfig GenerateWebofficeTokenRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void GenerateWebofficeTokenRequest::setCredentialConfig(const GenerateWebofficeTokenRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

GenerateWebofficeTokenRequest::User GenerateWebofficeTokenRequest::getUser() const {
  return user_;
}

void GenerateWebofficeTokenRequest::setUser(const GenerateWebofficeTokenRequest::User &user) {
  user_ = user;
  setParameter(std::string("User") + ".Name", user.name);
  setParameter(std::string("User") + ".Id", user.id);
  setParameter(std::string("User") + ".Avatar", user.avatar);
}

