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

#include <alibabacloud/dataworks-public/model/ListTopicsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTopicsRequest;

ListTopicsRequest::ListTopicsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListTopics") {
  setMethod(HttpRequest::Method::Post);
}

ListTopicsRequest::~ListTopicsRequest() {}

std::string ListTopicsRequest::getOwner() const {
  return owner_;
}

void ListTopicsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string ListTopicsRequest::getEndTime() const {
  return endTime_;
}

void ListTopicsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string ListTopicsRequest::getBeginTime() const {
  return beginTime_;
}

void ListTopicsRequest::setBeginTime(const std::string &beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), beginTime);
}

std::string ListTopicsRequest::getTopicStatuses() const {
  return topicStatuses_;
}

void ListTopicsRequest::setTopicStatuses(const std::string &topicStatuses) {
  topicStatuses_ = topicStatuses;
  setBodyParameter(std::string("TopicStatuses"), topicStatuses);
}

int ListTopicsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTopicsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListTopicsRequest::getInstanceId() const {
  return instanceId_;
}

void ListTopicsRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), std::to_string(instanceId));
}

int ListTopicsRequest::getPageSize() const {
  return pageSize_;
}

void ListTopicsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTopicsRequest::getTopicTypes() const {
  return topicTypes_;
}

void ListTopicsRequest::setTopicTypes(const std::string &topicTypes) {
  topicTypes_ = topicTypes;
  setBodyParameter(std::string("TopicTypes"), topicTypes);
}

long ListTopicsRequest::getNodeId() const {
  return nodeId_;
}

void ListTopicsRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

