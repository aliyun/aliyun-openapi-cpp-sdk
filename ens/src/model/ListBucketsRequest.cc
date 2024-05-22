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

#include <alibabacloud/ens/model/ListBucketsRequest.h>

using AlibabaCloud::Ens::Model::ListBucketsRequest;

ListBucketsRequest::ListBucketsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ListBuckets") {
  setMethod(HttpRequest::Method::Post);
}

ListBucketsRequest::~ListBucketsRequest() {}

std::string ListBucketsRequest::getPrefix() const {
  return prefix_;
}

void ListBucketsRequest::setPrefix(const std::string &prefix) {
  prefix_ = prefix;
  setParameter(std::string("Prefix"), prefix);
}

std::string ListBucketsRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void ListBucketsRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string ListBucketsRequest::getKeyword() const {
  return keyword_;
}

void ListBucketsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListBucketsRequest::getLogicalBucketType() const {
  return logicalBucketType_;
}

void ListBucketsRequest::setLogicalBucketType(const std::string &logicalBucketType) {
  logicalBucketType_ = logicalBucketType;
  setParameter(std::string("LogicalBucketType"), logicalBucketType);
}

std::string ListBucketsRequest::getMarker() const {
  return marker_;
}

void ListBucketsRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

std::string ListBucketsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBucketsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListBucketsRequest::getPageSize() const {
  return pageSize_;
}

void ListBucketsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

