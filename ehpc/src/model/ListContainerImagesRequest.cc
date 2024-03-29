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

#include <alibabacloud/ehpc/model/ListContainerImagesRequest.h>

using AlibabaCloud::EHPC::Model::ListContainerImagesRequest;

ListContainerImagesRequest::ListContainerImagesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListContainerImages") {
  setMethod(HttpRequest::Method::Get);
}

ListContainerImagesRequest::~ListContainerImagesRequest() {}

std::string ListContainerImagesRequest::getClusterId() const {
  return clusterId_;
}

void ListContainerImagesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListContainerImagesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListContainerImagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListContainerImagesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListContainerImagesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListContainerImagesRequest::getContainerType() const {
  return containerType_;
}

void ListContainerImagesRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

int ListContainerImagesRequest::getPageSize() const {
  return pageSize_;
}

void ListContainerImagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

