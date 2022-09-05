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

#include <alibabacloud/arms/model/CreateSyntheticTaskRequest.h>

using AlibabaCloud::ARMS::Model::CreateSyntheticTaskRequest;

CreateSyntheticTaskRequest::CreateSyntheticTaskRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateSyntheticTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateSyntheticTaskRequest::~CreateSyntheticTaskRequest() {}

long CreateSyntheticTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateSyntheticTaskRequest::setTaskType(long taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), std::to_string(taskType));
}

std::string CreateSyntheticTaskRequest::getIntervalType() const {
  return intervalType_;
}

void CreateSyntheticTaskRequest::setIntervalType(const std::string &intervalType) {
  intervalType_ = intervalType;
  setParameter(std::string("IntervalType"), intervalType);
}

bool CreateSyntheticTaskRequest::getUpdateTask() const {
  return updateTask_;
}

void CreateSyntheticTaskRequest::setUpdateTask(bool updateTask) {
  updateTask_ = updateTask;
  setParameter(std::string("UpdateTask"), updateTask ? "true" : "false");
}

std::string CreateSyntheticTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateSyntheticTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::vector<CreateSyntheticTaskRequest::MonitorList> CreateSyntheticTaskRequest::getMonitorList() const {
  return monitorList_;
}

void CreateSyntheticTaskRequest::setMonitorList(const std::vector<CreateSyntheticTaskRequest::MonitorList> &monitorList) {
  monitorList_ = monitorList;
  for(int dep1 = 0; dep1 != monitorList.size(); dep1++) {
    setParameter(std::string("MonitorList") + "." + std::to_string(dep1 + 1) + ".NetServiceId", std::to_string(monitorList[dep1].netServiceId));
    setParameter(std::string("MonitorList") + "." + std::to_string(dep1 + 1) + ".MonitorType", std::to_string(monitorList[dep1].monitorType));
    setParameter(std::string("MonitorList") + "." + std::to_string(dep1 + 1) + ".CityCode", std::to_string(monitorList[dep1].cityCode));
  }
}

long CreateSyntheticTaskRequest::getIpType() const {
  return ipType_;
}

void CreateSyntheticTaskRequest::setIpType(long ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), std::to_string(ipType));
}

std::string CreateSyntheticTaskRequest::getUrl() const {
  return url_;
}

void CreateSyntheticTaskRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string CreateSyntheticTaskRequest::getIntervalTime() const {
  return intervalTime_;
}

void CreateSyntheticTaskRequest::setIntervalTime(const std::string &intervalTime) {
  intervalTime_ = intervalTime;
  setParameter(std::string("IntervalTime"), intervalTime);
}

CreateSyntheticTaskRequest::CommonParam CreateSyntheticTaskRequest::getCommonParam() const {
  return commonParam_;
}

void CreateSyntheticTaskRequest::setCommonParam(const CreateSyntheticTaskRequest::CommonParam &commonParam) {
  commonParam_ = commonParam;
  setParameter(std::string("CommonParam") + ".AlertNotifierId", commonParam.alertNotifierId);
  setParameter(std::string("CommonParam") + ".AlertPolicyId", commonParam.alertPolicyId);
  for(int dep1 = 0; dep1 != commonParam.alertList.size(); dep1++) {
    setParameter(std::string("CommonParam") + ".AlertList." + std::to_string(dep1 + 1) + ".IsCritical", std::to_string(commonParam.alertList[dep1].isCritical));
    setParameter(std::string("CommonParam") + ".AlertList." + std::to_string(dep1 + 1) + ".Name", commonParam.alertList[dep1].name);
    setParameter(std::string("CommonParam") + ".AlertList." + std::to_string(dep1 + 1) + ".SeriousAlert", commonParam.alertList[dep1].seriousAlert);
    setParameter(std::string("CommonParam") + ".AlertList." + std::to_string(dep1 + 1) + ".GeneralAlert", commonParam.alertList[dep1].generalAlert);
    setParameter(std::string("CommonParam") + ".AlertList." + std::to_string(dep1 + 1) + ".Symbols", std::to_string(commonParam.alertList[dep1].symbols));
  }
  setParameter(std::string("CommonParam") + ".AlarmFlag", commonParam.alarmFlag);
  setParameter(std::string("CommonParam") + ".StartExecutionTime", std::to_string(commonParam.startExecutionTime));
  setParameter(std::string("CommonParam") + ".MonitorSamples", std::to_string(commonParam.monitorSamples));
}

CreateSyntheticTaskRequest::ExtendInterval CreateSyntheticTaskRequest::getExtendInterval() const {
  return extendInterval_;
}

void CreateSyntheticTaskRequest::setExtendInterval(const CreateSyntheticTaskRequest::ExtendInterval &extendInterval) {
  extendInterval_ = extendInterval;
  setParameter(std::string("ExtendInterval") + ".StartMinute", std::to_string(extendInterval.startMinute));
  setParameter(std::string("ExtendInterval") + ".EndHour", std::to_string(extendInterval.endHour));
  setParameter(std::string("ExtendInterval") + ".EndMinute", std::to_string(extendInterval.endMinute));
  setParameter(std::string("ExtendInterval") + ".StartHour", std::to_string(extendInterval.startHour));
  setParameter(std::string("ExtendInterval") + ".EndTime", extendInterval.endTime);
  for(int dep1 = 0; dep1 != extendInterval.days.size(); dep1++) {
    setParameter(std::string("ExtendInterval") + ".Days." + std::to_string(dep1 + 1), std::to_string(extendInterval.days[dep1]));
  }
  setParameter(std::string("ExtendInterval") + ".StartTime", extendInterval.startTime);
}

CreateSyntheticTaskRequest::Navigation CreateSyntheticTaskRequest::getNavigation() const {
  return navigation_;
}

void CreateSyntheticTaskRequest::setNavigation(const CreateSyntheticTaskRequest::Navigation &navigation) {
  navigation_ = navigation;
  setParameter(std::string("Navigation") + ".ExecuteActiveX", std::to_string(navigation.executeActiveX));
  setParameter(std::string("Navigation") + ".NavCustomHostIp", navigation.navCustomHostIp);
  setParameter(std::string("Navigation") + ".NavReturnElement", std::to_string(navigation.navReturnElement));
  setParameter(std::string("Navigation") + ".QUICVersion", std::to_string(navigation.qUICVersion));
  setParameter(std::string("Navigation") + ".SlowElementThreshold", std::to_string(navigation.slowElementThreshold));
  setParameter(std::string("Navigation") + ".WaitCompletionTime", std::to_string(navigation.waitCompletionTime));
  setParameter(std::string("Navigation") + ".QUICDomain", navigation.qUICDomain);
  setParameter(std::string("Navigation") + ".NavCustomHeaderContent", navigation.navCustomHeaderContent);
  setParameter(std::string("Navigation") + ".ResponseHeader", std::to_string(navigation.responseHeader));
  setParameter(std::string("Navigation") + ".VerifyStringWhiteList", navigation.verifyStringWhiteList);
  setParameter(std::string("Navigation") + ".MonitorTimeout", navigation.monitorTimeout);
  setParameter(std::string("Navigation") + ".FilterInvalidIP", std::to_string(navigation.filterInvalidIP));
  setParameter(std::string("Navigation") + ".FlowHijackLogo", navigation.flowHijackLogo);
  setParameter(std::string("Navigation") + ".NavDisableCache", std::to_string(navigation.navDisableCache));
  setParameter(std::string("Navigation") + ".ElementBlacklist", navigation.elementBlacklist);
  setParameter(std::string("Navigation") + ".FlowHijackJumpTimes", std::to_string(navigation.flowHijackJumpTimes));
  setParameter(std::string("Navigation") + ".ExecuteScript", std::to_string(navigation.executeScript));
  setParameter(std::string("Navigation") + ".NavDisableCompression", navigation.navDisableCompression);
  setParameter(std::string("Navigation") + ".DNSHijackWhiteList", navigation.dNSHijackWhiteList);
  setParameter(std::string("Navigation") + ".ProcessName", navigation.processName);
  setParameter(std::string("Navigation") + ".VerifyStringBlacklist", navigation.verifyStringBlacklist);
  setParameter(std::string("Navigation") + ".NavAutomaticScrolling", navigation.navAutomaticScrolling);
  setParameter(std::string("Navigation") + ".NavRedirection", std::to_string(navigation.navRedirection));
  setParameter(std::string("Navigation") + ".NavCustomHeader", navigation.navCustomHeader);
  setParameter(std::string("Navigation") + ".ExecuteApplication", std::to_string(navigation.executeApplication));
  setParameter(std::string("Navigation") + ".NavCustomHost", std::to_string(navigation.navCustomHost));
  setParameter(std::string("Navigation") + ".NavIgnoreCertificateError", std::to_string(navigation.navIgnoreCertificateError));
  setParameter(std::string("Navigation") + ".PageTamper", navigation.pageTamper);
  setParameter(std::string("Navigation") + ".RequestHeader", std::to_string(navigation.requestHeader));
}

CreateSyntheticTaskRequest::Download CreateSyntheticTaskRequest::getDownload() const {
  return download_;
}

void CreateSyntheticTaskRequest::setDownload(const CreateSyntheticTaskRequest::Download &download) {
  download_ = download;
  setParameter(std::string("Download") + ".DownloadIgnoreCertificateError", download.downloadIgnoreCertificateError);
  setParameter(std::string("Download") + ".DownloadCustomHost", std::to_string(download.downloadCustomHost));
  setParameter(std::string("Download") + ".ConnectionTimeout", std::to_string(download.connectionTimeout));
  setParameter(std::string("Download") + ".DownloadKernel", std::to_string(download.downloadKernel));
  setParameter(std::string("Download") + ".WhiteList", download.whiteList);
  setParameter(std::string("Download") + ".DownloadRedirection", std::to_string(download.downloadRedirection));
  setParameter(std::string("Download") + ".MonitorTimeout", std::to_string(download.monitorTimeout));
  setParameter(std::string("Download") + ".ValidateKeywords", download.validateKeywords);
  setParameter(std::string("Download") + ".DownloadTransmissionSize", std::to_string(download.downloadTransmissionSize));
  setParameter(std::string("Download") + ".QuickProtocol", download.quickProtocol);
  setParameter(std::string("Download") + ".DownloadCustomHeaderContent", download.downloadCustomHeaderContent);
  setParameter(std::string("Download") + ".VerifyWay", std::to_string(download.verifyWay));
  setParameter(std::string("Download") + ".DownloadCustomHostIp", download.downloadCustomHostIp);
}

CreateSyntheticTaskRequest::Protocol CreateSyntheticTaskRequest::getProtocol() const {
  return protocol_;
}

void CreateSyntheticTaskRequest::setProtocol(const CreateSyntheticTaskRequest::Protocol &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol") + ".ReceivedDataSize", std::to_string(protocol.receivedDataSize));
  setParameter(std::string("Protocol") + ".ProtocolMonitorTimeout", protocol.protocolMonitorTimeout);
  setParameter(std::string("Protocol") + ".RequestContent.Method", protocol.requestContent.method);
  for(int dep1 = 0; dep1 != protocol.requestContent.header.size(); dep1++) {
    setParameter(std::string("Protocol") + ".RequestContent.Header." + std::to_string(dep1 + 1) + ".Value", protocol.requestContent.header[dep1].value);
    setParameter(std::string("Protocol") + ".RequestContent.Header." + std::to_string(dep1 + 1) + ".Key", protocol.requestContent.header[dep1].key);
  }
  setParameter(std::string("Protocol") + ".RequestContent.Body.Mode", protocol.requestContent.body.mode);
  setParameter(std::string("Protocol") + ".RequestContent.Body.Raw", protocol.requestContent.body.raw);
  for(int dep1 = 0; dep1 != protocol.requestContent.body.urlEncoding.size(); dep1++) {
    setParameter(std::string("Protocol") + ".RequestContent.Body.UrlEncoding." + std::to_string(dep1 + 1) + ".Value", protocol.requestContent.body.urlEncoding[dep1].value);
    setParameter(std::string("Protocol") + ".RequestContent.Body.UrlEncoding." + std::to_string(dep1 + 1) + ".Key", protocol.requestContent.body.urlEncoding[dep1].key);
  }
  setParameter(std::string("Protocol") + ".RequestContent.Body.Language", protocol.requestContent.body.language);
  for(int dep1 = 0; dep1 != protocol.requestContent.body.formData.size(); dep1++) {
    setParameter(std::string("Protocol") + ".RequestContent.Body.FormData." + std::to_string(dep1 + 1) + ".Value", protocol.requestContent.body.formData[dep1].value);
    setParameter(std::string("Protocol") + ".RequestContent.Body.FormData." + std::to_string(dep1 + 1) + ".Key", protocol.requestContent.body.formData[dep1].key);
  }
  setParameter(std::string("Protocol") + ".ProtocolConnectionTime", std::to_string(protocol.protocolConnectionTime));
  setParameter(std::string("Protocol") + ".CharacterEncoding", std::to_string(protocol.characterEncoding));
  setParameter(std::string("Protocol") + ".VerifyContent", protocol.verifyContent);
  setParameter(std::string("Protocol") + ".CustomHost", std::to_string(protocol.customHost));
  setParameter(std::string("Protocol") + ".ProtocolConnectionTimeout", std::to_string(protocol.protocolConnectionTimeout));
  setParameter(std::string("Protocol") + ".CustomHostIp", protocol.customHostIp);
  setParameter(std::string("Protocol") + ".VerifyWay", std::to_string(protocol.verifyWay));
}

std::string CreateSyntheticTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateSyntheticTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

CreateSyntheticTaskRequest::Net CreateSyntheticTaskRequest::getNet() const {
  return net_;
}

void CreateSyntheticTaskRequest::setNet(const CreateSyntheticTaskRequest::Net &net) {
  net_ = net;
  setParameter(std::string("Net") + ".NetICMPTimeout", std::to_string(net.netICMPTimeout));
  setParameter(std::string("Net") + ".NetTraceRouteTimeout", std::to_string(net.netTraceRouteTimeout));
  setParameter(std::string("Net") + ".NetICMPActive", std::to_string(net.netICMPActive));
  setParameter(std::string("Net") + ".NetICMPDataCut", std::to_string(net.netICMPDataCut));
  setParameter(std::string("Net") + ".NetICMPNum", std::to_string(net.netICMPNum));
  setParameter(std::string("Net") + ".NetDNSTimeout", std::to_string(net.netDNSTimeout));
  setParameter(std::string("Net") + ".NetDNSQueryMethod", std::to_string(net.netDNSQueryMethod));
  setParameter(std::string("Net") + ".WhiteList", net.whiteList);
  setParameter(std::string("Net") + ".NetDNSNs", net.netDNSNs);
  setParameter(std::string("Net") + ".NetDNSServer", std::to_string(net.netDNSServer));
  setParameter(std::string("Net") + ".NetTraceRouteSwitch", std::to_string(net.netTraceRouteSwitch));
  setParameter(std::string("Net") + ".NetDigSwitch", std::to_string(net.netDigSwitch));
  setParameter(std::string("Net") + ".NetICMPInterval", std::to_string(net.netICMPInterval));
  setParameter(std::string("Net") + ".NetDNSSwitch", std::to_string(net.netDNSSwitch));
  setParameter(std::string("Net") + ".NetTraceRouteNum", std::to_string(net.netTraceRouteNum));
  setParameter(std::string("Net") + ".NetICMPSwitch", std::to_string(net.netICMPSwitch));
  setParameter(std::string("Net") + ".NetICMPSize", std::to_string(net.netICMPSize));
}

