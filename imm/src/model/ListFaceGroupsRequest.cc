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

#include <alibabacloud/imm/model/ListFaceGroupsRequest.h>

using AlibabaCloud::Imm::Model::ListFaceGroupsRequest;

ListFaceGroupsRequest::ListFaceGroupsRequest()
    : RpcServiceRequest("imm", "2017-09-06", "ListFaceGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListFaceGroupsRequest::~ListFaceGroupsRequest() {}

std::string ListFaceGroupsRequest::getProject() const {
  return project_;
}

void ListFaceGroupsRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string ListFaceGroupsRequest::getRemarksBQuery() const {
  return remarksBQuery_;
}

void ListFaceGroupsRequest::setRemarksBQuery(const std::string &remarksBQuery) {
  remarksBQuery_ = remarksBQuery;
  setParameter(std::string("RemarksBQuery"), remarksBQuery);
}

std::string ListFaceGroupsRequest::getExternalId() const {
  return externalId_;
}

void ListFaceGroupsRequest::setExternalId(const std::string &externalId) {
  externalId_ = externalId;
  setParameter(std::string("ExternalId"), externalId);
}

std::string ListFaceGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFaceGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListFaceGroupsRequest::getLimit() const {
  return limit_;
}

void ListFaceGroupsRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListFaceGroupsRequest::getRemarksArrayBQuery() const {
  return remarksArrayBQuery_;
}

void ListFaceGroupsRequest::setRemarksArrayBQuery(const std::string &remarksArrayBQuery) {
  remarksArrayBQuery_ = remarksArrayBQuery;
  setParameter(std::string("RemarksArrayBQuery"), remarksArrayBQuery);
}

std::string ListFaceGroupsRequest::getOrder() const {
  return order_;
}

void ListFaceGroupsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListFaceGroupsRequest::getRemarksAQuery() const {
  return remarksAQuery_;
}

void ListFaceGroupsRequest::setRemarksAQuery(const std::string &remarksAQuery) {
  remarksAQuery_ = remarksAQuery;
  setParameter(std::string("RemarksAQuery"), remarksAQuery);
}

std::string ListFaceGroupsRequest::getOrderBy() const {
  return orderBy_;
}

void ListFaceGroupsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListFaceGroupsRequest::getRemarksDQuery() const {
  return remarksDQuery_;
}

void ListFaceGroupsRequest::setRemarksDQuery(const std::string &remarksDQuery) {
  remarksDQuery_ = remarksDQuery;
  setParameter(std::string("RemarksDQuery"), remarksDQuery);
}

std::string ListFaceGroupsRequest::getRemarksArrayAQuery() const {
  return remarksArrayAQuery_;
}

void ListFaceGroupsRequest::setRemarksArrayAQuery(const std::string &remarksArrayAQuery) {
  remarksArrayAQuery_ = remarksArrayAQuery;
  setParameter(std::string("RemarksArrayAQuery"), remarksArrayAQuery);
}

std::string ListFaceGroupsRequest::getMarker() const {
  return marker_;
}

void ListFaceGroupsRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

std::string ListFaceGroupsRequest::getSetId() const {
  return setId_;
}

void ListFaceGroupsRequest::setSetId(const std::string &setId) {
  setId_ = setId;
  setParameter(std::string("SetId"), setId);
}

std::string ListFaceGroupsRequest::getRemarksCQuery() const {
  return remarksCQuery_;
}

void ListFaceGroupsRequest::setRemarksCQuery(const std::string &remarksCQuery) {
  remarksCQuery_ = remarksCQuery;
  setParameter(std::string("RemarksCQuery"), remarksCQuery);
}

