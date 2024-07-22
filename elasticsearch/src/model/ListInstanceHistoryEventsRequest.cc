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

std::string ListInstanceHistoryEventsRequest::getEventFinashEndTime() const {
  return eventFinashEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventFinashEndTime(const std::string &eventFinashEndTime) {
  eventFinashEndTime_ = eventFinashEndTime;
  setParameter(std::string("eventFinashEndTime"), eventFinashEndTime);
}

std::string ListInstanceHistoryEventsRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceHistoryEventsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

int ListInstanceHistoryEventsRequest::getSize() const {
  return size_;
}

void ListInstanceHistoryEventsRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListInstanceHistoryEventsRequest::getEventExecuteStartTime() const {
  return eventExecuteStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventExecuteStartTime(const std::string &eventExecuteStartTime) {
  eventExecuteStartTime_ = eventExecuteStartTime;
  setParameter(std::string("eventExecuteStartTime"), eventExecuteStartTime);
}

std::string ListInstanceHistoryEventsRequest::getEventFinashStartTime() const {
  return eventFinashStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventFinashStartTime(const std::string &eventFinashStartTime) {
  eventFinashStartTime_ = eventFinashStartTime;
  setParameter(std::string("eventFinashStartTime"), eventFinashStartTime);
}

std::string ListInstanceHistoryEventsRequest::getNodeIP() const {
  return nodeIP_;
}

void ListInstanceHistoryEventsRequest::setNodeIP(const std::string &nodeIP) {
  nodeIP_ = nodeIP;
  setParameter(std::string("nodeIP"), nodeIP);
}

int ListInstanceHistoryEventsRequest::getPage() const {
  return page_;
}

void ListInstanceHistoryEventsRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListInstanceHistoryEventsRequest::getEventCreateEndTime() const {
  return eventCreateEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventCreateEndTime(const std::string &eventCreateEndTime) {
  eventCreateEndTime_ = eventCreateEndTime;
  setParameter(std::string("eventCreateEndTime"), eventCreateEndTime);
}

std::string ListInstanceHistoryEventsRequest::getBody() const {
  return body_;
}

void ListInstanceHistoryEventsRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string ListInstanceHistoryEventsRequest::getEventCreateStartTime() const {
  return eventCreateStartTime_;
}

void ListInstanceHistoryEventsRequest::setEventCreateStartTime(const std::string &eventCreateStartTime) {
  eventCreateStartTime_ = eventCreateStartTime;
  setParameter(std::string("eventCreateStartTime"), eventCreateStartTime);
}

std::string ListInstanceHistoryEventsRequest::getEventExecuteEndTime() const {
  return eventExecuteEndTime_;
}

void ListInstanceHistoryEventsRequest::setEventExecuteEndTime(const std::string &eventExecuteEndTime) {
  eventExecuteEndTime_ = eventExecuteEndTime;
  setParameter(std::string("eventExecuteEndTime"), eventExecuteEndTime);
}

