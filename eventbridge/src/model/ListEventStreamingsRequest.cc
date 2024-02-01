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

#include <alibabacloud/eventbridge/model/ListEventStreamingsRequest.h>

using AlibabaCloud::Eventbridge::Model::ListEventStreamingsRequest;

ListEventStreamingsRequest::ListEventStreamingsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListEventStreamings") {
  setMethod(HttpRequest::Method::Post);
}

ListEventStreamingsRequest::~ListEventStreamingsRequest() {}

std::string ListEventStreamingsRequest::getSourceArn() const {
  return sourceArn_;
}

void ListEventStreamingsRequest::setSourceArn(const std::string &sourceArn) {
  sourceArn_ = sourceArn;
  setBodyParameter(std::string("SourceArn"), sourceArn);
}

std::string ListEventStreamingsRequest::getSinkType() const {
  return sinkType_;
}

void ListEventStreamingsRequest::setSinkType(const std::string &sinkType) {
  sinkType_ = sinkType;
  setBodyParameter(std::string("SinkType"), sinkType);
}

std::string ListEventStreamingsRequest::getSinkArn() const {
  return sinkArn_;
}

void ListEventStreamingsRequest::setSinkArn(const std::string &sinkArn) {
  sinkArn_ = sinkArn;
  setBodyParameter(std::string("SinkArn"), sinkArn);
}

std::string ListEventStreamingsRequest::getNextToken() const {
  return nextToken_;
}

void ListEventStreamingsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

int ListEventStreamingsRequest::getLimit() const {
  return limit_;
}

void ListEventStreamingsRequest::setLimit(int limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListEventStreamingsRequest::getSourceType() const {
  return sourceType_;
}

void ListEventStreamingsRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string ListEventStreamingsRequest::getNamePrefix() const {
  return namePrefix_;
}

void ListEventStreamingsRequest::setNamePrefix(const std::string &namePrefix) {
  namePrefix_ = namePrefix;
  setBodyParameter(std::string("NamePrefix"), namePrefix);
}

std::string ListEventStreamingsRequest::getTag() const {
  return tag_;
}

void ListEventStreamingsRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

