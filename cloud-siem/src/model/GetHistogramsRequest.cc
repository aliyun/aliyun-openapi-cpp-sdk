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

#include <alibabacloud/cloud-siem/model/GetHistogramsRequest.h>

using AlibabaCloud::Cloud_siem::Model::GetHistogramsRequest;

GetHistogramsRequest::GetHistogramsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "GetHistograms") {
  setMethod(HttpRequest::Method::Post);
}

GetHistogramsRequest::~GetHistogramsRequest() {}

std::string GetHistogramsRequest::getRegionId() const {
  return regionId_;
}

void GetHistogramsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int GetHistogramsRequest::getFrom() const {
  return from_;
}

void GetHistogramsRequest::setFrom(int from) {
  from_ = from;
  setBodyParameter(std::string("From"), std::to_string(from));
}

std::string GetHistogramsRequest::getQuery() const {
  return query_;
}

void GetHistogramsRequest::setQuery(const std::string &query) {
  query_ = query;
  setBodyParameter(std::string("Query"), query);
}

int GetHistogramsRequest::getTo() const {
  return to_;
}

void GetHistogramsRequest::setTo(int to) {
  to_ = to;
  setBodyParameter(std::string("To"), std::to_string(to));
}

