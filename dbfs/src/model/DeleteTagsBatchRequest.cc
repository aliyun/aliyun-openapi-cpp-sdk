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

#include <alibabacloud/dbfs/model/DeleteTagsBatchRequest.h>

using AlibabaCloud::DBFS::Model::DeleteTagsBatchRequest;

DeleteTagsBatchRequest::DeleteTagsBatchRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "DeleteTagsBatch") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTagsBatchRequest::~DeleteTagsBatchRequest() {}

std::string DeleteTagsBatchRequest::getDbfsList() const {
  return dbfsList_;
}

void DeleteTagsBatchRequest::setDbfsList(const std::string &dbfsList) {
  dbfsList_ = dbfsList;
  setParameter(std::string("DbfsList"), dbfsList);
}

std::string DeleteTagsBatchRequest::getTags() const {
  return tags_;
}

void DeleteTagsBatchRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DeleteTagsBatchRequest::getRegionId() const {
  return regionId_;
}

void DeleteTagsBatchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

