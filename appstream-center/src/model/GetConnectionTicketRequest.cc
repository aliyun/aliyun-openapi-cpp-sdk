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

#include <alibabacloud/appstream-center/model/GetConnectionTicketRequest.h>

using AlibabaCloud::Appstream_center::Model::GetConnectionTicketRequest;

GetConnectionTicketRequest::GetConnectionTicketRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "GetConnectionTicket") {
  setMethod(HttpRequest::Method::Post);
}

GetConnectionTicketRequest::~GetConnectionTicketRequest() {}

std::string GetConnectionTicketRequest::getBizRegionId() const {
  return bizRegionId_;
}

void GetConnectionTicketRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setBodyParameter(std::string("BizRegionId"), bizRegionId);
}

std::string GetConnectionTicketRequest::getAppStartParam() const {
  return appStartParam_;
}

void GetConnectionTicketRequest::setAppStartParam(const std::string &appStartParam) {
  appStartParam_ = appStartParam;
  setBodyParameter(std::string("AppStartParam"), appStartParam);
}

std::string GetConnectionTicketRequest::getProductType() const {
  return productType_;
}

void GetConnectionTicketRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string GetConnectionTicketRequest::getEndUserId() const {
  return endUserId_;
}

void GetConnectionTicketRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setBodyParameter(std::string("EndUserId"), endUserId);
}

std::vector<GetConnectionTicketRequest::FileInfos> GetConnectionTicketRequest::getFileInfos() const {
  return fileInfos_;
}

void GetConnectionTicketRequest::setFileInfos(const std::vector<GetConnectionTicketRequest::FileInfos> &fileInfos) {
  fileInfos_ = fileInfos;
  for(int dep1 = 0; dep1 != fileInfos.size(); dep1++) {
  auto fileInfosObj = fileInfos.at(dep1);
  std::string fileInfosObjStr = std::string("FileInfos") + "." + std::to_string(dep1 + 1);
    setBodyParameter(fileInfosObjStr + ".FileRegion", fileInfosObj.fileRegion);
    setBodyParameter(fileInfosObjStr + ".DriveId", fileInfosObj.driveId);
    setBodyParameter(fileInfosObjStr + ".FileName", fileInfosObj.fileName);
    setBodyParameter(fileInfosObjStr + ".FilePath", fileInfosObj.filePath);
    setBodyParameter(fileInfosObjStr + ".DriveType", fileInfosObj.driveType);
    setBodyParameter(fileInfosObjStr + ".FileId", fileInfosObj.fileId);
  }
}

std::string GetConnectionTicketRequest::getTaskId() const {
  return taskId_;
}

void GetConnectionTicketRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

std::string GetConnectionTicketRequest::getAppVersion() const {
  return appVersion_;
}

void GetConnectionTicketRequest::setAppVersion(const std::string &appVersion) {
  appVersion_ = appVersion;
  setBodyParameter(std::string("AppVersion"), appVersion);
}

std::vector<std::string> GetConnectionTicketRequest::getAppInstanceGroupIdList() const {
  return appInstanceGroupIdList_;
}

void GetConnectionTicketRequest::setAppInstanceGroupIdList(const std::vector<std::string> &appInstanceGroupIdList) {
  appInstanceGroupIdList_ = appInstanceGroupIdList;
}

std::string GetConnectionTicketRequest::getAppId() const {
  return appId_;
}

void GetConnectionTicketRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

std::string GetConnectionTicketRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void GetConnectionTicketRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setBodyParameter(std::string("AppInstanceId"), appInstanceId);
}

