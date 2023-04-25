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

#include <alibabacloud/ccc/model/ChangeWorkModeRequest.h>

using AlibabaCloud::CCC::Model::ChangeWorkModeRequest;

ChangeWorkModeRequest::ChangeWorkModeRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ChangeWorkMode") {
  setMethod(HttpRequest::Method::Post);
}

ChangeWorkModeRequest::~ChangeWorkModeRequest() {}

std::string ChangeWorkModeRequest::getSignedSkillGroupIdList() const {
  return signedSkillGroupIdList_;
}

void ChangeWorkModeRequest::setSignedSkillGroupIdList(const std::string &signedSkillGroupIdList) {
  signedSkillGroupIdList_ = signedSkillGroupIdList;
  setParameter(std::string("SignedSkillGroupIdList"), signedSkillGroupIdList);
}

std::string ChangeWorkModeRequest::getMobile() const {
  return mobile_;
}

void ChangeWorkModeRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setParameter(std::string("Mobile"), mobile);
}

std::string ChangeWorkModeRequest::getWorkMode() const {
  return workMode_;
}

void ChangeWorkModeRequest::setWorkMode(const std::string &workMode) {
  workMode_ = workMode;
  setParameter(std::string("WorkMode"), workMode);
}

std::string ChangeWorkModeRequest::getUserId() const {
  return userId_;
}

void ChangeWorkModeRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ChangeWorkModeRequest::getDeviceId() const {
  return deviceId_;
}

void ChangeWorkModeRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string ChangeWorkModeRequest::getInstanceId() const {
  return instanceId_;
}

void ChangeWorkModeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

