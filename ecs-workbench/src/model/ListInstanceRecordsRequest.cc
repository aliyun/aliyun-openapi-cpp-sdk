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

#include <alibabacloud/ecs-workbench/model/ListInstanceRecordsRequest.h>

using AlibabaCloud::Ecs_workbench::Model::ListInstanceRecordsRequest;

ListInstanceRecordsRequest::ListInstanceRecordsRequest()
    : RpcServiceRequest("ecs-workbench", "2022-02-20", "ListInstanceRecords") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceRecordsRequest::~ListInstanceRecordsRequest() {}

int ListInstanceRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstanceRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInstanceRecordsRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceRecordsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ListInstanceRecordsRequest::getRegionId() const {
  return regionId_;
}

void ListInstanceRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListInstanceRecordsRequest::getPageSize() const {
  return pageSize_;
}

void ListInstanceRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

