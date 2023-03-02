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

#include <alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoRequest.h>

using AlibabaCloud::Ltl::Model::UploadMPCoSPhaseDigestInfoRequest;

UploadMPCoSPhaseDigestInfoRequest::UploadMPCoSPhaseDigestInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UploadMPCoSPhaseDigestInfo") {
  setMethod(HttpRequest::Method::Post);
}

UploadMPCoSPhaseDigestInfoRequest::~UploadMPCoSPhaseDigestInfoRequest() {}

std::string UploadMPCoSPhaseDigestInfoRequest::getPhaseData() const {
  return phaseData_;
}

void UploadMPCoSPhaseDigestInfoRequest::setPhaseData(const std::string &phaseData) {
  phaseData_ = phaseData;
  setParameter(std::string("PhaseData"), phaseData);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getPhaseId() const {
  return phaseId_;
}

void UploadMPCoSPhaseDigestInfoRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void UploadMPCoSPhaseDigestInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void UploadMPCoSPhaseDigestInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getDataKey() const {
  return dataKey_;
}

void UploadMPCoSPhaseDigestInfoRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getDataSeq() const {
  return dataSeq_;
}

void UploadMPCoSPhaseDigestInfoRequest::setDataSeq(const std::string &dataSeq) {
  dataSeq_ = dataSeq;
  setParameter(std::string("DataSeq"), dataSeq);
}

std::string UploadMPCoSPhaseDigestInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void UploadMPCoSPhaseDigestInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::map<std::string, std::string> UploadMPCoSPhaseDigestInfoRequest::getRelatedDataList() const {
  return relatedDataList_;
}

void UploadMPCoSPhaseDigestInfoRequest::setRelatedDataList(std::map<std::string, std::string> relatedDataList) {
  relatedDataList_ = relatedDataList;
  setParameter(std::string("RelatedDataList"), relatedDataList);
}

