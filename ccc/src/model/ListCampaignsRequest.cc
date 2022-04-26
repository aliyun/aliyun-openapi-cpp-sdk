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

#include <alibabacloud/ccc/model/ListCampaignsRequest.h>

using AlibabaCloud::CCC::Model::ListCampaignsRequest;

ListCampaignsRequest::ListCampaignsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListCampaigns") {
  setMethod(HttpRequest::Method::Post);
}

ListCampaignsRequest::~ListCampaignsRequest() {}

std::string ListCampaignsRequest::getActualStartTimeTo() const {
  return actualStartTimeTo_;
}

void ListCampaignsRequest::setActualStartTimeTo(const std::string &actualStartTimeTo) {
  actualStartTimeTo_ = actualStartTimeTo;
  setParameter(std::string("ActualStartTimeTo"), actualStartTimeTo);
}

std::string ListCampaignsRequest::getQueueId() const {
  return queueId_;
}

void ListCampaignsRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string ListCampaignsRequest::getActualStartTimeFrom() const {
  return actualStartTimeFrom_;
}

void ListCampaignsRequest::setActualStartTimeFrom(const std::string &actualStartTimeFrom) {
  actualStartTimeFrom_ = actualStartTimeFrom;
  setParameter(std::string("ActualStartTimeFrom"), actualStartTimeFrom);
}

long ListCampaignsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCampaignsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCampaignsRequest::getPlanedStartTimeFrom() const {
  return planedStartTimeFrom_;
}

void ListCampaignsRequest::setPlanedStartTimeFrom(const std::string &planedStartTimeFrom) {
  planedStartTimeFrom_ = planedStartTimeFrom;
  setParameter(std::string("PlanedStartTimeFrom"), planedStartTimeFrom);
}

std::string ListCampaignsRequest::getInstanceId() const {
  return instanceId_;
}

void ListCampaignsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListCampaignsRequest::getName() const {
  return name_;
}

void ListCampaignsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long ListCampaignsRequest::getPageSize() const {
  return pageSize_;
}

void ListCampaignsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCampaignsRequest::getPlanedStartTimeTo() const {
  return planedStartTimeTo_;
}

void ListCampaignsRequest::setPlanedStartTimeTo(const std::string &planedStartTimeTo) {
  planedStartTimeTo_ = planedStartTimeTo;
  setParameter(std::string("PlanedStartTimeTo"), planedStartTimeTo);
}

std::string ListCampaignsRequest::getState() const {
  return state_;
}

void ListCampaignsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

