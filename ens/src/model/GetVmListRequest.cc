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

#include <alibabacloud/ens/model/GetVmListRequest.h>

using AlibabaCloud::Ens::Model::GetVmListRequest;

GetVmListRequest::GetVmListRequest()
    : RpcServiceRequest("ens", "2017-11-10", "GetVmList") {
  setMethod(HttpRequest::Method::Get);
}

GetVmListRequest::~GetVmListRequest() {}

std::string GetVmListRequest::getInstanceUuid() const {
  return instanceUuid_;
}

void GetVmListRequest::setInstanceUuid(const std::string &instanceUuid) {
  instanceUuid_ = instanceUuid;
  setParameter(std::string("InstanceUuid"), instanceUuid);
}

int GetVmListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetVmListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetVmListRequest::getGroupUuid() const {
  return groupUuid_;
}

void GetVmListRequest::setGroupUuid(const std::string &groupUuid) {
  groupUuid_ = groupUuid;
  setParameter(std::string("GroupUuid"), groupUuid);
}

int GetVmListRequest::getPageSize() const {
  return pageSize_;
}

void GetVmListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long GetVmListRequest::getAliUid() const {
  return aliUid_;
}

void GetVmListRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

std::string GetVmListRequest::getWorkloadUuid() const {
  return workloadUuid_;
}

void GetVmListRequest::setWorkloadUuid(const std::string &workloadUuid) {
  workloadUuid_ = workloadUuid;
  setParameter(std::string("WorkloadUuid"), workloadUuid);
}

