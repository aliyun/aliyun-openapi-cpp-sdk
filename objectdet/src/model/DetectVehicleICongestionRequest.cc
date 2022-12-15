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

#include <alibabacloud/objectdet/model/DetectVehicleICongestionRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVehicleICongestionRequest;

DetectVehicleICongestionRequest::DetectVehicleICongestionRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectVehicleICongestion") {
  setMethod(HttpRequest::Method::Post);
}

DetectVehicleICongestionRequest::~DetectVehicleICongestionRequest() {}

bool DetectVehicleICongestionRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectVehicleICongestionRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::vector<DetectVehicleICongestionRequest::RoadRegions> DetectVehicleICongestionRequest::getRoadRegions() const {
  return roadRegions_;
}

void DetectVehicleICongestionRequest::setRoadRegions(const std::vector<DetectVehicleICongestionRequest::RoadRegions> &roadRegions) {
  roadRegions_ = roadRegions;
  for(int dep1 = 0; dep1 != roadRegions.size(); dep1++) {
    for(int dep2 = 0; dep2 != roadRegions[dep1].roadRegion.size(); dep2++) {
      setBodyParameter(std::string("RoadRegions") + "." + std::to_string(dep1 + 1) + ".RoadRegion." + std::to_string(dep2 + 1) + ".Point.X", std::to_string(roadRegions[dep1].roadRegion[dep2].point.x));
      setBodyParameter(std::string("RoadRegions") + "." + std::to_string(dep1 + 1) + ".RoadRegion." + std::to_string(dep2 + 1) + ".Point.Y", std::to_string(roadRegions[dep1].roadRegion[dep2].point.y));
    }
  }
}

std::string DetectVehicleICongestionRequest::getOriginRequestId() const {
  return originRequestId_;
}

void DetectVehicleICongestionRequest::setOriginRequestId(const std::string &originRequestId) {
  originRequestId_ = originRequestId;
  setParameter(std::string("OriginRequestId"), originRequestId);
}

std::string DetectVehicleICongestionRequest::getOssFile() const {
  return ossFile_;
}

void DetectVehicleICongestionRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::vector<DetectVehicleICongestionRequest::PreRegionIntersectFeatures> DetectVehicleICongestionRequest::getPreRegionIntersectFeatures() const {
  return preRegionIntersectFeatures_;
}

void DetectVehicleICongestionRequest::setPreRegionIntersectFeatures(const std::vector<DetectVehicleICongestionRequest::PreRegionIntersectFeatures> &preRegionIntersectFeatures) {
  preRegionIntersectFeatures_ = preRegionIntersectFeatures;
  for(int dep1 = 0; dep1 != preRegionIntersectFeatures.size(); dep1++) {
    for(int dep2 = 0; dep2 != preRegionIntersectFeatures[dep1].features.size(); dep2++) {
      setBodyParameter(std::string("PreRegionIntersectFeatures") + "." + std::to_string(dep1 + 1) + ".Features." + std::to_string(dep2 + 1), preRegionIntersectFeatures[dep1].features[dep2]);
    }
  }
}

std::string DetectVehicleICongestionRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectVehicleICongestionRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectVehicleICongestionRequest::getStreamArn() const {
  return streamArn_;
}

void DetectVehicleICongestionRequest::setStreamArn(const std::string &streamArn) {
  streamArn_ = streamArn;
  setParameter(std::string("StreamArn"), streamArn);
}

std::string DetectVehicleICongestionRequest::getImageURL() const {
  return imageURL_;
}

void DetectVehicleICongestionRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

