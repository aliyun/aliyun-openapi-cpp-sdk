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

#include <alibabacloud/ecd/model/ListCdsFilesRequest.h>

using AlibabaCloud::Ecd::Model::ListCdsFilesRequest;

ListCdsFilesRequest::ListCdsFilesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ListCdsFiles") {
  setMethod(HttpRequest::Method::Post);
}

ListCdsFilesRequest::~ListCdsFilesRequest() {}

std::string ListCdsFilesRequest::getRegionId() const {
  return regionId_;
}

void ListCdsFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListCdsFilesRequest::getNextToken() const {
  return nextToken_;
}

void ListCdsFilesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListCdsFilesRequest::getEndUserId() const {
  return endUserId_;
}

void ListCdsFilesRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string ListCdsFilesRequest::getRootId() const {
  return rootId_;
}

void ListCdsFilesRequest::setRootId(const std::string &rootId) {
  rootId_ = rootId;
  setParameter(std::string("RootId"), rootId);
}

std::string ListCdsFilesRequest::getCdsId() const {
  return cdsId_;
}

void ListCdsFilesRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string ListCdsFilesRequest::getParentFileId() const {
  return parentFileId_;
}

void ListCdsFilesRequest::setParentFileId(const std::string &parentFileId) {
  parentFileId_ = parentFileId;
  setParameter(std::string("ParentFileId"), parentFileId);
}

std::string ListCdsFilesRequest::getFileIds() const {
  return fileIds_;
}

void ListCdsFilesRequest::setFileIds(const std::string &fileIds) {
  fileIds_ = fileIds;
  setParameter(std::string("FileIds"), fileIds);
}

int ListCdsFilesRequest::getMaxResults() const {
  return maxResults_;
}

void ListCdsFilesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListCdsFilesRequest::getOrderType() const {
  return orderType_;
}

void ListCdsFilesRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

std::string ListCdsFilesRequest::getStatus() const {
  return status_;
}

void ListCdsFilesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

