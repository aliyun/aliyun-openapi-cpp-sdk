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

#include <alibabacloud/ft/model/DataRateLimitTestRequest.h>

using AlibabaCloud::Ft::Model::DataRateLimitTestRequest;

DataRateLimitTestRequest::DataRateLimitTestRequest()
    : RpcServiceRequest("ft", "2021-01-01", "DataRateLimitTest") {
  setMethod(HttpRequest::Method::Post);
}

DataRateLimitTestRequest::~DataRateLimitTestRequest() {}

std::string DataRateLimitTestRequest::getNewparam2() const {
  return newparam2_;
}

void DataRateLimitTestRequest::setNewparam2(const std::string &newparam2) {
  newparam2_ = newparam2;
  setParameter(std::string("new-param-2"), newparam2);
}

std::string DataRateLimitTestRequest::getNewparam1() const {
  return newparam1_;
}

void DataRateLimitTestRequest::setNewparam1(const std::string &newparam1) {
  newparam1_ = newparam1;
  setParameter(std::string("new-param-1"), newparam1);
}

std::string DataRateLimitTestRequest::getData() const {
  return data_;
}

void DataRateLimitTestRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string DataRateLimitTestRequest::getMap() const {
  return map_;
}

void DataRateLimitTestRequest::setMap(const std::string &map) {
  map_ = map;
  setParameter(std::string("Map"), map);
}

