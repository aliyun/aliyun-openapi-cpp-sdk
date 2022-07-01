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

#include <alibabacloud/ddoscoo/model/ModifyBlockStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyBlockStatusRequest;

ModifyBlockStatusRequest::ModifyBlockStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyBlockStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBlockStatusRequest::~ModifyBlockStatusRequest() {}

int ModifyBlockStatusRequest::getDuration() const {
  return duration_;
}

void ModifyBlockStatusRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyBlockStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyBlockStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyBlockStatusRequest::getLang() const {
  return lang_;
}

void ModifyBlockStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<std::string> ModifyBlockStatusRequest::getLines() const {
  return lines_;
}

void ModifyBlockStatusRequest::setLines(const std::vector<std::string> &lines) {
  lines_ = lines;
}

std::string ModifyBlockStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyBlockStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyBlockStatusRequest::getStatus() const {
  return status_;
}

void ModifyBlockStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

