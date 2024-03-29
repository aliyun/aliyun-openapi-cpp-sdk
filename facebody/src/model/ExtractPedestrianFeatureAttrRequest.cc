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

#include <alibabacloud/facebody/model/ExtractPedestrianFeatureAttrRequest.h>

using AlibabaCloud::Facebody::Model::ExtractPedestrianFeatureAttrRequest;

ExtractPedestrianFeatureAttrRequest::ExtractPedestrianFeatureAttrRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ExtractPedestrianFeatureAttr") {
  setMethod(HttpRequest::Method::Post);
}

ExtractPedestrianFeatureAttrRequest::~ExtractPedestrianFeatureAttrRequest() {}

bool ExtractPedestrianFeatureAttrRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ExtractPedestrianFeatureAttrRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string ExtractPedestrianFeatureAttrRequest::getMode() const {
  return mode_;
}

void ExtractPedestrianFeatureAttrRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

std::string ExtractPedestrianFeatureAttrRequest::getOssFile() const {
  return ossFile_;
}

void ExtractPedestrianFeatureAttrRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string ExtractPedestrianFeatureAttrRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ExtractPedestrianFeatureAttrRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string ExtractPedestrianFeatureAttrRequest::getImageURL() const {
  return imageURL_;
}

void ExtractPedestrianFeatureAttrRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

std::string ExtractPedestrianFeatureAttrRequest::getServiceVersion() const {
  return serviceVersion_;
}

void ExtractPedestrianFeatureAttrRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setBodyParameter(std::string("ServiceVersion"), serviceVersion);
}

