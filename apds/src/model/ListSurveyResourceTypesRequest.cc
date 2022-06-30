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

#include <alibabacloud/apds/model/ListSurveyResourceTypesRequest.h>

using AlibabaCloud::Apds::Model::ListSurveyResourceTypesRequest;

ListSurveyResourceTypesRequest::ListSurveyResourceTypesRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/winback/query-resource-type"};
  setMethod(HttpRequest::Method::Post);
}

ListSurveyResourceTypesRequest::~ListSurveyResourceTypesRequest() {}

string ListSurveyResourceTypesRequest::getCloudType() const {
  return cloudType_;
}

void ListSurveyResourceTypesRequest::setCloudType(string cloudType) {
  cloudType_ = cloudType;
  setParameter(std::string("cloudType"), std::to_string(cloudType));
}

string ListSurveyResourceTypesRequest::getAk() const {
  return ak_;
}

void ListSurveyResourceTypesRequest::setAk(string ak) {
  ak_ = ak;
  setParameter(std::string("ak"), std::to_string(ak));
}

string ListSurveyResourceTypesRequest::getRegionId() const {
  return regionId_;
}

void ListSurveyResourceTypesRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), std::to_string(regionId));
}

string ListSurveyResourceTypesRequest::getSk() const {
  return sk_;
}

void ListSurveyResourceTypesRequest::setSk(string sk) {
  sk_ = sk;
  setParameter(std::string("sk"), std::to_string(sk));
}

string ListSurveyResourceTypesRequest::getRegion() const {
  return region_;
}

void ListSurveyResourceTypesRequest::setRegion(string region) {
  region_ = region;
  setParameter(std::string("region"), std::to_string(region));
}

