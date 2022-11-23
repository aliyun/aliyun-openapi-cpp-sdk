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

#include <alibabacloud/dms-enterprise/model/CreateStructSyncOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateStructSyncOrderRequest;

CreateStructSyncOrderRequest::CreateStructSyncOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateStructSyncOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateStructSyncOrderRequest::~CreateStructSyncOrderRequest() {}

long CreateStructSyncOrderRequest::getTid() const {
  return tid_;
}

void CreateStructSyncOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateStructSyncOrderRequest::Param CreateStructSyncOrderRequest::getParam() const {
  return param_;
}

void CreateStructSyncOrderRequest::setParam(const CreateStructSyncOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".SyncType", param.syncType);
  for(int dep1 = 0; dep1 != param.tableInfoList.size(); dep1++) {
    setParameter(std::string("Param") + ".TableInfoList." + std::to_string(dep1 + 1) + ".SourceTableName", param.tableInfoList[dep1].sourceTableName);
    setParameter(std::string("Param") + ".TableInfoList." + std::to_string(dep1 + 1) + ".TargetTableName", param.tableInfoList[dep1].targetTableName);
  }
  setParameter(std::string("Param") + ".Source.DbSearchName", param.source.dbSearchName);
  setParameter(std::string("Param") + ".Source.VersionId", param.source.versionId);
  setParameter(std::string("Param") + ".Source.DbId", std::to_string(param.source.dbId));
  setParameter(std::string("Param") + ".Source.Logic", param.source.logic ? "true" : "false");
  setParameter(std::string("Param") + ".IgnoreError", param.ignoreError ? "true" : "false");
  setParameter(std::string("Param") + ".Target.DbSearchName", param.target.dbSearchName);
  setParameter(std::string("Param") + ".Target.VersionId", param.target.versionId);
  setParameter(std::string("Param") + ".Target.DbId", std::to_string(param.target.dbId));
  setParameter(std::string("Param") + ".Target.Logic", param.target.logic ? "true" : "false");
}

std::vector<CreateStructSyncOrderRequest::long> CreateStructSyncOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateStructSyncOrderRequest::setRelatedUserList(const std::vector<CreateStructSyncOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateStructSyncOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateStructSyncOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateStructSyncOrderRequest::getComment() const {
  return comment_;
}

void CreateStructSyncOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

