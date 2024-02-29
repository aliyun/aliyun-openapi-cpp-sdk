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

#include <alibabacloud/sddp/model/DisableUserConfigRequest.h>

using AlibabaCloud::Sddp::Model::DisableUserConfigRequest;

DisableUserConfigRequest::DisableUserConfigRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DisableUserConfig") {
  setMethod(HttpRequest::Method::Post);
}

DisableUserConfigRequest::~DisableUserConfigRequest() {}

std::string DisableUserConfigRequest::getCode() const {
  return code_;
}

void DisableUserConfigRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

int DisableUserConfigRequest::getFeatureType() const {
  return featureType_;
}

void DisableUserConfigRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DisableUserConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void DisableUserConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DisableUserConfigRequest::getLang() const {
  return lang_;
}

void DisableUserConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

