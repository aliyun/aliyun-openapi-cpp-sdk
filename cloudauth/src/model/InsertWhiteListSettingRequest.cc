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

#include <alibabacloud/cloudauth/model/InsertWhiteListSettingRequest.h>

using AlibabaCloud::Cloudauth::Model::InsertWhiteListSettingRequest;

InsertWhiteListSettingRequest::InsertWhiteListSettingRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "InsertWhiteListSetting") {
  setMethod(HttpRequest::Method::Post);
}

InsertWhiteListSettingRequest::~InsertWhiteListSettingRequest() {}

int InsertWhiteListSettingRequest::getValidDay() const {
  return validDay_;
}

void InsertWhiteListSettingRequest::setValidDay(int validDay) {
  validDay_ = validDay;
  setParameter(std::string("ValidDay"), std::to_string(validDay));
}

std::string InsertWhiteListSettingRequest::getRemark() const {
  return remark_;
}

void InsertWhiteListSettingRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string InsertWhiteListSettingRequest::getCertifyId() const {
  return certifyId_;
}

void InsertWhiteListSettingRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setParameter(std::string("CertifyId"), certifyId);
}

std::string InsertWhiteListSettingRequest::getCertNo() const {
  return certNo_;
}

void InsertWhiteListSettingRequest::setCertNo(const std::string &certNo) {
  certNo_ = certNo;
  setParameter(std::string("CertNo"), certNo);
}

std::string InsertWhiteListSettingRequest::getServiceCode() const {
  return serviceCode_;
}

void InsertWhiteListSettingRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

long InsertWhiteListSettingRequest::getSceneId() const {
  return sceneId_;
}

void InsertWhiteListSettingRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

