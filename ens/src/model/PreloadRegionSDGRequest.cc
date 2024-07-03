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

#include <alibabacloud/ens/model/PreloadRegionSDGRequest.h>

using AlibabaCloud::Ens::Model::PreloadRegionSDGRequest;

PreloadRegionSDGRequest::PreloadRegionSDGRequest()
    : RpcServiceRequest("ens", "2017-11-10", "PreloadRegionSDG") {
  setMethod(HttpRequest::Method::Post);
}

PreloadRegionSDGRequest::~PreloadRegionSDGRequest() {}

std::vector<PreloadRegionSDGRequest::std::string> PreloadRegionSDGRequest::getDestinationRegionIds() const {
  return destinationRegionIds_;
}

void PreloadRegionSDGRequest::setDestinationRegionIds(const std::vector<PreloadRegionSDGRequest::std::string> &destinationRegionIds) {
  destinationRegionIds_ = destinationRegionIds;
  for(int dep1 = 0; dep1 != destinationRegionIds.size(); dep1++) {
    setParameter(std::string("DestinationRegionIds") + "." + std::to_string(dep1 + 1), destinationRegionIds[dep1]);
  }
}

std::string PreloadRegionSDGRequest::getSDGId() const {
  return sDGId_;
}

void PreloadRegionSDGRequest::setSDGId(const std::string &sDGId) {
  sDGId_ = sDGId;
  setParameter(std::string("SDGId"), sDGId);
}

int PreloadRegionSDGRequest::getRedundantNum() const {
  return redundantNum_;
}

void PreloadRegionSDGRequest::setRedundantNum(int redundantNum) {
  redundantNum_ = redundantNum;
  setParameter(std::string("RedundantNum"), std::to_string(redundantNum));
}

std::vector<PreloadRegionSDGRequest::std::string> PreloadRegionSDGRequest::getNamespaces() const {
  return namespaces_;
}

void PreloadRegionSDGRequest::setNamespaces(const std::vector<PreloadRegionSDGRequest::std::string> &namespaces) {
  namespaces_ = namespaces;
  for(int dep1 = 0; dep1 != namespaces.size(); dep1++) {
    setParameter(std::string("Namespaces") + "." + std::to_string(dep1 + 1), namespaces[dep1]);
  }
}

