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

#include <alibabacloud/sas/model/OperateImageBaselineWhitelistRequest.h>

using AlibabaCloud::Sas::Model::OperateImageBaselineWhitelistRequest;

OperateImageBaselineWhitelistRequest::OperateImageBaselineWhitelistRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateImageBaselineWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

OperateImageBaselineWhitelistRequest::~OperateImageBaselineWhitelistRequest() {}

std::string OperateImageBaselineWhitelistRequest::getBaselineItemKeyList() const {
  return baselineItemKeyList_;
}

void OperateImageBaselineWhitelistRequest::setBaselineItemKeyList(const std::string &baselineItemKeyList) {
  baselineItemKeyList_ = baselineItemKeyList;
  setParameter(std::string("BaselineItemKeyList"), baselineItemKeyList);
}

std::string OperateImageBaselineWhitelistRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateImageBaselineWhitelistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> OperateImageBaselineWhitelistRequest::getScanRange() const {
  return scanRange_;
}

void OperateImageBaselineWhitelistRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

std::string OperateImageBaselineWhitelistRequest::getLang() const {
  return lang_;
}

void OperateImageBaselineWhitelistRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string OperateImageBaselineWhitelistRequest::getImageUuid() const {
  return imageUuid_;
}

void OperateImageBaselineWhitelistRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

std::string OperateImageBaselineWhitelistRequest::getOperation() const {
  return operation_;
}

void OperateImageBaselineWhitelistRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

