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

#include <alibabacloud/ddoscoo/model/ConfigLayer4RealLimitRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer4RealLimitRequest;

ConfigLayer4RealLimitRequest::ConfigLayer4RealLimitRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigLayer4RealLimit") {
  setMethod(HttpRequest::Method::Post);
}

ConfigLayer4RealLimitRequest::~ConfigLayer4RealLimitRequest() {}

std::string ConfigLayer4RealLimitRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigLayer4RealLimitRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ConfigLayer4RealLimitRequest::getLimitValue() const {
  return limitValue_;
}

void ConfigLayer4RealLimitRequest::setLimitValue(long limitValue) {
  limitValue_ = limitValue;
  setParameter(std::string("LimitValue"), std::to_string(limitValue));
}

std::string ConfigLayer4RealLimitRequest::getInstanceId() const {
  return instanceId_;
}

void ConfigLayer4RealLimitRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

