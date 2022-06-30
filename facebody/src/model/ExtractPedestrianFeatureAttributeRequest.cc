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

#include <alibabacloud/facebody/model/ExtractPedestrianFeatureAttributeRequest.h>

using AlibabaCloud::Facebody::Model::ExtractPedestrianFeatureAttributeRequest;

ExtractPedestrianFeatureAttributeRequest::ExtractPedestrianFeatureAttributeRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ExtractPedestrianFeatureAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ExtractPedestrianFeatureAttributeRequest::~ExtractPedestrianFeatureAttributeRequest() {}

bool ExtractPedestrianFeatureAttributeRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ExtractPedestrianFeatureAttributeRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string ExtractPedestrianFeatureAttributeRequest::getMode() const {
  return mode_;
}

void ExtractPedestrianFeatureAttributeRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

std::string ExtractPedestrianFeatureAttributeRequest::getOssFile() const {
  return ossFile_;
}

void ExtractPedestrianFeatureAttributeRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::vector<ExtractPedestrianFeatureAttributeRequest::UrlList> ExtractPedestrianFeatureAttributeRequest::getUrlList() const {
  return urlList_;
}

void ExtractPedestrianFeatureAttributeRequest::setUrlList(const std::vector<ExtractPedestrianFeatureAttributeRequest::UrlList> &urlList) {
  urlList_ = urlList;
  for(int dep1 = 0; dep1 != urlList.size(); dep1++) {
  auto urlListObj = urlList.at(dep1);
  std::string urlListObjStr = std::string("UrlList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(urlListObjStr + ".Url", urlListObj.url);
  }
}

std::string ExtractPedestrianFeatureAttributeRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ExtractPedestrianFeatureAttributeRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string ExtractPedestrianFeatureAttributeRequest::getImageURL() const {
  return imageURL_;
}

void ExtractPedestrianFeatureAttributeRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

