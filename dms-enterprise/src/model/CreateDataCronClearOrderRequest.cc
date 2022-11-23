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

#include <alibabacloud/dms-enterprise/model/CreateDataCronClearOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataCronClearOrderRequest;

CreateDataCronClearOrderRequest::CreateDataCronClearOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataCronClearOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataCronClearOrderRequest::~CreateDataCronClearOrderRequest() {}

long CreateDataCronClearOrderRequest::getTid() const {
  return tid_;
}

void CreateDataCronClearOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateDataCronClearOrderRequest::Param CreateDataCronClearOrderRequest::getParam() const {
  return param_;
}

void CreateDataCronClearOrderRequest::setParam(const CreateDataCronClearOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".Classify", param.classify);
  for(int dep1 = 0; dep1 != param.dbItemList.size(); dep1++) {
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".DbId", std::to_string(param.dbItemList[dep1].dbId));
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".Logic", param.dbItemList[dep1].logic ? "true" : "false");
  }
  for(int dep1 = 0; dep1 != param.cronClearItemList.size(); dep1++) {
    setParameter(std::string("Param") + ".CronClearItemList." + std::to_string(dep1 + 1) + ".FilterSQL", param.cronClearItemList[dep1].filterSQL);
    setParameter(std::string("Param") + ".CronClearItemList." + std::to_string(dep1 + 1) + ".RemainDays", std::to_string(param.cronClearItemList[dep1].remainDays));
    setParameter(std::string("Param") + ".CronClearItemList." + std::to_string(dep1 + 1) + ".TableName", param.cronClearItemList[dep1].tableName);
    setParameter(std::string("Param") + ".CronClearItemList." + std::to_string(dep1 + 1) + ".ColumnName", param.cronClearItemList[dep1].columnName);
    setParameter(std::string("Param") + ".CronClearItemList." + std::to_string(dep1 + 1) + ".TimeUnit", param.cronClearItemList[dep1].timeUnit);
  }
  setParameter(std::string("Param") + ".DurationHour", std::to_string(param.durationHour));
  setParameter(std::string("Param") + ".CronFormat", param.cronFormat);
  setParameter(std::string("Param") + ".specifyDuration", param.specifyDuration ? "true" : "false");
}

std::vector<CreateDataCronClearOrderRequest::long> CreateDataCronClearOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDataCronClearOrderRequest::setRelatedUserList(const std::vector<CreateDataCronClearOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateDataCronClearOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateDataCronClearOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateDataCronClearOrderRequest::getComment() const {
  return comment_;
}

void CreateDataCronClearOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

