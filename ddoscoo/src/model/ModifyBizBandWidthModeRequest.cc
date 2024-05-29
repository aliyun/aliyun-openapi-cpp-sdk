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

#include <alibabacloud/ddoscoo/model/ModifyBizBandWidthModeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyBizBandWidthModeRequest;

ModifyBizBandWidthModeRequest::ModifyBizBandWidthModeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyBizBandWidthMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBizBandWidthModeRequest::~ModifyBizBandWidthModeRequest() {}

std::string ModifyBizBandWidthModeRequest::getMode() const {
  return mode_;
}

void ModifyBizBandWidthModeRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyBizBandWidthModeRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyBizBandWidthModeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyBizBandWidthModeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyBizBandWidthModeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

