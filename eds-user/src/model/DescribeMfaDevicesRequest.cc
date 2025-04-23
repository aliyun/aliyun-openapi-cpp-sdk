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

#include <alibabacloud/eds-user/model/DescribeMfaDevicesRequest.h>

using AlibabaCloud::Eds_user::Model::DescribeMfaDevicesRequest;

DescribeMfaDevicesRequest::DescribeMfaDevicesRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DescribeMfaDevices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMfaDevicesRequest::~DescribeMfaDevicesRequest() {}

std::vector<std::string> DescribeMfaDevicesRequest::getEndUserIds() const {
  return endUserIds_;
}

void DescribeMfaDevicesRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::vector<std::string> DescribeMfaDevicesRequest::getSerialNumbers() const {
  return serialNumbers_;
}

void DescribeMfaDevicesRequest::setSerialNumbers(const std::vector<std::string> &serialNumbers) {
  serialNumbers_ = serialNumbers;
}

std::string DescribeMfaDevicesRequest::getAdDomain() const {
  return adDomain_;
}

void DescribeMfaDevicesRequest::setAdDomain(const std::string &adDomain) {
  adDomain_ = adDomain;
  setParameter(std::string("AdDomain"), adDomain);
}

std::string DescribeMfaDevicesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeMfaDevicesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long DescribeMfaDevicesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeMfaDevicesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

