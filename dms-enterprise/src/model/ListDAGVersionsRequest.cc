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

#include <alibabacloud/dms-enterprise/model/ListDAGVersionsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDAGVersionsRequest;

ListDAGVersionsRequest::ListDAGVersionsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDAGVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListDAGVersionsRequest::~ListDAGVersionsRequest() {}

long ListDAGVersionsRequest::getDagId() const {
  return dagId_;
}

void ListDAGVersionsRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ListDAGVersionsRequest::getTid() const {
  return tid_;
}

void ListDAGVersionsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListDAGVersionsRequest::getPageSize() const {
  return pageSize_;
}

void ListDAGVersionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListDAGVersionsRequest::getPageIndex() const {
  return pageIndex_;
}

void ListDAGVersionsRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

