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

#include <alibabacloud/mse/model/CreateOrUpdateSwimmingLaneGroupRequest.h>

using AlibabaCloud::Mse::Model::CreateOrUpdateSwimmingLaneGroupRequest;

CreateOrUpdateSwimmingLaneGroupRequest::CreateOrUpdateSwimmingLaneGroupRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateOrUpdateSwimmingLaneGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateSwimmingLaneGroupRequest::~CreateOrUpdateSwimmingLaneGroupRequest() {}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getSource() const {
  return source_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getGmtModified() const {
  return gmtModified_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setGmtModified(const std::string &gmtModified) {
  gmtModified_ = gmtModified;
  setParameter(std::string("GmtModified"), gmtModified);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getUserId() const {
  return userId_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getLicenseKey() const {
  return licenseKey_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setLicenseKey(const std::string &licenseKey) {
  licenseKey_ = licenseKey;
  setParameter(std::string("LicenseKey"), licenseKey);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getAppIds() const {
  return appIds_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setAppIds(const std::string &appIds) {
  appIds_ = appIds;
  setParameter(std::string("AppIds"), appIds);
}

bool CreateOrUpdateSwimmingLaneGroupRequest::getEnable() const {
  return enable_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getEntryApp() const {
  return entryApp_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setEntryApp(const std::string &entryApp) {
  entryApp_ = entryApp;
  setParameter(std::string("EntryApp"), entryApp);
}

long CreateOrUpdateSwimmingLaneGroupRequest::getId() const {
  return id_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getGmtCreate() const {
  return gmtCreate_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setGmtCreate(const std::string &gmtCreate) {
  gmtCreate_ = gmtCreate;
  setParameter(std::string("GmtCreate"), gmtCreate);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getName() const {
  return name_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getRegion() const {
  return region_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

int CreateOrUpdateSwimmingLaneGroupRequest::getStatus() const {
  return status_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

