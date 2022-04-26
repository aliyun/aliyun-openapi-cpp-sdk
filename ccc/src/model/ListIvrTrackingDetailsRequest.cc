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

#include <alibabacloud/ccc/model/ListIvrTrackingDetailsRequest.h>

using AlibabaCloud::CCC::Model::ListIvrTrackingDetailsRequest;

ListIvrTrackingDetailsRequest::ListIvrTrackingDetailsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListIvrTrackingDetails") {
  setMethod(HttpRequest::Method::Post);
}

ListIvrTrackingDetailsRequest::~ListIvrTrackingDetailsRequest() {}

std::string ListIvrTrackingDetailsRequest::getContactId() const {
  return contactId_;
}

void ListIvrTrackingDetailsRequest::setContactId(const std::string &contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), contactId);
}

int ListIvrTrackingDetailsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListIvrTrackingDetailsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListIvrTrackingDetailsRequest::getInstanceId() const {
  return instanceId_;
}

void ListIvrTrackingDetailsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListIvrTrackingDetailsRequest::getPageSize() const {
  return pageSize_;
}

void ListIvrTrackingDetailsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

