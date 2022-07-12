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

#include <alibabacloud/antiddos-public/model/ModifyDdosStatusRequest.h>

using AlibabaCloud::Antiddos_public::Model::ModifyDdosStatusRequest;

ModifyDdosStatusRequest::ModifyDdosStatusRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "ModifyDdosStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDdosStatusRequest::~ModifyDdosStatusRequest() {}

std::string ModifyDdosStatusRequest::getInternetIp() const {
  return internetIp_;
}

void ModifyDdosStatusRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string ModifyDdosStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyDdosStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyDdosStatusRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void ModifyDdosStatusRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string ModifyDdosStatusRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyDdosStatusRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyDdosStatusRequest::getLang() const {
  return lang_;
}

void ModifyDdosStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyDdosStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDdosStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

