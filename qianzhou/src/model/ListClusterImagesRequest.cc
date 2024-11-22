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

#include <alibabacloud/qianzhou/model/ListClusterImagesRequest.h>

using AlibabaCloud::Qianzhou::Model::ListClusterImagesRequest;

ListClusterImagesRequest::ListClusterImagesRequest()
    : RoaServiceRequest("qianzhou", "2021-11-11") {
  setResourcePath("/popapi/listClusterPodImages"};
  setMethod(HttpRequest::Method::Post);
}

ListClusterImagesRequest::~ListClusterImagesRequest() {}

std::string ListClusterImagesRequest::getImage_name() const {
  return image_name_;
}

void ListClusterImagesRequest::setImage_name(const std::string &image_name) {
  image_name_ = image_name;
  setParameter(std::string("image_name"), image_name);
}

std::string ListClusterImagesRequest::getUid() const {
  return uid_;
}

void ListClusterImagesRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("uid"), uid);
}

std::string ListClusterImagesRequest::getCluster_id() const {
  return cluster_id_;
}

void ListClusterImagesRequest::setCluster_id(const std::string &cluster_id) {
  cluster_id_ = cluster_id;
  setParameter(std::string("cluster_id"), cluster_id);
}

std::string ListClusterImagesRequest::getImage_hash() const {
  return image_hash_;
}

void ListClusterImagesRequest::setImage_hash(const std::string &image_hash) {
  image_hash_ = image_hash;
  setParameter(std::string("image_hash"), image_hash);
}

int ListClusterImagesRequest::getPage_no() const {
  return page_no_;
}

void ListClusterImagesRequest::setPage_no(int page_no) {
  page_no_ = page_no;
  setParameter(std::string("page_no"), std::to_string(page_no));
}

int ListClusterImagesRequest::getPage_size() const {
  return page_size_;
}

void ListClusterImagesRequest::setPage_size(int page_size) {
  page_size_ = page_size;
  setParameter(std::string("page_size"), std::to_string(page_size));
}

