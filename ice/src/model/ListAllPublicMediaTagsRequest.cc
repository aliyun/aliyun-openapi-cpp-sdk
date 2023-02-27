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

#include <alibabacloud/ice/model/ListAllPublicMediaTagsRequest.h>

using AlibabaCloud::ICE::Model::ListAllPublicMediaTagsRequest;

ListAllPublicMediaTagsRequest::ListAllPublicMediaTagsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListAllPublicMediaTags") {
  setMethod(HttpRequest::Method::Post);
}

ListAllPublicMediaTagsRequest::~ListAllPublicMediaTagsRequest() {}

std::string ListAllPublicMediaTagsRequest::getWebSdkVersion() const {
  return webSdkVersion_;
}

void ListAllPublicMediaTagsRequest::setWebSdkVersion(const std::string &webSdkVersion) {
  webSdkVersion_ = webSdkVersion;
  setParameter(std::string("WebSdkVersion"), webSdkVersion);
}

std::string ListAllPublicMediaTagsRequest::getEntityId() const {
  return entityId_;
}

void ListAllPublicMediaTagsRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string ListAllPublicMediaTagsRequest::getBusinessType() const {
  return businessType_;
}

void ListAllPublicMediaTagsRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

