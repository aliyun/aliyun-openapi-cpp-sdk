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

#include <alibabacloud/ltl/model/UpdateMPCoSAuthorizedInfoRequest.h>

using AlibabaCloud::Ltl::Model::UpdateMPCoSAuthorizedInfoRequest;

UpdateMPCoSAuthorizedInfoRequest::UpdateMPCoSAuthorizedInfoRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "UpdateMPCoSAuthorizedInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMPCoSAuthorizedInfoRequest::~UpdateMPCoSAuthorizedInfoRequest() {}

std::string UpdateMPCoSAuthorizedInfoRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void UpdateMPCoSAuthorizedInfoRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string UpdateMPCoSAuthorizedInfoRequest::getApiVersion() const {
  return apiVersion_;
}

void UpdateMPCoSAuthorizedInfoRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::map<std::string, std::string> UpdateMPCoSAuthorizedInfoRequest::getAuthorizedPhaseList() const {
  return authorizedPhaseList_;
}

void UpdateMPCoSAuthorizedInfoRequest::setAuthorizedPhaseList(std::map<std::string, std::string> authorizedPhaseList) {
  authorizedPhaseList_ = authorizedPhaseList;
  setParameter(std::string("AuthorizedPhaseList"), authorizedPhaseList);
}

std::string UpdateMPCoSAuthorizedInfoRequest::getBizChainId() const {
  return bizChainId_;
}

void UpdateMPCoSAuthorizedInfoRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UpdateMPCoSAuthorizedInfoRequest::getMemberId() const {
  return memberId_;
}

void UpdateMPCoSAuthorizedInfoRequest::setMemberId(const std::string &memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), memberId);
}

