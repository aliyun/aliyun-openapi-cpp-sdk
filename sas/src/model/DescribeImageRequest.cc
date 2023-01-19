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

#include <alibabacloud/sas/model/DescribeImageRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageRequest;

DescribeImageRequest::DescribeImageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageRequest::~DescribeImageRequest() {}

std::string DescribeImageRequest::getImageInstanceId() const {
  return imageInstanceId_;
}

void DescribeImageRequest::setImageInstanceId(const std::string &imageInstanceId) {
  imageInstanceId_ = imageInstanceId;
  setParameter(std::string("ImageInstanceId"), imageInstanceId);
}

std::string DescribeImageRequest::getImageRegionId() const {
  return imageRegionId_;
}

void DescribeImageRequest::setImageRegionId(const std::string &imageRegionId) {
  imageRegionId_ = imageRegionId;
  setParameter(std::string("ImageRegionId"), imageRegionId);
}

std::string DescribeImageRequest::getImageRepoId() const {
  return imageRepoId_;
}

void DescribeImageRequest::setImageRepoId(const std::string &imageRepoId) {
  imageRepoId_ = imageRepoId;
  setParameter(std::string("ImageRepoId"), imageRepoId);
}

std::string DescribeImageRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeImageRequest::getImageTag() const {
  return imageTag_;
}

void DescribeImageRequest::setImageTag(const std::string &imageTag) {
  imageTag_ = imageTag;
  setParameter(std::string("ImageTag"), imageTag);
}

