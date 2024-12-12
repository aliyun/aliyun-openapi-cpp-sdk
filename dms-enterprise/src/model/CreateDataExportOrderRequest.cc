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

#include <alibabacloud/dms-enterprise/model/CreateDataExportOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataExportOrderRequest;

CreateDataExportOrderRequest::CreateDataExportOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataExportOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataExportOrderRequest::~CreateDataExportOrderRequest() {}

long CreateDataExportOrderRequest::getParentId() const {
  return parentId_;
}

void CreateDataExportOrderRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

long CreateDataExportOrderRequest::getTid() const {
  return tid_;
}

void CreateDataExportOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<CreateDataExportOrderRequest::long> CreateDataExportOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDataExportOrderRequest::setRelatedUserList(const std::vector<CreateDataExportOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

CreateDataExportOrderRequest::PluginParam CreateDataExportOrderRequest::getPluginParam() const {
  return pluginParam_;
}

void CreateDataExportOrderRequest::setPluginParam(const CreateDataExportOrderRequest::PluginParam &pluginParam) {
  pluginParam_ = pluginParam;
  setParameter(std::string("PluginParam") + ".Classify", pluginParam.classify);
  setParameter(std::string("PluginParam") + ".AffectRows", std::to_string(pluginParam.affectRows));
  setParameter(std::string("PluginParam") + ".InstanceId", std::to_string(pluginParam.instanceId));
  setParameter(std::string("PluginParam") + ".Watermark.DataWatermark", pluginParam.watermark.dataWatermark);
  setParameter(std::string("PluginParam") + ".Watermark.FileWatermark", pluginParam.watermark.fileWatermark);
  for(int dep1 = 0; dep1 != pluginParam.watermark.keys.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Watermark.Keys." + std::to_string(dep1 + 1), pluginParam.watermark.keys[dep1]);
  }
  for(int dep1 = 0; dep1 != pluginParam.watermark.watermarkTypes.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Watermark.WatermarkTypes." + std::to_string(dep1 + 1), pluginParam.watermark.watermarkTypes[dep1]);
  }
  setParameter(std::string("PluginParam") + ".Watermark.ColumnName", pluginParam.watermark.columnName);
  setParameter(std::string("PluginParam") + ".DbId", std::to_string(pluginParam.dbId));
  setParameter(std::string("PluginParam") + ".ExeSQL", pluginParam.exeSQL);
  setParameter(std::string("PluginParam") + ".IgnoreAffectRowsReason", pluginParam.ignoreAffectRowsReason);
  setParameter(std::string("PluginParam") + ".Logic", pluginParam.logic ? "true" : "false");
  setParameter(std::string("PluginParam") + ".IgnoreAffectRows", pluginParam.ignoreAffectRows ? "true" : "false");
}

std::string CreateDataExportOrderRequest::getRealLoginUserUid() const {
  return realLoginUserUid_;
}

void CreateDataExportOrderRequest::setRealLoginUserUid(const std::string &realLoginUserUid) {
  realLoginUserUid_ = realLoginUserUid;
  setParameter(std::string("RealLoginUserUid"), realLoginUserUid);
}

std::string CreateDataExportOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateDataExportOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateDataExportOrderRequest::getComment() const {
  return comment_;
}

void CreateDataExportOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

