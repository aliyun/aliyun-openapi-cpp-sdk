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

#include <alibabacloud/smartag/model/ListEnterpriseCodeRequest.h>

using AlibabaCloud::Smartag::Model::ListEnterpriseCodeRequest;

ListEnterpriseCodeRequest::ListEnterpriseCodeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListEnterpriseCode") {
  setMethod(HttpRequest::Method::Post);
}

ListEnterpriseCodeRequest::~ListEnterpriseCodeRequest() {}

std::string ListEnterpriseCodeRequest::getRegionId() const {
  return regionId_;
}

void ListEnterpriseCodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEnterpriseCodeRequest::getEnterpriseCode() const {
  return enterpriseCode_;
}

void ListEnterpriseCodeRequest::setEnterpriseCode(const std::string &enterpriseCode) {
  enterpriseCode_ = enterpriseCode;
  setParameter(std::string("EnterpriseCode"), enterpriseCode);
}

std::string ListEnterpriseCodeRequest::getNextToken() const {
  return nextToken_;
}

void ListEnterpriseCodeRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool ListEnterpriseCodeRequest::getIsDefault() const {
  return isDefault_;
}

void ListEnterpriseCodeRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

int ListEnterpriseCodeRequest::getMaxResults() const {
  return maxResults_;
}

void ListEnterpriseCodeRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

