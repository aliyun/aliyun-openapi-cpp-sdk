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

#include <alibabacloud/sddp/model/DescribeDataLimitSetRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataLimitSetRequest;

DescribeDataLimitSetRequest::DescribeDataLimitSetRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataLimitSet") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataLimitSetRequest::~DescribeDataLimitSetRequest() {}

int DescribeDataLimitSetRequest::getFeatureType() const {
  return featureType_;
}

void DescribeDataLimitSetRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeDataLimitSetRequest::getResourceType() const {
  return resourceType_;
}

void DescribeDataLimitSetRequest::setResourceType(int resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

std::string DescribeDataLimitSetRequest::getParentId() const {
  return parentId_;
}

void DescribeDataLimitSetRequest::setParentId(const std::string &parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), parentId);
}

std::string DescribeDataLimitSetRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataLimitSetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDataLimitSetRequest::getLang() const {
  return lang_;
}

void DescribeDataLimitSetRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

