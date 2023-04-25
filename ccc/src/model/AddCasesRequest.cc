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

#include <alibabacloud/ccc/model/AddCasesRequest.h>

using AlibabaCloud::CCC::Model::AddCasesRequest;

AddCasesRequest::AddCasesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AddCases") {
  setMethod(HttpRequest::Method::Post);
}

AddCasesRequest::~AddCasesRequest() {}

std::string AddCasesRequest::getInstanceId() const {
  return instanceId_;
}

void AddCasesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddCasesRequest::getCampaignId() const {
  return campaignId_;
}

void AddCasesRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}

std::vector<AddCasesRequest::CaseList> AddCasesRequest::getCaseList() const {
  return caseList_;
}

void AddCasesRequest::setCaseList(const std::vector<AddCasesRequest::CaseList> &caseList) {
  caseList_ = caseList;
  for(int dep1 = 0; dep1 != caseList.size(); dep1++) {
    setParameter(std::string("CaseList") + "." + std::to_string(dep1 + 1) + ".CustomVariables", caseList[dep1].customVariables);
    setParameter(std::string("CaseList") + "." + std::to_string(dep1 + 1) + ".Caller", caseList[dep1].caller);
    setParameter(std::string("CaseList") + "." + std::to_string(dep1 + 1) + ".PhoneNumber", caseList[dep1].phoneNumber);
    setParameter(std::string("CaseList") + "." + std::to_string(dep1 + 1) + ".MaskedCallee", caseList[dep1].maskedCallee);
    setParameter(std::string("CaseList") + "." + std::to_string(dep1 + 1) + ".ReferenceId", caseList[dep1].referenceId);
  }
}

