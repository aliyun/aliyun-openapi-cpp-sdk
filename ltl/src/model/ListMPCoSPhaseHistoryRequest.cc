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

#include <alibabacloud/ltl/model/ListMPCoSPhaseHistoryRequest.h>

using AlibabaCloud::Ltl::Model::ListMPCoSPhaseHistoryRequest;

ListMPCoSPhaseHistoryRequest::ListMPCoSPhaseHistoryRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ListMPCoSPhaseHistory") {
  setMethod(HttpRequest::Method::Post);
}

ListMPCoSPhaseHistoryRequest::~ListMPCoSPhaseHistoryRequest() {}

int ListMPCoSPhaseHistoryRequest::getNum() const {
  return num_;
}

void ListMPCoSPhaseHistoryRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListMPCoSPhaseHistoryRequest::getPhaseId() const {
  return phaseId_;
}

void ListMPCoSPhaseHistoryRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

long ListMPCoSPhaseHistoryRequest::getEndTime() const {
  return endTime_;
}

void ListMPCoSPhaseHistoryRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListMPCoSPhaseHistoryRequest::getApiVersion() const {
  return apiVersion_;
}

void ListMPCoSPhaseHistoryRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

long ListMPCoSPhaseHistoryRequest::getStartTime() const {
  return startTime_;
}

void ListMPCoSPhaseHistoryRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListMPCoSPhaseHistoryRequest::getBizChainId() const {
  return bizChainId_;
}

void ListMPCoSPhaseHistoryRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string ListMPCoSPhaseHistoryRequest::getDataKey() const {
  return dataKey_;
}

void ListMPCoSPhaseHistoryRequest::setDataKey(const std::string &dataKey) {
  dataKey_ = dataKey;
  setParameter(std::string("DataKey"), dataKey);
}

int ListMPCoSPhaseHistoryRequest::getSize() const {
  return size_;
}

void ListMPCoSPhaseHistoryRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListMPCoSPhaseHistoryRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void ListMPCoSPhaseHistoryRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

