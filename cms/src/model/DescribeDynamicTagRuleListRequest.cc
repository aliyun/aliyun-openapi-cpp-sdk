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

#include <alibabacloud/cms/model/DescribeDynamicTagRuleListRequest.h>

using AlibabaCloud::Cms::Model::DescribeDynamicTagRuleListRequest;

DescribeDynamicTagRuleListRequest::DescribeDynamicTagRuleListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeDynamicTagRuleList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDynamicTagRuleListRequest::~DescribeDynamicTagRuleListRequest() {}

std::string DescribeDynamicTagRuleListRequest::getTagValue() const {
  return tagValue_;
}

void DescribeDynamicTagRuleListRequest::setTagValue(const std::string &tagValue) {
  tagValue_ = tagValue;
  setParameter(std::string("TagValue"), tagValue);
}

std::string DescribeDynamicTagRuleListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDynamicTagRuleListRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeDynamicTagRuleListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDynamicTagRuleListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeDynamicTagRuleListRequest::getTagKey() const {
  return tagKey_;
}

void DescribeDynamicTagRuleListRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

std::string DescribeDynamicTagRuleListRequest::getTagRegionId() const {
  return tagRegionId_;
}

void DescribeDynamicTagRuleListRequest::setTagRegionId(const std::string &tagRegionId) {
  tagRegionId_ = tagRegionId;
  setParameter(std::string("TagRegionId"), tagRegionId);
}

