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

#include <alibabacloud/dcdn/model/DescribeDcdnUserSecDropRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserSecDropRequest;

DescribeDcdnUserSecDropRequest::DescribeDcdnUserSecDropRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserSecDrop") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserSecDropRequest::~DescribeDcdnUserSecDropRequest() {}

std::string DescribeDcdnUserSecDropRequest::getData() const {
  return data_;
}

void DescribeDcdnUserSecDropRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string DescribeDcdnUserSecDropRequest::getMetric() const {
  return metric_;
}

void DescribeDcdnUserSecDropRequest::setMetric(const std::string &metric) {
  metric_ = metric;
  setParameter(std::string("Metric"), metric);
}

std::string DescribeDcdnUserSecDropRequest::getSecFunc() const {
  return secFunc_;
}

void DescribeDcdnUserSecDropRequest::setSecFunc(const std::string &secFunc) {
  secFunc_ = secFunc;
  setParameter(std::string("SecFunc"), secFunc);
}

