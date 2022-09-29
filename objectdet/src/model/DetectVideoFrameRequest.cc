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

#include <alibabacloud/objectdet/model/DetectVideoFrameRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVideoFrameRequest;

DetectVideoFrameRequest::DetectVideoFrameRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectVideoFrame") {
  setMethod(HttpRequest::Method::Post);
}

DetectVideoFrameRequest::~DetectVideoFrameRequest() {}

bool DetectVideoFrameRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectVideoFrameRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::vector<DetectVideoFrameRequest::std::string> DetectVideoFrameRequest::getFeatures() const {
  return features_;
}

void DetectVideoFrameRequest::setFeatures(const std::vector<DetectVideoFrameRequest::std::string> &features) {
  features_ = features;
  for(int dep1 = 0; dep1 != features.size(); dep1++) {
    setBodyParameter(std::string("Features") + "." + std::to_string(dep1 + 1), features[dep1]);
  }
}

std::string DetectVideoFrameRequest::getOssFile() const {
  return ossFile_;
}

void DetectVideoFrameRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

long DetectVideoFrameRequest::getHeight() const {
  return height_;
}

void DetectVideoFrameRequest::setHeight(long height) {
  height_ = height;
  setBodyParameter(std::string("Height"), std::to_string(height));
}

long DetectVideoFrameRequest::getCreateTime() const {
  return createTime_;
}

void DetectVideoFrameRequest::setCreateTime(long createTime) {
  createTime_ = createTime;
  setBodyParameter(std::string("CreateTime"), std::to_string(createTime));
}

std::string DetectVideoFrameRequest::getFeatureConfig() const {
  return featureConfig_;
}

void DetectVideoFrameRequest::setFeatureConfig(const std::string &featureConfig) {
  featureConfig_ = featureConfig;
  setBodyParameter(std::string("FeatureConfig"), featureConfig);
}

long DetectVideoFrameRequest::getOwnerId() const {
  return ownerId_;
}

void DetectVideoFrameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setBodyParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DetectVideoFrameRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectVideoFrameRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectVideoFrameRequest::getStreamArn() const {
  return streamArn_;
}

void DetectVideoFrameRequest::setStreamArn(const std::string &streamArn) {
  streamArn_ = streamArn;
  setBodyParameter(std::string("StreamArn"), streamArn);
}

std::string DetectVideoFrameRequest::getImageURL() const {
  return imageURL_;
}

void DetectVideoFrameRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

long DetectVideoFrameRequest::getWidth() const {
  return width_;
}

void DetectVideoFrameRequest::setWidth(long width) {
  width_ = width;
  setBodyParameter(std::string("Width"), std::to_string(width));
}

