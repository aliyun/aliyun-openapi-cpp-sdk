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

#include <alibabacloud/arms/model/GetRetcodeDataByQueryRequest.h>

using AlibabaCloud::ARMS::Model::GetRetcodeDataByQueryRequest;

GetRetcodeDataByQueryRequest::GetRetcodeDataByQueryRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRetcodeDataByQuery") {
  setMethod(HttpRequest::Method::Post);
}

GetRetcodeDataByQueryRequest::~GetRetcodeDataByQueryRequest() {}

std::string GetRetcodeDataByQueryRequest::getRegionId() const {
  return regionId_;
}

void GetRetcodeDataByQueryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetRetcodeDataByQueryRequest::getQuery() const {
  return query_;
}

void GetRetcodeDataByQueryRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

std::string GetRetcodeDataByQueryRequest::getPid() const {
  return pid_;
}

void GetRetcodeDataByQueryRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

long GetRetcodeDataByQueryRequest::getFrom() const {
  return from_;
}

void GetRetcodeDataByQueryRequest::setFrom(long from) {
  from_ = from;
  setParameter(std::string("From"), std::to_string(from));
}

long GetRetcodeDataByQueryRequest::getTo() const {
  return to_;
}

void GetRetcodeDataByQueryRequest::setTo(long to) {
  to_ = to;
  setParameter(std::string("To"), std::to_string(to));
}

