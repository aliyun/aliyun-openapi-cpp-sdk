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

#include <alibabacloud/rds/model/QueryNotifyRequest.h>

using AlibabaCloud::Rds::Model::QueryNotifyRequest;

QueryNotifyRequest::QueryNotifyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "QueryNotify") {
  setMethod(HttpRequest::Method::Post);
}

QueryNotifyRequest::~QueryNotifyRequest() {}

int QueryNotifyRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryNotifyRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string QueryNotifyRequest::getRegionId() const {
  return regionId_;
}

void QueryNotifyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool QueryNotifyRequest::getWithConfirmed() const {
  return withConfirmed_;
}

void QueryNotifyRequest::setWithConfirmed(bool withConfirmed) {
  withConfirmed_ = withConfirmed;
  setBodyParameter(std::string("WithConfirmed"), withConfirmed ? "true" : "false");
}

int QueryNotifyRequest::getPageSize() const {
  return pageSize_;
}

void QueryNotifyRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryNotifyRequest::getFrom() const {
  return from_;
}

void QueryNotifyRequest::setFrom(const std::string &from) {
  from_ = from;
  setBodyParameter(std::string("From"), from);
}

std::string QueryNotifyRequest::getTo() const {
  return to_;
}

void QueryNotifyRequest::setTo(const std::string &to) {
  to_ = to;
  setBodyParameter(std::string("To"), to);
}

