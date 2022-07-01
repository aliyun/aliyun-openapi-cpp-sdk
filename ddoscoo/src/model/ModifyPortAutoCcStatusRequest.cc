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

#include <alibabacloud/ddoscoo/model/ModifyPortAutoCcStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyPortAutoCcStatusRequest;

ModifyPortAutoCcStatusRequest::ModifyPortAutoCcStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyPortAutoCcStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPortAutoCcStatusRequest::~ModifyPortAutoCcStatusRequest() {}

std::string ModifyPortAutoCcStatusRequest::get_Switch() const {
  return _switch_;
}

void ModifyPortAutoCcStatusRequest::set_Switch(const std::string &_switch) {
  _switch_ = _switch;
  setParameter(std::string("Switch"), _switch);
}

std::string ModifyPortAutoCcStatusRequest::getMode() const {
  return mode_;
}

void ModifyPortAutoCcStatusRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyPortAutoCcStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyPortAutoCcStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyPortAutoCcStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyPortAutoCcStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyPortAutoCcStatusRequest::getLang() const {
  return lang_;
}

void ModifyPortAutoCcStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

