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

#include <alibabacloud/ehpc/model/ListCustomImagesRequest.h>

using AlibabaCloud::EHPC::Model::ListCustomImagesRequest;

ListCustomImagesRequest::ListCustomImagesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListCustomImages") {
  setMethod(HttpRequest::Method::Get);
}

ListCustomImagesRequest::~ListCustomImagesRequest() {}

std::string ListCustomImagesRequest::getClusterId() const {
  return clusterId_;
}

void ListCustomImagesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListCustomImagesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListCustomImagesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListCustomImagesRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void ListCustomImagesRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string ListCustomImagesRequest::getBaseOsTag() const {
  return baseOsTag_;
}

void ListCustomImagesRequest::setBaseOsTag(const std::string &baseOsTag) {
  baseOsTag_ = baseOsTag;
  setParameter(std::string("BaseOsTag"), baseOsTag);
}

std::string ListCustomImagesRequest::getInstanceType() const {
  return instanceType_;
}

void ListCustomImagesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

