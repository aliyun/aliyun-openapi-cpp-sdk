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

#include <alibabacloud/facebody/model/DetectPedestrianIntrusionRequest.h>

using AlibabaCloud::Facebody::Model::DetectPedestrianIntrusionRequest;

DetectPedestrianIntrusionRequest::DetectPedestrianIntrusionRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DetectPedestrianIntrusion") {
  setMethod(HttpRequest::Method::Post);
}

DetectPedestrianIntrusionRequest::~DetectPedestrianIntrusionRequest() {}

std::vector<DetectPedestrianIntrusionRequest::DetectRegion> DetectPedestrianIntrusionRequest::getDetectRegion() const {
  return detectRegion_;
}

void DetectPedestrianIntrusionRequest::setDetectRegion(const std::vector<DetectPedestrianIntrusionRequest::DetectRegion> &detectRegion) {
  detectRegion_ = detectRegion;
  for(int dep1 = 0; dep1 != detectRegion.size(); dep1++) {
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Rect.Top", std::to_string(detectRegion[dep1].rect.top));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Rect.Left", std::to_string(detectRegion[dep1].rect.left));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Rect.Bottom", std::to_string(detectRegion[dep1].rect.bottom));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Rect.Right", std::to_string(detectRegion[dep1].rect.right));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Line.Y1", std::to_string(detectRegion[dep1].line.y1));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Line.X1", std::to_string(detectRegion[dep1].line.x1));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Line.Y2", std::to_string(detectRegion[dep1].line.y2));
    setBodyParameter(std::string("DetectRegion") + "." + std::to_string(dep1 + 1) + ".Line.X2", std::to_string(detectRegion[dep1].line.x2));
  }
}

std::string DetectPedestrianIntrusionRequest::getRegionType() const {
  return regionType_;
}

void DetectPedestrianIntrusionRequest::setRegionType(const std::string &regionType) {
  regionType_ = regionType;
  setBodyParameter(std::string("RegionType"), regionType);
}

bool DetectPedestrianIntrusionRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectPedestrianIntrusionRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectPedestrianIntrusionRequest::getOssFile() const {
  return ossFile_;
}

void DetectPedestrianIntrusionRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectPedestrianIntrusionRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectPedestrianIntrusionRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectPedestrianIntrusionRequest::getImageURL() const {
  return imageURL_;
}

void DetectPedestrianIntrusionRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

