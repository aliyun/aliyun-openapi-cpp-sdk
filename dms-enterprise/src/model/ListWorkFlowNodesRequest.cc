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

#include <alibabacloud/dms-enterprise/model/ListWorkFlowNodesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListWorkFlowNodesRequest;

ListWorkFlowNodesRequest::ListWorkFlowNodesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListWorkFlowNodes") {
  setMethod(HttpRequest::Method::Post);
}

ListWorkFlowNodesRequest::~ListWorkFlowNodesRequest() {}

std::string ListWorkFlowNodesRequest::getSearchName() const {
  return searchName_;
}

void ListWorkFlowNodesRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

long ListWorkFlowNodesRequest::getTid() const {
  return tid_;
}

void ListWorkFlowNodesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

