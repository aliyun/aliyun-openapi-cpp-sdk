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

#include <alibabacloud/governance/model/ListEvaluationScoreHistoryRequest.h>

using AlibabaCloud::Governance::Model::ListEvaluationScoreHistoryRequest;

ListEvaluationScoreHistoryRequest::ListEvaluationScoreHistoryRequest()
    : RpcServiceRequest("governance", "2021-01-20", "ListEvaluationScoreHistory") {
  setMethod(HttpRequest::Method::Post);
}

ListEvaluationScoreHistoryRequest::~ListEvaluationScoreHistoryRequest() {}

std::string ListEvaluationScoreHistoryRequest::getStartDate() const {
  return startDate_;
}

void ListEvaluationScoreHistoryRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string ListEvaluationScoreHistoryRequest::getRegionId() const {
  return regionId_;
}

void ListEvaluationScoreHistoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEvaluationScoreHistoryRequest::getPartnerCode() const {
  return partnerCode_;
}

void ListEvaluationScoreHistoryRequest::setPartnerCode(const std::string &partnerCode) {
  partnerCode_ = partnerCode;
  setParameter(std::string("PartnerCode"), partnerCode);
}

std::string ListEvaluationScoreHistoryRequest::getEndDate() const {
  return endDate_;
}

void ListEvaluationScoreHistoryRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

bool ListEvaluationScoreHistoryRequest::getShowScoreDiff() const {
  return showScoreDiff_;
}

void ListEvaluationScoreHistoryRequest::setShowScoreDiff(bool showScoreDiff) {
  showScoreDiff_ = showScoreDiff;
  setParameter(std::string("ShowScoreDiff"), showScoreDiff ? "true" : "false");
}

