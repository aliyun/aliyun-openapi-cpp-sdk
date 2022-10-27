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

string ListInstanceRequest::getDescription() const {
  return description_;
}

void ListInstanceRequest::setDescription(string description) {
  description_ = description;
  setParameter(std::string("description"), std::to_string(description));
}

string ListInstanceRequest::getInstanceCategory() const {
  return instanceCategory_;
}

void ListInstanceRequest::setInstanceCategory(string instanceCategory) {
  instanceCategory_ = instanceCategory;
  setParameter(std::string("instanceCategory"), std::to_string(instanceCategory));
}

string ListInstanceRequest::getInnerapiOwnerId() const {
  return innerapiOwnerId_;
}

void ListInstanceRequest::setInnerapiOwnerId(string innerapiOwnerId) {
  innerapiOwnerId_ = innerapiOwnerId;
  setParameter(std::string("innerapiOwnerId"), std::to_string(innerapiOwnerId));
}

string ListInstanceRequest::getTags() const {
  return tags_;
}

void ListInstanceRequest::setTags(string tags) {
  tags_ = tags;
  setParameter(std::string("tags"), std::to_string(tags));
}

string ListInstanceRequest::getProductType() const {
  return productType_;
}

void ListInstanceRequest::setProductType(string productType) {
  productType_ = productType;
  setParameter(std::string("productType"), std::to_string(productType));
}

string ListInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListInstanceRequest::setResourceGroupId(string resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("resourceGroupId"), std::to_string(resourceGroupId));
}

string ListInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), std::to_string(instanceId));
}

integer ListInstanceRequest::getSize() const {
  return size_;
}

void ListInstanceRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListInstanceRequest::getEsVersion() const {
  return esVersion_;
}

void ListInstanceRequest::setEsVersion(string esVersion) {
  esVersion_ = esVersion;
  setParameter(std::string("esVersion"), std::to_string(esVersion));
}

string ListInstanceRequest::getVpcId() const {
  return vpcId_;
}

void ListInstanceRequest::setVpcId(string vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("vpcId"), std::to_string(vpcId));
}

string ListInstanceRequest::getZoneId() const {
  return zoneId_;
}

void ListInstanceRequest::setZoneId(string zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("zoneId"), std::to_string(zoneId));
}

integer ListInstanceRequest::getPage() const {
  return page_;
}

void ListInstanceRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void ListInstanceRequest::setPaymentType(string paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("paymentType"), std::to_string(paymentType));
}

