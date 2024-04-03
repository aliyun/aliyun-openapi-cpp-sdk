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

#include <alibabacloud/alikafka/model/QueryMessageRequest.h>

using AlibabaCloud::Alikafka::Model::QueryMessageRequest;

QueryMessageRequest::QueryMessageRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "QueryMessage") {
  setMethod(HttpRequest::Method::Get);
}

QueryMessageRequest::~QueryMessageRequest() {}

std::string QueryMessageRequest::getOffset() const {
  return offset_;
}

void QueryMessageRequest::setOffset(const std::string &offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), offset);
}

long QueryMessageRequest::getBeginTime() const {
  return beginTime_;
}

void QueryMessageRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string QueryMessageRequest::getInstanceId() const {
  return instanceId_;
}

void QueryMessageRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryMessageRequest::getPartition() const {
  return partition_;
}

void QueryMessageRequest::setPartition(const std::string &partition) {
  partition_ = partition;
  setParameter(std::string("Partition"), partition);
}

std::string QueryMessageRequest::getRegionId() const {
  return regionId_;
}

void QueryMessageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryMessageRequest::getTopic() const {
  return topic_;
}

void QueryMessageRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

std::string QueryMessageRequest::getQueryType() const {
  return queryType_;
}

void QueryMessageRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

