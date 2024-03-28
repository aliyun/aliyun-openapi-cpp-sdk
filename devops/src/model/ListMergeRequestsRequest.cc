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

#include <alibabacloud/devops/model/ListMergeRequestsRequest.h>

using AlibabaCloud::Devops::Model::ListMergeRequestsRequest;

ListMergeRequestsRequest::ListMergeRequestsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/merge_requests/advanced_search"};
  setMethod(HttpRequest::Method::Get);
}

ListMergeRequestsRequest::~ListMergeRequestsRequest() {}

std::string ListMergeRequestsRequest::getAccessToken() const {
  return accessToken_;
}

void ListMergeRequestsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string ListMergeRequestsRequest::getOrderBy() const {
  return orderBy_;
}

void ListMergeRequestsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListMergeRequestsRequest::getProjectIds() const {
  return projectIds_;
}

void ListMergeRequestsRequest::setProjectIds(const std::string &projectIds) {
  projectIds_ = projectIds;
  setParameter(std::string("projectIds"), projectIds);
}

std::string ListMergeRequestsRequest::getSort() const {
  return sort_;
}

void ListMergeRequestsRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("sort"), sort);
}

std::string ListMergeRequestsRequest::getCreatedAfter() const {
  return createdAfter_;
}

void ListMergeRequestsRequest::setCreatedAfter(const std::string &createdAfter) {
  createdAfter_ = createdAfter;
  setParameter(std::string("createdAfter"), createdAfter);
}

std::string ListMergeRequestsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListMergeRequestsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListMergeRequestsRequest::getFilter() const {
  return filter_;
}

void ListMergeRequestsRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("filter"), filter);
}

std::string ListMergeRequestsRequest::getCreatedBefore() const {
  return createdBefore_;
}

void ListMergeRequestsRequest::setCreatedBefore(const std::string &createdBefore) {
  createdBefore_ = createdBefore;
  setParameter(std::string("createdBefore"), createdBefore);
}

std::string ListMergeRequestsRequest::getReviewerIds() const {
  return reviewerIds_;
}

void ListMergeRequestsRequest::setReviewerIds(const std::string &reviewerIds) {
  reviewerIds_ = reviewerIds;
  setParameter(std::string("reviewerIds"), reviewerIds);
}

std::string ListMergeRequestsRequest::getSearch() const {
  return search_;
}

void ListMergeRequestsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("search"), search);
}

std::string ListMergeRequestsRequest::getGroupIds() const {
  return groupIds_;
}

void ListMergeRequestsRequest::setGroupIds(const std::string &groupIds) {
  groupIds_ = groupIds;
  setParameter(std::string("groupIds"), groupIds);
}

long ListMergeRequestsRequest::getPageSize() const {
  return pageSize_;
}

void ListMergeRequestsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListMergeRequestsRequest::getAuthorIds() const {
  return authorIds_;
}

void ListMergeRequestsRequest::setAuthorIds(const std::string &authorIds) {
  authorIds_ = authorIds;
  setParameter(std::string("authorIds"), authorIds);
}

long ListMergeRequestsRequest::getPage() const {
  return page_;
}

void ListMergeRequestsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListMergeRequestsRequest::getState() const {
  return state_;
}

void ListMergeRequestsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("state"), state);
}

std::string ListMergeRequestsRequest::getLabelIds() const {
  return labelIds_;
}

void ListMergeRequestsRequest::setLabelIds(const std::string &labelIds) {
  labelIds_ = labelIds;
  setParameter(std::string("labelIds"), labelIds);
}

