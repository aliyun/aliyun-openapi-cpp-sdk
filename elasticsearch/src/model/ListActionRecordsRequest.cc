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

#include <alibabacloud/elasticsearch/model/ListActionRecordsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListActionRecordsRequest;

ListActionRecordsRequest::ListActionRecordsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/action-records"};
  setMethod(HttpRequest::Method::Get);
}

ListActionRecordsRequest::~ListActionRecordsRequest() {}

string ListActionRecordsRequest::getFilter() const {
  return filter_;
}

void ListActionRecordsRequest::setFilter(string filter) {
  filter_ = filter;
  setParameter(std::string("filter"), std::to_string(filter));
}

string ListActionRecordsRequest::getActionNames() const {
  return actionNames_;
}

void ListActionRecordsRequest::setActionNames(string actionNames) {
  actionNames_ = actionNames;
  setParameter(std::string("actionNames"), std::to_string(actionNames));
}

string ListActionRecordsRequest::getInstanceId() const {
  return instanceId_;
}

void ListActionRecordsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

integer ListActionRecordsRequest::getSize() const {
  return size_;
}

void ListActionRecordsRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListActionRecordsRequest::getRequestId() const {
  return requestId_;
}

void ListActionRecordsRequest::setRequestId(string requestId) {
  requestId_ = requestId;
  setParameter(std::string("requestId"), std::to_string(requestId));
}

integer ListActionRecordsRequest::getEndTime() const {
  return endTime_;
}

void ListActionRecordsRequest::setEndTime(integer endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

integer ListActionRecordsRequest::getPage() const {
  return page_;
}

void ListActionRecordsRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

integer ListActionRecordsRequest::getStartTime() const {
  return startTime_;
}

void ListActionRecordsRequest::setStartTime(integer startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

string ListActionRecordsRequest::getUserId() const {
  return userId_;
}

void ListActionRecordsRequest::setUserId(string userId) {
  userId_ = userId;
  setParameter(std::string("userId"), std::to_string(userId));
}

