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

#include <alibabacloud/ccc/model/ListAttemptsRequest.h>

using AlibabaCloud::CCC::Model::ListAttemptsRequest;

ListAttemptsRequest::ListAttemptsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListAttempts") {
  setMethod(HttpRequest::Method::Get);
}

ListAttemptsRequest::~ListAttemptsRequest() {}

std::string ListAttemptsRequest::getContactId() const {
  return contactId_;
}

void ListAttemptsRequest::setContactId(const std::string &contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), contactId);
}

std::string ListAttemptsRequest::getCampaignId() const {
  return campaignId_;
}

void ListAttemptsRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}

std::string ListAttemptsRequest::getCriteria() const {
  return criteria_;
}

void ListAttemptsRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string ListAttemptsRequest::getCallee() const {
  return callee_;
}

void ListAttemptsRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

long ListAttemptsRequest::getStartTime() const {
  return startTime_;
}

void ListAttemptsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListAttemptsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAttemptsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListAttemptsRequest::getPageSize() const {
  return pageSize_;
}

void ListAttemptsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAttemptsRequest::getQueueId() const {
  return queueId_;
}

void ListAttemptsRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string ListAttemptsRequest::getAgentId() const {
  return agentId_;
}

void ListAttemptsRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

long ListAttemptsRequest::getEndTime() const {
  return endTime_;
}

void ListAttemptsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListAttemptsRequest::getCaller() const {
  return caller_;
}

void ListAttemptsRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string ListAttemptsRequest::getInstanceId() const {
  return instanceId_;
}

void ListAttemptsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListAttemptsRequest::getCaseId() const {
  return caseId_;
}

void ListAttemptsRequest::setCaseId(const std::string &caseId) {
  caseId_ = caseId;
  setParameter(std::string("CaseId"), caseId);
}

std::string ListAttemptsRequest::getAttemptId() const {
  return attemptId_;
}

void ListAttemptsRequest::setAttemptId(const std::string &attemptId) {
  attemptId_ = attemptId;
  setParameter(std::string("AttemptId"), attemptId);
}

