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

#include <alibabacloud/ddoscoo/model/ModifyQpsModeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyQpsModeRequest;

ModifyQpsModeRequest::ModifyQpsModeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyQpsMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyQpsModeRequest::~ModifyQpsModeRequest() {}

std::string ModifyQpsModeRequest::getMode() const {
  return mode_;
}

void ModifyQpsModeRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyQpsModeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyQpsModeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyQpsModeRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyQpsModeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

