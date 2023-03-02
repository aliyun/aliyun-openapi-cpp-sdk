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

#include <alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoRequest.h>

using AlibabaCloud::Ltl::Model::BatchUploadMPCoSPhaseDigestInfoRequest;

BatchUploadMPCoSPhaseDigestInfoRequest::BatchUploadMPCoSPhaseDigestInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "BatchUploadMPCoSPhaseDigestInfo") {
  setMethod(HttpRequest::Method::Post);
}

BatchUploadMPCoSPhaseDigestInfoRequest::~BatchUploadMPCoSPhaseDigestInfoRequest() {}

std::map<std::string, std::string> BatchUploadMPCoSPhaseDigestInfoRequest::getPhaseDataList() const {
  return phaseDataList_;
}

void BatchUploadMPCoSPhaseDigestInfoRequest::setPhaseDataList(std::map<std::string, std::string> phaseDataList) {
  phaseDataList_ = phaseDataList;
  setParameter(std::string("PhaseDataList"), phaseDataList);
}

std::string BatchUploadMPCoSPhaseDigestInfoRequest::getPhaseId() const {
  return phaseId_;
}

void BatchUploadMPCoSPhaseDigestInfoRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string BatchUploadMPCoSPhaseDigestInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void BatchUploadMPCoSPhaseDigestInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string BatchUploadMPCoSPhaseDigestInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void BatchUploadMPCoSPhaseDigestInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string BatchUploadMPCoSPhaseDigestInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void BatchUploadMPCoSPhaseDigestInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

