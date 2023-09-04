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

#include <alibabacloud/paifeaturestore/model/ListFeatureViewsRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListFeatureViewsRequest;

ListFeatureViewsRequest::ListFeatureViewsRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/featureviews"};
  setMethod(HttpRequest::Method::Get);
}

ListFeatureViewsRequest::~ListFeatureViewsRequest() {}

std::string ListFeatureViewsRequest::getType() const {
  return type_;
}

void ListFeatureViewsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListFeatureViewsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFeatureViewsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListFeatureViewsRequest::getFeatureName() const {
  return featureName_;
}

void ListFeatureViewsRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

int ListFeatureViewsRequest::getPageSize() const {
  return pageSize_;
}

void ListFeatureViewsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFeatureViewsRequest::getTag() const {
  return tag_;
}

void ListFeatureViewsRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string ListFeatureViewsRequest::getProjectId() const {
  return projectId_;
}

void ListFeatureViewsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListFeatureViewsRequest::getOrder() const {
  return order_;
}

void ListFeatureViewsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListFeatureViewsRequest::getOwner() const {
  return owner_;
}

void ListFeatureViewsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

std::string ListFeatureViewsRequest::getInstanceId() const {
  return instanceId_;
}

void ListFeatureViewsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListFeatureViewsRequest::getName() const {
  return name_;
}

void ListFeatureViewsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListFeatureViewsRequest::getSortBy() const {
  return sortBy_;
}

void ListFeatureViewsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

