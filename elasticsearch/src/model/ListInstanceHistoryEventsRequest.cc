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

#include <alibabacloud/elasticsearch/model/ListInstanceHistoryEventsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceHistoryEventsRequest;

ListInstanceHistoryEventsRequest::ListInstanceHistoryEventsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/events"};
  setMethod(HttpRequest::Method::Post);
}

ListInstanceHistoryEventsRequest::~ListInstanceHistoryEventsRequest() {}

string ListInstanceHistoryEventsRequest::getEventFinashEndTime() const {
  return eventFinashEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventFinashEndTime(string eventFinashEndTime) {
  eventFinashEndTime_ = eventFinashEndTime;
  setParameter(std::string("eventFinashEndTime"), std::to_string(eventFinashEndTime));
}

string ListInstanceHistoryEventsRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceHistoryEventsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), std::to_string(instanceId));
}

integer ListInstanceHistoryEventsRequest::getSize() const {
  return size_;
}

void ListInstanceHistoryEventsRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListInstanceHistoryEventsRequest::getEventExecuteStartTime() const {
  return eventExecuteStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventExecuteStartTime(string eventExecuteStartTime) {
  eventExecuteStartTime_ = eventExecuteStartTime;
  setParameter(std::string("eventExecuteStartTime"), std::to_string(eventExecuteStartTime));
}

string ListInstanceHistoryEventsRequest::getEventFinashStartTime() const {
  return eventFinashStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventFinashStartTime(string eventFinashStartTime) {
  eventFinashStartTime_ = eventFinashStartTime;
  setParameter(std::string("eventFinashStartTime"), std::to_string(eventFinashStartTime));
}

string ListInstanceHistoryEventsRequest::getNodeIP() const {
  return nodeIP_;
}

void ListInstanceHistoryEventsRequest::setNodeIP(string nodeIP) {
  nodeIP_ = nodeIP;
  setParameter(std::string("nodeIP"), std::to_string(nodeIP));
}

integer ListInstanceHistoryEventsRequest::getPage() const {
  return page_;
}

void ListInstanceHistoryEventsRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListInstanceHistoryEventsRequest::getEventCreateEndTime() const {
  return eventCreateEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventCreateEndTime(string eventCreateEndTime) {
  eventCreateEndTime_ = eventCreateEndTime;
  setParameter(std::string("eventCreateEndTime"), std::to_string(eventCreateEndTime));
}

string ListInstanceHistoryEventsRequest::getEventCreateStartTime() const {
  return eventCreateStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventCreateStartTime(string eventCreateStartTime) {
  eventCreateStartTime_ = eventCreateStartTime;
  setParameter(std::string("eventCreateStartTime"), std::to_string(eventCreateStartTime));
}

string ListInstanceHistoryEventsRequest::getEventExecuteEndTime() const {
  return eventExecuteEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventExecuteEndTime(string eventExecuteEndTime) {
  eventExecuteEndTime_ = eventExecuteEndTime;
  setParameter(std::string("eventExecuteEndTime"), std::to_string(eventExecuteEndTime));
}

