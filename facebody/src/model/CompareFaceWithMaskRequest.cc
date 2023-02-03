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

#include <alibabacloud/facebody/model/CompareFaceWithMaskRequest.h>

using AlibabaCloud::Facebody::Model::CompareFaceWithMaskRequest;

CompareFaceWithMaskRequest::CompareFaceWithMaskRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "CompareFaceWithMask") {
  setMethod(HttpRequest::Method::Post);
}

CompareFaceWithMaskRequest::~CompareFaceWithMaskRequest() {}

bool CompareFaceWithMaskRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void CompareFaceWithMaskRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

float CompareFaceWithMaskRequest::getQualityScoreThreshold() const {
  return qualityScoreThreshold_;
}

void CompareFaceWithMaskRequest::setQualityScoreThreshold(float qualityScoreThreshold) {
  qualityScoreThreshold_ = qualityScoreThreshold;
  setBodyParameter(std::string("QualityScoreThreshold"), std::to_string(qualityScoreThreshold));
}

std::string CompareFaceWithMaskRequest::getImageURLB() const {
  return imageURLB_;
}

void CompareFaceWithMaskRequest::setImageURLB(const std::string &imageURLB) {
  imageURLB_ = imageURLB;
  setBodyParameter(std::string("ImageURLB"), imageURLB);
}

std::string CompareFaceWithMaskRequest::getImageURLA() const {
  return imageURLA_;
}

void CompareFaceWithMaskRequest::setImageURLA(const std::string &imageURLA) {
  imageURLA_ = imageURLA;
  setBodyParameter(std::string("ImageURLA"), imageURLA);
}

std::string CompareFaceWithMaskRequest::getOssFile() const {
  return ossFile_;
}

void CompareFaceWithMaskRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string CompareFaceWithMaskRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void CompareFaceWithMaskRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

