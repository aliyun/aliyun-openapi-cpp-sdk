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

#include <alibabacloud/alikafka/model/GetConsumerListRequest.h>

using AlibabaCloud::Alikafka::Model::GetConsumerListRequest;

GetConsumerListRequest::GetConsumerListRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "GetConsumerList") {
  setMethod(HttpRequest::Method::Post);
}

GetConsumerListRequest::~GetConsumerListRequest() {}

std::string GetConsumerListRequest::getConsumerId() const {
  return consumerId_;
}

void GetConsumerListRequest::setConsumerId(const std::string &consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), consumerId);
}

int GetConsumerListRequest::getCurrentPage() const {
  return currentPage_;
}

void GetConsumerListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string GetConsumerListRequest::getInstanceId() const {
  return instanceId_;
}

void GetConsumerListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetConsumerListRequest::getRegionId() const {
  return regionId_;
}

void GetConsumerListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetConsumerListRequest::getPageSize() const {
  return pageSize_;
}

void GetConsumerListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

