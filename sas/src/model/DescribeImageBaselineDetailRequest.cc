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

#include <alibabacloud/sas/model/DescribeImageBaselineDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageBaselineDetailRequest;

DescribeImageBaselineDetailRequest::DescribeImageBaselineDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageBaselineDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageBaselineDetailRequest::~DescribeImageBaselineDetailRequest() {}

std::string DescribeImageBaselineDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageBaselineDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeImageBaselineDetailRequest::getLang() const {
  return lang_;
}

void DescribeImageBaselineDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageBaselineDetailRequest::getImageUuid() const {
  return imageUuid_;
}

void DescribeImageBaselineDetailRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

std::string DescribeImageBaselineDetailRequest::getBaselineItemKey() const {
  return baselineItemKey_;
}

void DescribeImageBaselineDetailRequest::setBaselineItemKey(const std::string &baselineItemKey) {
  baselineItemKey_ = baselineItemKey;
  setParameter(std::string("BaselineItemKey"), baselineItemKey);
}

