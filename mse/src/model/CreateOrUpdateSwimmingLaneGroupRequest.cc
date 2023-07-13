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

std::string CreateOrUpdateSwimmingLaneGroupRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getAppIds() const {
  return appIds_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setAppIds(const std::string &appIds) {
  appIds_ = appIds;
  setParameter(std::string("AppIds"), appIds);
}

bool CreateOrUpdateSwimmingLaneGroupRequest::getDbGrayEnable() const {
  return dbGrayEnable_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setDbGrayEnable(bool dbGrayEnable) {
  dbGrayEnable_ = dbGrayEnable;
  setParameter(std::string("DbGrayEnable"), dbGrayEnable ? "true" : "false");
}

bool CreateOrUpdateSwimmingLaneGroupRequest::getEnable() const {
  return enable_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

long CreateOrUpdateSwimmingLaneGroupRequest::getId() const {
  return id_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getName() const {
  return name_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getMessageQueueFilterSide() const {
  return messageQueueFilterSide_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setMessageQueueFilterSide(const std::string &messageQueueFilterSide) {
  messageQueueFilterSide_ = messageQueueFilterSide;
  setParameter(std::string("MessageQueueFilterSide"), messageQueueFilterSide);
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

bool CreateOrUpdateSwimmingLaneGroupRequest::getMessageQueueGrayEnable() const {
  return messageQueueGrayEnable_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setMessageQueueGrayEnable(bool messageQueueGrayEnable) {
  messageQueueGrayEnable_ = messageQueueGrayEnable;
  setParameter(std::string("MessageQueueGrayEnable"), messageQueueGrayEnable ? "true" : "false");
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getEntryApp() const {
  return entryApp_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setEntryApp(const std::string &entryApp) {
  entryApp_ = entryApp;
  setParameter(std::string("EntryApp"), entryApp);
}

bool CreateOrUpdateSwimmingLaneGroupRequest::getRecordCanaryDetail() const {
  return recordCanaryDetail_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setRecordCanaryDetail(bool recordCanaryDetail) {
  recordCanaryDetail_ = recordCanaryDetail;
  setParameter(std::string("RecordCanaryDetail"), recordCanaryDetail ? "true" : "false");
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::get_Namespace() const {
  return _namespace_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateOrUpdateSwimmingLaneGroupRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateOrUpdateSwimmingLaneGroupRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

