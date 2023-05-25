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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListTaskFlowInstanceRequest;

ListTaskFlowInstanceRequest::ListTaskFlowInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListTaskFlowInstance") {
  setMethod(HttpRequest::Method::Post);
}

ListTaskFlowInstanceRequest::~ListTaskFlowInstanceRequest() {}

bool ListTaskFlowInstanceRequest::getUseBizDate() const {
  return useBizDate_;
}

void ListTaskFlowInstanceRequest::setUseBizDate(bool useBizDate) {
  useBizDate_ = useBizDate;
  setParameter(std::string("UseBizDate"), useBizDate ? "true" : "false");
}

int ListTaskFlowInstanceRequest::getTriggerType() const {
  return triggerType_;
}

void ListTaskFlowInstanceRequest::setTriggerType(int triggerType) {
  triggerType_ = triggerType;
  setParameter(std::string("TriggerType"), std::to_string(triggerType));
}

long ListTaskFlowInstanceRequest::getDagId() const {
  return dagId_;
}

void ListTaskFlowInstanceRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ListTaskFlowInstanceRequest::getTid() const {
  return tid_;
}

void ListTaskFlowInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListTaskFlowInstanceRequest::getPageSize() const {
  return pageSize_;
}

void ListTaskFlowInstanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListTaskFlowInstanceRequest::getPageIndex() const {
  return pageIndex_;
}

void ListTaskFlowInstanceRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string ListTaskFlowInstanceRequest::getStartTimeBegin() const {
  return startTimeBegin_;
}

void ListTaskFlowInstanceRequest::setStartTimeBegin(const std::string &startTimeBegin) {
  startTimeBegin_ = startTimeBegin;
  setParameter(std::string("StartTimeBegin"), startTimeBegin);
}

std::string ListTaskFlowInstanceRequest::getStartTimeEnd() const {
  return startTimeEnd_;
}

void ListTaskFlowInstanceRequest::setStartTimeEnd(const std::string &startTimeEnd) {
  startTimeEnd_ = startTimeEnd;
  setParameter(std::string("StartTimeEnd"), startTimeEnd);
}

int ListTaskFlowInstanceRequest::getStatus() const {
  return status_;
}

void ListTaskFlowInstanceRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

