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

#include <alibabacloud/facebody/model/RetouchBodyRequest.h>

using AlibabaCloud::Facebody::Model::RetouchBodyRequest;

RetouchBodyRequest::RetouchBodyRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "RetouchBody") {
  setMethod(HttpRequest::Method::Post);
}

RetouchBodyRequest::~RetouchBodyRequest() {}

float RetouchBodyRequest::getLengthenDegree() const {
  return lengthenDegree_;
}

void RetouchBodyRequest::setLengthenDegree(float lengthenDegree) {
  lengthenDegree_ = lengthenDegree;
  setBodyParameter(std::string("LengthenDegree"), std::to_string(lengthenDegree));
}

bool RetouchBodyRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RetouchBodyRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string RetouchBodyRequest::getOssFile() const {
  return ossFile_;
}

void RetouchBodyRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

float RetouchBodyRequest::getSlimDegree() const {
  return slimDegree_;
}

void RetouchBodyRequest::setSlimDegree(float slimDegree) {
  slimDegree_ = slimDegree;
  setBodyParameter(std::string("SlimDegree"), std::to_string(slimDegree));
}

std::string RetouchBodyRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RetouchBodyRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string RetouchBodyRequest::getImageURL() const {
  return imageURL_;
}

void RetouchBodyRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

