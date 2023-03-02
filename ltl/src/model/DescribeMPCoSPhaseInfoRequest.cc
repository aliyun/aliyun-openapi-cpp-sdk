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

#include <alibabacloud/ltl/model/DescribeMPCoSPhaseInfoRequest.h>

using AlibabaCloud::Ltl::Model::DescribeMPCoSPhaseInfoRequest;

DescribeMPCoSPhaseInfoRequest::DescribeMPCoSPhaseInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "DescribeMPCoSPhaseInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMPCoSPhaseInfoRequest::~DescribeMPCoSPhaseInfoRequest() {}

std::string DescribeMPCoSPhaseInfoRequest::getDataKey() const {
  return dataKey_;
}

void DescribeMPCoSPhaseInfoRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

std::string DescribeMPCoSPhaseInfoRequest::getDataSeq() const {
  return dataSeq_;
}

void DescribeMPCoSPhaseInfoRequest::setDataSeq(const std::string &dataSeq) {
  dataSeq_ = dataSeq;
  setParameter(std::string("DataSeq"), dataSeq);
}

std::string DescribeMPCoSPhaseInfoRequest::getPhaseId() const {
  return phaseId_;
}

void DescribeMPCoSPhaseInfoRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string DescribeMPCoSPhaseInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void DescribeMPCoSPhaseInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string DescribeMPCoSPhaseInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void DescribeMPCoSPhaseInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string DescribeMPCoSPhaseInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void DescribeMPCoSPhaseInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

