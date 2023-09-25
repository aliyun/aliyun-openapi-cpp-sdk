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

#include <alibabacloud/dataworks-public/model/ListEntitiesByTagsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListEntitiesByTagsRequest;

ListEntitiesByTagsRequest::ListEntitiesByTagsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListEntitiesByTags") {
  setMethod(HttpRequest::Method::Get);
}

ListEntitiesByTagsRequest::~ListEntitiesByTagsRequest() {}

std::string ListEntitiesByTagsRequest::getEntityType() const {
  return entityType_;
}

void ListEntitiesByTagsRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setParameter(std::string("EntityType"), entityType);
}

std::string ListEntitiesByTagsRequest::getNextToken() const {
  return nextToken_;
}

void ListEntitiesByTagsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListEntitiesByTagsRequest::getPageSize() const {
  return pageSize_;
}

void ListEntitiesByTagsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListEntitiesByTagsRequest::Tags> ListEntitiesByTagsRequest::getTags() const {
  return tags_;
}

void ListEntitiesByTagsRequest::setTags(const std::vector<ListEntitiesByTagsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".TagValue", tags[dep1].tagValue);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".TagKey", tags[dep1].tagKey);
  }
}

