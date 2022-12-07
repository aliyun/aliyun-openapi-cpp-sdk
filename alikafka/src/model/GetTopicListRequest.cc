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

#include <alibabacloud/alikafka/model/GetTopicListRequest.h>

using AlibabaCloud::Alikafka::Model::GetTopicListRequest;

GetTopicListRequest::GetTopicListRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "GetTopicList") {
  setMethod(HttpRequest::Method::Post);
}

GetTopicListRequest::~GetTopicListRequest() {}

std::string GetTopicListRequest::getCurrentPage() const {
  return currentPage_;
}

void GetTopicListRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string GetTopicListRequest::getInstanceId() const {
  return instanceId_;
}

void GetTopicListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetTopicListRequest::getRegionId() const {
  return regionId_;
}

void GetTopicListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetTopicListRequest::getPageSize() const {
  return pageSize_;
}

void GetTopicListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string GetTopicListRequest::getTopic() const {
  return topic_;
}

void GetTopicListRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

