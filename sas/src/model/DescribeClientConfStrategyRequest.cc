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

#include <alibabacloud/sas/model/DescribeClientConfStrategyRequest.h>

using AlibabaCloud::Sas::Model::DescribeClientConfStrategyRequest;

DescribeClientConfStrategyRequest::DescribeClientConfStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeClientConfStrategy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClientConfStrategyRequest::~DescribeClientConfStrategyRequest() {}

std::string DescribeClientConfStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeClientConfStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeClientConfStrategyRequest::getTag() const {
  return tag_;
}

void DescribeClientConfStrategyRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string DescribeClientConfStrategyRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeClientConfStrategyRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeClientConfStrategyRequest::getTagValue() const {
  return tagValue_;
}

void DescribeClientConfStrategyRequest::setTagValue(const std::string &tagValue) {
  tagValue_ = tagValue;
  setParameter(std::string("TagValue"), tagValue);
}

