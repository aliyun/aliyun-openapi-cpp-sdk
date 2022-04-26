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

#include <alibabacloud/ccc/model/ListCallDetailRecordsRequest.h>

using AlibabaCloud::CCC::Model::ListCallDetailRecordsRequest;

ListCallDetailRecordsRequest::ListCallDetailRecordsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListCallDetailRecords") {
  setMethod(HttpRequest::Method::Post);
}

ListCallDetailRecordsRequest::~ListCallDetailRecordsRequest() {}

std::string ListCallDetailRecordsRequest::getContactId() const {
  return contactId_;
}

void ListCallDetailRecordsRequest::setContactId(const std::string &contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), contactId);
}

std::string ListCallDetailRecordsRequest::getCriteria() const {
  return criteria_;
}

void ListCallDetailRecordsRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string ListCallDetailRecordsRequest::getContactDispositionList() const {
  return contactDispositionList_;
}

void ListCallDetailRecordsRequest::setContactDispositionList(const std::string &contactDispositionList) {
  contactDispositionList_ = contactDispositionList;
  setParameter(std::string("ContactDispositionList"), contactDispositionList);
}

std::string ListCallDetailRecordsRequest::getOrderByField() const {
  return orderByField_;
}

void ListCallDetailRecordsRequest::setOrderByField(const std::string &orderByField) {
  orderByField_ = orderByField;
  setParameter(std::string("OrderByField"), orderByField);
}

long ListCallDetailRecordsRequest::getStartTime() const {
  return startTime_;
}

void ListCallDetailRecordsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListCallDetailRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCallDetailRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCallDetailRecordsRequest::getEarlyMediaStateList() const {
  return earlyMediaStateList_;
}

void ListCallDetailRecordsRequest::setEarlyMediaStateList(const std::string &earlyMediaStateList) {
  earlyMediaStateList_ = earlyMediaStateList;
  setParameter(std::string("EarlyMediaStateList"), earlyMediaStateList);
}

std::string ListCallDetailRecordsRequest::getCalledNumber() const {
  return calledNumber_;
}

void ListCallDetailRecordsRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

std::string ListCallDetailRecordsRequest::getSatisfactionList() const {
  return satisfactionList_;
}

void ListCallDetailRecordsRequest::setSatisfactionList(const std::string &satisfactionList) {
  satisfactionList_ = satisfactionList;
  setParameter(std::string("SatisfactionList"), satisfactionList);
}

int ListCallDetailRecordsRequest::getPageSize() const {
  return pageSize_;
}

void ListCallDetailRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCallDetailRecordsRequest::getSortOrder() const {
  return sortOrder_;
}

void ListCallDetailRecordsRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string ListCallDetailRecordsRequest::getSatisfactionDescriptionList() const {
  return satisfactionDescriptionList_;
}

void ListCallDetailRecordsRequest::setSatisfactionDescriptionList(const std::string &satisfactionDescriptionList) {
  satisfactionDescriptionList_ = satisfactionDescriptionList;
  setParameter(std::string("SatisfactionDescriptionList"), satisfactionDescriptionList);
}

std::string ListCallDetailRecordsRequest::getAgentId() const {
  return agentId_;
}

void ListCallDetailRecordsRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

std::string ListCallDetailRecordsRequest::getContactType() const {
  return contactType_;
}

void ListCallDetailRecordsRequest::setContactType(const std::string &contactType) {
  contactType_ = contactType;
  setParameter(std::string("ContactType"), contactType);
}

std::string ListCallDetailRecordsRequest::getContactTypeList() const {
  return contactTypeList_;
}

void ListCallDetailRecordsRequest::setContactTypeList(const std::string &contactTypeList) {
  contactTypeList_ = contactTypeList;
  setParameter(std::string("ContactTypeList"), contactTypeList);
}

std::string ListCallDetailRecordsRequest::getSatisfactionSurveyChannel() const {
  return satisfactionSurveyChannel_;
}

void ListCallDetailRecordsRequest::setSatisfactionSurveyChannel(const std::string &satisfactionSurveyChannel) {
  satisfactionSurveyChannel_ = satisfactionSurveyChannel;
  setParameter(std::string("SatisfactionSurveyChannel"), satisfactionSurveyChannel);
}

long ListCallDetailRecordsRequest::getEndTime() const {
  return endTime_;
}

void ListCallDetailRecordsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListCallDetailRecordsRequest::getCallingNumber() const {
  return callingNumber_;
}

void ListCallDetailRecordsRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string ListCallDetailRecordsRequest::getContactDisposition() const {
  return contactDisposition_;
}

void ListCallDetailRecordsRequest::setContactDisposition(const std::string &contactDisposition) {
  contactDisposition_ = contactDisposition;
  setParameter(std::string("ContactDisposition"), contactDisposition);
}

std::string ListCallDetailRecordsRequest::getInstanceId() const {
  return instanceId_;
}

void ListCallDetailRecordsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListCallDetailRecordsRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListCallDetailRecordsRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

