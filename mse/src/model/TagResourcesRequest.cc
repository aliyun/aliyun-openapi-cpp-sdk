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

#include <alibabacloud/mse/model/TagResourcesRequest.h>

using AlibabaCloud::Mse::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "TagResources") {
  setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest() {}

std::string TagResourcesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void TagResourcesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string TagResourcesRequest::getRegionId() const {
  return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag() const {
  return tag_;
}

void TagResourcesRequest::setTag(const std::vector<TagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<std::string> TagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string TagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string TagResourcesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void TagResourcesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

