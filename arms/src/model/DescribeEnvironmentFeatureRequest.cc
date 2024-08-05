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

#include <alibabacloud/arms/model/DescribeEnvironmentFeatureRequest.h>

using AlibabaCloud::ARMS::Model::DescribeEnvironmentFeatureRequest;

DescribeEnvironmentFeatureRequest::DescribeEnvironmentFeatureRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeEnvironmentFeature") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnvironmentFeatureRequest::~DescribeEnvironmentFeatureRequest() {}

std::string DescribeEnvironmentFeatureRequest::getAliyunLang() const {
  return aliyunLang_;
}

void DescribeEnvironmentFeatureRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string DescribeEnvironmentFeatureRequest::getFeatureName() const {
  return featureName_;
}

void DescribeEnvironmentFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string DescribeEnvironmentFeatureRequest::getEnvironmentId() const {
  return environmentId_;
}

void DescribeEnvironmentFeatureRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DescribeEnvironmentFeatureRequest::getRegionId() const {
  return regionId_;
}

void DescribeEnvironmentFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

