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

#include <alibabacloud/tag/model/CreateTagsRequest.h>

using AlibabaCloud::Tag::Model::CreateTagsRequest;

CreateTagsRequest::CreateTagsRequest()
    : RpcServiceRequest("tag", "2018-08-28", "CreateTags") {
  setMethod(HttpRequest::Method::Post);
}

CreateTagsRequest::~CreateTagsRequest() {}

std::string CreateTagsRequest::getRegionId() const {
  return regionId_;
}

void CreateTagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTagsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTagsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTagsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTagsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTagsRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTagsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateTagsRequest::TagKeyValueParamList> CreateTagsRequest::getTagKeyValueParamList() const {
  return tagKeyValueParamList_;
}

void CreateTagsRequest::setTagKeyValueParamList(const std::vector<CreateTagsRequest::TagKeyValueParamList> &tagKeyValueParamList) {
  tagKeyValueParamList_ = tagKeyValueParamList;
  for(int dep1 = 0; dep1 != tagKeyValueParamList.size(); dep1++) {
  auto tagKeyValueParamListObj = tagKeyValueParamList.at(dep1);
  std::string tagKeyValueParamListObjStr = std::string("TagKeyValueParamList") + "." + std::to_string(dep1 + 1);
    setParameter(tagKeyValueParamListObjStr + ".Key", tagKeyValueParamListObj.key);
    for(int dep2 = 0; dep2 != tagKeyValueParamListObj.tagValueParamList.size(); dep2++) {
    auto tagValueParamListObj = tagKeyValueParamListObj.tagValueParamList.at(dep2);
    std::string tagValueParamListObjStr = tagKeyValueParamListObjStr + ".TagValueParamList" + "." + std::to_string(dep2 + 1);
      setParameter(tagValueParamListObjStr + ".Value", tagValueParamListObj.value);
      setParameter(tagValueParamListObjStr + ".Description", tagValueParamListObj.description);
    }
    setParameter(tagKeyValueParamListObjStr + ".Description", tagKeyValueParamListObj.description);
  }
}

