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

#include <alibabacloud/arms/model/UpdateRumAppRequest.h>

using AlibabaCloud::ARMS::Model::UpdateRumAppRequest;

UpdateRumAppRequest::UpdateRumAppRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateRumApp") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRumAppRequest::~UpdateRumAppRequest() {}

bool UpdateRumAppRequest::getRestart() const {
  return restart_;
}

void UpdateRumAppRequest::setRestart(bool restart) {
  restart_ = restart;
  setParameter(std::string("Restart"), restart ? "true" : "false");
}

bool UpdateRumAppRequest::getAutoRestart() const {
  return autoRestart_;
}

void UpdateRumAppRequest::setAutoRestart(bool autoRestart) {
  autoRestart_ = autoRestart;
  setParameter(std::string("AutoRestart"), autoRestart ? "true" : "false");
}

std::string UpdateRumAppRequest::getDescription() const {
  return description_;
}

void UpdateRumAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateRumAppRequest::getPid() const {
  return pid_;
}

void UpdateRumAppRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

bool UpdateRumAppRequest::getStop() const {
  return stop_;
}

void UpdateRumAppRequest::setStop(bool stop) {
  stop_ = stop;
  setParameter(std::string("Stop"), stop ? "true" : "false");
}

std::string UpdateRumAppRequest::getRegionId() const {
  return regionId_;
}

void UpdateRumAppRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateRumAppRequest::getNickname() const {
  return nickname_;
}

void UpdateRumAppRequest::setNickname(const std::string &nickname) {
  nickname_ = nickname;
  setParameter(std::string("Nickname"), nickname);
}

std::string UpdateRumAppRequest::getServiceDomainOperationJson() const {
  return serviceDomainOperationJson_;
}

void UpdateRumAppRequest::setServiceDomainOperationJson(const std::string &serviceDomainOperationJson) {
  serviceDomainOperationJson_ = serviceDomainOperationJson;
  setParameter(std::string("ServiceDomainOperationJson"), serviceDomainOperationJson);
}

bool UpdateRumAppRequest::getIsSubscribe() const {
  return isSubscribe_;
}

void UpdateRumAppRequest::setIsSubscribe(bool isSubscribe) {
  isSubscribe_ = isSubscribe;
  setParameter(std::string("IsSubscribe"), isSubscribe ? "true" : "false");
}

std::string UpdateRumAppRequest::getBonreeSDKConfigJson() const {
  return bonreeSDKConfigJson_;
}

void UpdateRumAppRequest::setBonreeSDKConfigJson(const std::string &bonreeSDKConfigJson) {
  bonreeSDKConfigJson_ = bonreeSDKConfigJson;
  setParameter(std::string("BonreeSDKConfigJson"), bonreeSDKConfigJson);
}

