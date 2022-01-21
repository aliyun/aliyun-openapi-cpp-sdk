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

#include <alibabacloud/cms/model/CreateDynamicTagGroupRequest.h>

using AlibabaCloud::Cms::Model::CreateDynamicTagGroupRequest;

CreateDynamicTagGroupRequest::CreateDynamicTagGroupRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateDynamicTagGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateDynamicTagGroupRequest::~CreateDynamicTagGroupRequest() {}

bool CreateDynamicTagGroupRequest::getEnableSubscribeEvent() const {
  return enableSubscribeEvent_;
}

void CreateDynamicTagGroupRequest::setEnableSubscribeEvent(bool enableSubscribeEvent) {
  enableSubscribeEvent_ = enableSubscribeEvent;
  setParameter(std::string("EnableSubscribeEvent"), enableSubscribeEvent ? "true" : "false");
}

std::string CreateDynamicTagGroupRequest::getMatchExpressFilterRelation() const {
  return matchExpressFilterRelation_;
}

void CreateDynamicTagGroupRequest::setMatchExpressFilterRelation(const std::string &matchExpressFilterRelation) {
  matchExpressFilterRelation_ = matchExpressFilterRelation;
  setParameter(std::string("MatchExpressFilterRelation"), matchExpressFilterRelation);
}

bool CreateDynamicTagGroupRequest::getEnableInstallAgent() const {
  return enableInstallAgent_;
}

void CreateDynamicTagGroupRequest::setEnableInstallAgent(bool enableInstallAgent) {
  enableInstallAgent_ = enableInstallAgent;
  setParameter(std::string("EnableInstallAgent"), enableInstallAgent ? "true" : "false");
}

std::vector<CreateDynamicTagGroupRequest::MatchExpress> CreateDynamicTagGroupRequest::getMatchExpress() const {
  return matchExpress_;
}

void CreateDynamicTagGroupRequest::setMatchExpress(const std::vector<CreateDynamicTagGroupRequest::MatchExpress> &matchExpress) {
  matchExpress_ = matchExpress;
  for(int dep1 = 0; dep1 != matchExpress.size(); dep1++) {
  auto matchExpressObj = matchExpress.at(dep1);
  std::string matchExpressObjStr = std::string("MatchExpress") + "." + std::to_string(dep1 + 1);
    setParameter(matchExpressObjStr + ".TagValue", matchExpressObj.tagValue);
    setParameter(matchExpressObjStr + ".TagValueMatchFunction", matchExpressObj.tagValueMatchFunction);
  }
}

std::vector<std::string> CreateDynamicTagGroupRequest::getContactGroupList() const {
  return contactGroupList_;
}

void CreateDynamicTagGroupRequest::setContactGroupList(const std::vector<std::string> &contactGroupList) {
  contactGroupList_ = contactGroupList;
}

std::vector<std::string> CreateDynamicTagGroupRequest::getTemplateIdList() const {
  return templateIdList_;
}

void CreateDynamicTagGroupRequest::setTemplateIdList(const std::vector<std::string> &templateIdList) {
  templateIdList_ = templateIdList;
}

std::string CreateDynamicTagGroupRequest::getTagKey() const {
  return tagKey_;
}

void CreateDynamicTagGroupRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

std::string CreateDynamicTagGroupRequest::getTagRegionId() const {
  return tagRegionId_;
}

void CreateDynamicTagGroupRequest::setTagRegionId(const std::string &tagRegionId) {
  tagRegionId_ = tagRegionId;
  setParameter(std::string("TagRegionId"), tagRegionId);
}

