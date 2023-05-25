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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowsByPageRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListTaskFlowsByPageRequest;

ListTaskFlowsByPageRequest::ListTaskFlowsByPageRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListTaskFlowsByPage") {
  setMethod(HttpRequest::Method::Post);
}

ListTaskFlowsByPageRequest::~ListTaskFlowsByPageRequest() {}

std::string ListTaskFlowsByPageRequest::getSearchKey() const {
  return searchKey_;
}

void ListTaskFlowsByPageRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::vector<ListTaskFlowsByPageRequest::long> ListTaskFlowsByPageRequest::getDagIdList() const {
  return dagIdList_;
}

void ListTaskFlowsByPageRequest::setDagIdList(const std::vector<ListTaskFlowsByPageRequest::long> &dagIdList) {
  dagIdList_ = dagIdList;
  for(int dep1 = 0; dep1 != dagIdList.size(); dep1++) {
    setParameter(std::string("DagIdList") + "." + std::to_string(dep1 + 1), std::to_string(dagIdList[dep1]));
  }
}

long ListTaskFlowsByPageRequest::getTid() const {
  return tid_;
}

void ListTaskFlowsByPageRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListTaskFlowsByPageRequest::getPageSize() const {
  return pageSize_;
}

void ListTaskFlowsByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListTaskFlowsByPageRequest::getPageIndex() const {
  return pageIndex_;
}

void ListTaskFlowsByPageRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

long ListTaskFlowsByPageRequest::getScenarioId() const {
  return scenarioId_;
}

void ListTaskFlowsByPageRequest::setScenarioId(long scenarioId) {
  scenarioId_ = scenarioId;
  setParameter(std::string("ScenarioId"), std::to_string(scenarioId));
}

bool ListTaskFlowsByPageRequest::getNeedLastDagInstance() const {
  return needLastDagInstance_;
}

void ListTaskFlowsByPageRequest::setNeedLastDagInstance(bool needLastDagInstance) {
  needLastDagInstance_ = needLastDagInstance;
  setParameter(std::string("NeedLastDagInstance"), needLastDagInstance ? "true" : "false");
}

