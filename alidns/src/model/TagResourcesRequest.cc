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

#include <alibabacloud/alidns/model/TagResourcesRequest.h>

using AlibabaCloud::Alidns::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "TagResources") {
  setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest() {}

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

std::string TagResourcesRequest::getUserClientIp() const {
  return userClientIp_;
}

void TagResourcesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
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

std::string TagResourcesRequest::getLang() const {
  return lang_;
}

void TagResourcesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool TagResourcesRequest::getOverWrite() const {
  return overWrite_;
}

void TagResourcesRequest::setOverWrite(bool overWrite) {
  overWrite_ = overWrite;
  setParameter(std::string("OverWrite"), overWrite ? "true" : "false");
}

