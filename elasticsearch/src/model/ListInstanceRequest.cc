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

#include <alibabacloud/elasticsearch/model/ListInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest() {}

std::string ListInstanceRequest::getDescription() const {
  return description_;
}

void ListInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("description"), description);
}

std::string ListInstanceRequest::getInstanceCategory() const {
  return instanceCategory_;
}

void ListInstanceRequest::setInstanceCategory(const std::string &instanceCategory) {
  instanceCategory_ = instanceCategory;
  setParameter(std::string("instanceCategory"), instanceCategory);
}

std::string ListInstanceRequest::getInnerapiOwnerId() const {
  return innerapiOwnerId_;
}

void ListInstanceRequest::setInnerapiOwnerId(const std::string &innerapiOwnerId) {
  innerapiOwnerId_ = innerapiOwnerId;
  setParameter(std::string("innerapiOwnerId"), innerapiOwnerId);
}

std::string ListInstanceRequest::getTags() const {
  return tags_;
}

void ListInstanceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("tags"), tags);
}

std::string ListInstanceRequest::getProductType() const {
  return productType_;
}

void ListInstanceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("productType"), productType);
}

std::string ListInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("resourceGroupId"), resourceGroupId);
}

std::string ListInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

int ListInstanceRequest::getSize() const {
  return size_;
}

void ListInstanceRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListInstanceRequest::getEsVersion() const {
  return esVersion_;
}

void ListInstanceRequest::setEsVersion(const std::string &esVersion) {
  esVersion_ = esVersion;
  setParameter(std::string("esVersion"), esVersion);
}

std::string ListInstanceRequest::getVpcId() const {
  return vpcId_;
}

void ListInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("vpcId"), vpcId);
}

std::string ListInstanceRequest::getZoneId() const {
  return zoneId_;
}

void ListInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("zoneId"), zoneId);
}

int ListInstanceRequest::getPage() const {
  return page_;
}

void ListInstanceRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void ListInstanceRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("paymentType"), paymentType);
}

