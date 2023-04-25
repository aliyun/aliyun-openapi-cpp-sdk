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

#include <alibabacloud/ccc/model/ListCasesRequest.h>

using AlibabaCloud::CCC::Model::ListCasesRequest;

ListCasesRequest::ListCasesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListCases") {
  setMethod(HttpRequest::Method::Post);
}

ListCasesRequest::~ListCasesRequest() {}

std::string ListCasesRequest::getInstanceId() const {
  return instanceId_;
}

void ListCasesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListCasesRequest::getCampaignId() const {
  return campaignId_;
}

void ListCasesRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}

std::string ListCasesRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ListCasesRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

long ListCasesRequest::getPageSize() const {
  return pageSize_;
}

void ListCasesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCasesRequest::getState() const {
  return state_;
}

void ListCasesRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

long ListCasesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCasesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

