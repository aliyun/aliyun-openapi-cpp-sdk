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

#include <alibabacloud/dms-enterprise/model/BackFillRequest.h>

using AlibabaCloud::Dms_enterprise::Model::BackFillRequest;

BackFillRequest::BackFillRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "BackFill") {
  setMethod(HttpRequest::Method::Post);
}

BackFillRequest::~BackFillRequest() {}

long BackFillRequest::getDagId() const {
  return dagId_;
}

void BackFillRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long BackFillRequest::getTid() const {
  return tid_;
}

void BackFillRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

bool BackFillRequest::getIsTriggerSubTree() const {
  return isTriggerSubTree_;
}

void BackFillRequest::setIsTriggerSubTree(bool isTriggerSubTree) {
  isTriggerSubTree_ = isTriggerSubTree;
  setParameter(std::string("IsTriggerSubTree"), isTriggerSubTree ? "true" : "false");
}

std::string BackFillRequest::getBackFillDateEnd() const {
  return backFillDateEnd_;
}

void BackFillRequest::setBackFillDateEnd(const std::string &backFillDateEnd) {
  backFillDateEnd_ = backFillDateEnd;
  setParameter(std::string("BackFillDateEnd"), backFillDateEnd);
}

long BackFillRequest::getHistoryDagId() const {
  return historyDagId_;
}

void BackFillRequest::setHistoryDagId(long historyDagId) {
  historyDagId_ = historyDagId;
  setParameter(std::string("HistoryDagId"), std::to_string(historyDagId));
}

std::vector<BackFillRequest::long> BackFillRequest::getStartNodeIds() const {
  return startNodeIds_;
}

void BackFillRequest::setStartNodeIds(const std::vector<BackFillRequest::long> &startNodeIds) {
  startNodeIds_ = startNodeIds;
  for(int dep1 = 0; dep1 != startNodeIds.size(); dep1++) {
    setParameter(std::string("StartNodeIds") + "." + std::to_string(dep1 + 1), std::to_string(startNodeIds[dep1]));
  }
}

std::vector<BackFillRequest::long> BackFillRequest::getFilterNodeIds() const {
  return filterNodeIds_;
}

void BackFillRequest::setFilterNodeIds(const std::vector<BackFillRequest::long> &filterNodeIds) {
  filterNodeIds_ = filterNodeIds;
  for(int dep1 = 0; dep1 != filterNodeIds.size(); dep1++) {
    setParameter(std::string("FilterNodeIds") + "." + std::to_string(dep1 + 1), std::to_string(filterNodeIds[dep1]));
  }
}

std::string BackFillRequest::getBackFillDateBegin() const {
  return backFillDateBegin_;
}

void BackFillRequest::setBackFillDateBegin(const std::string &backFillDateBegin) {
  backFillDateBegin_ = backFillDateBegin;
  setParameter(std::string("BackFillDateBegin"), backFillDateBegin);
}

std::string BackFillRequest::getBackFillDate() const {
  return backFillDate_;
}

void BackFillRequest::setBackFillDate(const std::string &backFillDate) {
  backFillDate_ = backFillDate;
  setParameter(std::string("BackFillDate"), backFillDate);
}

bool BackFillRequest::getAsc() const {
  return asc_;
}

void BackFillRequest::setAsc(bool asc) {
  asc_ = asc;
  setParameter(std::string("Asc"), asc ? "true" : "false");
}

int BackFillRequest::getInterval() const {
  return interval_;
}

void BackFillRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

