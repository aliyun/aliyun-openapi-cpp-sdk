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

#include <alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoRequest.h>

using AlibabaCloud::Ltl::Model::UploadMPCoSPhaseTextInfoRequest;

UploadMPCoSPhaseTextInfoRequest::UploadMPCoSPhaseTextInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UploadMPCoSPhaseTextInfo") {
  setMethod(HttpRequest::Method::Post);
}

UploadMPCoSPhaseTextInfoRequest::~UploadMPCoSPhaseTextInfoRequest() {}

std::string UploadMPCoSPhaseTextInfoRequest::getPhaseData() const {
  return phaseData_;
}

void UploadMPCoSPhaseTextInfoRequest::setPhaseData(const std::string &phaseData) {
  phaseData_ = phaseData;
  setParameter(std::string("PhaseData"), phaseData);
}

std::string UploadMPCoSPhaseTextInfoRequest::getPhaseId() const {
  return phaseId_;
}

void UploadMPCoSPhaseTextInfoRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string UploadMPCoSPhaseTextInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void UploadMPCoSPhaseTextInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string UploadMPCoSPhaseTextInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void UploadMPCoSPhaseTextInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UploadMPCoSPhaseTextInfoRequest::getDataKey() const {
  return dataKey_;
}

void UploadMPCoSPhaseTextInfoRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

std::string UploadMPCoSPhaseTextInfoRequest::getDataSeq() const {
  return dataSeq_;
}

void UploadMPCoSPhaseTextInfoRequest::setDataSeq(const std::string &dataSeq) {
  dataSeq_ = dataSeq;
  setParameter(std::string("DataSeq"), dataSeq);
}

std::string UploadMPCoSPhaseTextInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void UploadMPCoSPhaseTextInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::map<std::string, std::string> UploadMPCoSPhaseTextInfoRequest::getRelatedDataList() const {
  return relatedDataList_;
}

void UploadMPCoSPhaseTextInfoRequest::setRelatedDataList(std::map<std::string, std::string> relatedDataList) {
  relatedDataList_ = relatedDataList;
  setParameter(std::string("RelatedDataList"), relatedDataList);
}

