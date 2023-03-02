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

#include <alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoRequest.h>

using AlibabaCloud::Ltl::Model::BatchUploadMPCoSPhaseTextInfoRequest;

BatchUploadMPCoSPhaseTextInfoRequest::BatchUploadMPCoSPhaseTextInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "BatchUploadMPCoSPhaseTextInfo") {
  setMethod(HttpRequest::Method::Post);
}

BatchUploadMPCoSPhaseTextInfoRequest::~BatchUploadMPCoSPhaseTextInfoRequest() {}

std::map<std::string, std::string> BatchUploadMPCoSPhaseTextInfoRequest::getPhaseDataList() const {
  return phaseDataList_;
}

void BatchUploadMPCoSPhaseTextInfoRequest::setPhaseDataList(std::map<std::string, std::string> phaseDataList) {
  phaseDataList_ = phaseDataList;
  setParameter(std::string("PhaseDataList"), phaseDataList);
}

std::string BatchUploadMPCoSPhaseTextInfoRequest::getPhaseId() const {
  return phaseId_;
}

void BatchUploadMPCoSPhaseTextInfoRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string BatchUploadMPCoSPhaseTextInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void BatchUploadMPCoSPhaseTextInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string BatchUploadMPCoSPhaseTextInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void BatchUploadMPCoSPhaseTextInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string BatchUploadMPCoSPhaseTextInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void BatchUploadMPCoSPhaseTextInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

