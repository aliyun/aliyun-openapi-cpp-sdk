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

#include <alibabacloud/drds/model/ChangeInstanceAzoneRequest.h>

using AlibabaCloud::Drds::Model::ChangeInstanceAzoneRequest;

ChangeInstanceAzoneRequest::ChangeInstanceAzoneRequest()
    : RpcServiceRequest("drds", "2019-01-23", "ChangeInstanceAzone") {
  setMethod(HttpRequest::Method::Post);
}

ChangeInstanceAzoneRequest::~ChangeInstanceAzoneRequest() {}

std::string ChangeInstanceAzoneRequest::getTargetAzoneId() const {
  return targetAzoneId_;
}

void ChangeInstanceAzoneRequest::setTargetAzoneId(const std::string &targetAzoneId) {
  targetAzoneId_ = targetAzoneId;
  setParameter(std::string("TargetAzoneId"), targetAzoneId);
}

std::string ChangeInstanceAzoneRequest::getDrdsRegionId() const {
  return drdsRegionId_;
}

void ChangeInstanceAzoneRequest::setDrdsRegionId(const std::string &drdsRegionId) {
  drdsRegionId_ = drdsRegionId;
  setParameter(std::string("DrdsRegionId"), drdsRegionId);
}

std::string ChangeInstanceAzoneRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void ChangeInstanceAzoneRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string ChangeInstanceAzoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChangeInstanceAzoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChangeInstanceAzoneRequest::getOriginAzoneId() const {
  return originAzoneId_;
}

void ChangeInstanceAzoneRequest::setOriginAzoneId(const std::string &originAzoneId) {
  originAzoneId_ = originAzoneId;
  setParameter(std::string("OriginAzoneId"), originAzoneId);
}

bool ChangeInstanceAzoneRequest::getChangeVSwitch() const {
  return changeVSwitch_;
}

void ChangeInstanceAzoneRequest::setChangeVSwitch(bool changeVSwitch) {
  changeVSwitch_ = changeVSwitch;
  setParameter(std::string("ChangeVSwitch"), changeVSwitch ? "true" : "false");
}

std::string ChangeInstanceAzoneRequest::getNewVSwitch() const {
  return newVSwitch_;
}

void ChangeInstanceAzoneRequest::setNewVSwitch(const std::string &newVSwitch) {
  newVSwitch_ = newVSwitch;
  setParameter(std::string("NewVSwitch"), newVSwitch);
}

