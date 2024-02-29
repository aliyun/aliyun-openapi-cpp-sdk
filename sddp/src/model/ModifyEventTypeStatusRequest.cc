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

#include <alibabacloud/sddp/model/ModifyEventTypeStatusRequest.h>

using AlibabaCloud::Sddp::Model::ModifyEventTypeStatusRequest;

ModifyEventTypeStatusRequest::ModifyEventTypeStatusRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "ModifyEventTypeStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEventTypeStatusRequest::~ModifyEventTypeStatusRequest() {}

std::string ModifyEventTypeStatusRequest::getSubTypeIds() const {
  return subTypeIds_;
}

void ModifyEventTypeStatusRequest::setSubTypeIds(const std::string &subTypeIds) {
  subTypeIds_ = subTypeIds;
  setParameter(std::string("SubTypeIds"), subTypeIds);
}

int ModifyEventTypeStatusRequest::getFeatureType() const {
  return featureType_;
}

void ModifyEventTypeStatusRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string ModifyEventTypeStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyEventTypeStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyEventTypeStatusRequest::getLang() const {
  return lang_;
}

void ModifyEventTypeStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

