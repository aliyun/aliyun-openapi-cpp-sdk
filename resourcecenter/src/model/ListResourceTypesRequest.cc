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

#include <alibabacloud/resourcecenter/model/ListResourceTypesRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListResourceTypesRequest;

ListResourceTypesRequest::ListResourceTypesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListResourceTypes") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceTypesRequest::~ListResourceTypesRequest() {}

std::string ListResourceTypesRequest::getScene() const {
  return scene_;
}

void ListResourceTypesRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::vector<std::string> ListResourceTypesRequest::getQuery() const {
  return query_;
}

void ListResourceTypesRequest::setQuery(const std::vector<std::string> &query) {
  query_ = query;
}

std::string ListResourceTypesRequest::getResourceType() const {
  return resourceType_;
}

void ListResourceTypesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListResourceTypesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListResourceTypesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

