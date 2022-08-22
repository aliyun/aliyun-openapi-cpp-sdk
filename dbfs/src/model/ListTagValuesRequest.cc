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

#include <alibabacloud/dbfs/model/ListTagValuesRequest.h>

using AlibabaCloud::DBFS::Model::ListTagValuesRequest;

ListTagValuesRequest::ListTagValuesRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ListTagValues") {
  setMethod(HttpRequest::Method::Post);
}

ListTagValuesRequest::~ListTagValuesRequest() {}

std::string ListTagValuesRequest::getRegionId() const {
  return regionId_;
}

void ListTagValuesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagValuesRequest::getTagKey() const {
  return tagKey_;
}

void ListTagValuesRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

