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

#include <alibabacloud/sddp/model/ManualTriggerMaskingProcessRequest.h>

using AlibabaCloud::Sddp::Model::ManualTriggerMaskingProcessRequest;

ManualTriggerMaskingProcessRequest::ManualTriggerMaskingProcessRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "ManualTriggerMaskingProcess") {
  setMethod(HttpRequest::Method::Post);
}

ManualTriggerMaskingProcessRequest::~ManualTriggerMaskingProcessRequest() {}

int ManualTriggerMaskingProcessRequest::getFeatureType() const {
  return featureType_;
}

void ManualTriggerMaskingProcessRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string ManualTriggerMaskingProcessRequest::getSourceIp() const {
  return sourceIp_;
}

void ManualTriggerMaskingProcessRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ManualTriggerMaskingProcessRequest::getId() const {
  return id_;
}

void ManualTriggerMaskingProcessRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string ManualTriggerMaskingProcessRequest::getLang() const {
  return lang_;
}

void ManualTriggerMaskingProcessRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

