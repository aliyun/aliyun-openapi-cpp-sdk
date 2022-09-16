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

#include <alibabacloud/ecd/model/DescribeCustomizedListHeadersRequest.h>

using AlibabaCloud::Ecd::Model::DescribeCustomizedListHeadersRequest;

DescribeCustomizedListHeadersRequest::DescribeCustomizedListHeadersRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeCustomizedListHeaders") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomizedListHeadersRequest::~DescribeCustomizedListHeadersRequest() {}

std::string DescribeCustomizedListHeadersRequest::getRegionId() const {
  return regionId_;
}

void DescribeCustomizedListHeadersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCustomizedListHeadersRequest::getLangType() const {
  return langType_;
}

void DescribeCustomizedListHeadersRequest::setLangType(const std::string &langType) {
  langType_ = langType;
  setParameter(std::string("LangType"), langType);
}

std::string DescribeCustomizedListHeadersRequest::getListType() const {
  return listType_;
}

void DescribeCustomizedListHeadersRequest::setListType(const std::string &listType) {
  listType_ = listType;
  setParameter(std::string("ListType"), listType);
}

