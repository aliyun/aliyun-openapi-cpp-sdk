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

#include <alibabacloud/facebody/model/ListFaceDbsRequest.h>

using AlibabaCloud::Facebody::Model::ListFaceDbsRequest;

ListFaceDbsRequest::ListFaceDbsRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ListFaceDbs") {
  setMethod(HttpRequest::Method::Post);
}

ListFaceDbsRequest::~ListFaceDbsRequest() {}

bool ListFaceDbsRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ListFaceDbsRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long ListFaceDbsRequest::getLimit() const {
  return limit_;
}

void ListFaceDbsRequest::setLimit(long limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListFaceDbsRequest::getOssFile() const {
  return ossFile_;
}

void ListFaceDbsRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

long ListFaceDbsRequest::getOffset() const {
  return offset_;
}

void ListFaceDbsRequest::setOffset(long offset) {
  offset_ = offset;
  setBodyParameter(std::string("Offset"), std::to_string(offset));
}

std::string ListFaceDbsRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ListFaceDbsRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

