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

#include <alibabacloud/sddp/model/DescribeOssObjectDetailRequest.h>

using AlibabaCloud::Sddp::Model::DescribeOssObjectDetailRequest;

DescribeOssObjectDetailRequest::DescribeOssObjectDetailRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeOssObjectDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOssObjectDetailRequest::~DescribeOssObjectDetailRequest() {}

int DescribeOssObjectDetailRequest::getFeatureType() const {
  return featureType_;
}

void DescribeOssObjectDetailRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeOssObjectDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOssObjectDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeOssObjectDetailRequest::getId() const {
  return id_;
}

void DescribeOssObjectDetailRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DescribeOssObjectDetailRequest::getLang() const {
  return lang_;
}

void DescribeOssObjectDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

