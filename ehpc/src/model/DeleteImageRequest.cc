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

#include <alibabacloud/ehpc/model/DeleteImageRequest.h>

using AlibabaCloud::EHPC::Model::DeleteImageRequest;

DeleteImageRequest::DeleteImageRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DeleteImage") {
  setMethod(HttpRequest::Method::Get);
}

DeleteImageRequest::~DeleteImageRequest() {}

std::string DeleteImageRequest::getClusterId() const {
  return clusterId_;
}

void DeleteImageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeleteImageRequest::getRepository() const {
  return repository_;
}

void DeleteImageRequest::setRepository(const std::string &repository) {
  repository_ = repository;
  setParameter(std::string("Repository"), repository);
}

std::string DeleteImageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteImageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteImageRequest::getContainerType() const {
  return containerType_;
}

void DeleteImageRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

std::string DeleteImageRequest::getImageTag() const {
  return imageTag_;
}

void DeleteImageRequest::setImageTag(const std::string &imageTag) {
  imageTag_ = imageTag;
  setParameter(std::string("ImageTag"), imageTag);
}

