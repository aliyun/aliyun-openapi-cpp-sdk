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

#include <alibabacloud/dms-enterprise/model/CreateFreeLockCorrectOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateFreeLockCorrectOrderRequest;

CreateFreeLockCorrectOrderRequest::CreateFreeLockCorrectOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateFreeLockCorrectOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateFreeLockCorrectOrderRequest::~CreateFreeLockCorrectOrderRequest() {}

long CreateFreeLockCorrectOrderRequest::getTid() const {
  return tid_;
}

void CreateFreeLockCorrectOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateFreeLockCorrectOrderRequest::Param CreateFreeLockCorrectOrderRequest::getParam() const {
  return param_;
}

void CreateFreeLockCorrectOrderRequest::setParam(const CreateFreeLockCorrectOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".SqlType", param.sqlType);
  setParameter(std::string("Param") + ".Classify", param.classify);
  setParameter(std::string("Param") + ".RollbackSQL", param.rollbackSQL);
  setParameter(std::string("Param") + ".RollbackSqlType", param.rollbackSqlType);
  for(int dep1 = 0; dep1 != param.dbItemList.size(); dep1++) {
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".DbId", std::to_string(param.dbItemList[dep1].dbId));
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".Logic", param.dbItemList[dep1].logic ? "true" : "false");
  }
  setParameter(std::string("Param") + ".ExecSQL", param.execSQL);
  setParameter(std::string("Param") + ".ExecMode", param.execMode);
  setParameter(std::string("Param") + ".RollbackAttachmentName", param.rollbackAttachmentName);
  setParameter(std::string("Param") + ".AttachmentName", param.attachmentName);
}

std::vector<CreateFreeLockCorrectOrderRequest::long> CreateFreeLockCorrectOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateFreeLockCorrectOrderRequest::setRelatedUserList(const std::vector<CreateFreeLockCorrectOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateFreeLockCorrectOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateFreeLockCorrectOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateFreeLockCorrectOrderRequest::getComment() const {
  return comment_;
}

void CreateFreeLockCorrectOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

