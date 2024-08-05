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

#include <alibabacloud/arms/model/CreateTimingSyntheticTaskRequest.h>

using AlibabaCloud::ARMS::Model::CreateTimingSyntheticTaskRequest;

CreateTimingSyntheticTaskRequest::CreateTimingSyntheticTaskRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateTimingSyntheticTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateTimingSyntheticTaskRequest::~CreateTimingSyntheticTaskRequest() {}

std::vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> CreateTimingSyntheticTaskRequest::getAvailableAssertions() const {
  return availableAssertions_;
}

void CreateTimingSyntheticTaskRequest::setAvailableAssertions(const std::vector<CreateTimingSyntheticTaskRequest::AvailableAssertions> &availableAssertions) {
  availableAssertions_ = availableAssertions;
  for(int dep1 = 0; dep1 != availableAssertions.size(); dep1++) {
    setParameter(std::string("AvailableAssertions") + "." + std::to_string(dep1 + 1) + ".Expect", availableAssertions[dep1].expect);
    setParameter(std::string("AvailableAssertions") + "." + std::to_string(dep1 + 1) + ".Type", availableAssertions[dep1].type);
    setParameter(std::string("AvailableAssertions") + "." + std::to_string(dep1 + 1) + ".Operator", availableAssertions[dep1]._operator);
    setParameter(std::string("AvailableAssertions") + "." + std::to_string(dep1 + 1) + ".Target", availableAssertions[dep1].target);
  }
}

int CreateTimingSyntheticTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateTimingSyntheticTaskRequest::setTaskType(int taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), std::to_string(taskType));
}

CreateTimingSyntheticTaskRequest::CommonSetting CreateTimingSyntheticTaskRequest::getCommonSetting() const {
  return commonSetting_;
}

void CreateTimingSyntheticTaskRequest::setCommonSetting(const CreateTimingSyntheticTaskRequest::CommonSetting &commonSetting) {
  commonSetting_ = commonSetting;
  for(auto const &iter1 : commonSetting.customPrometheusSetting.prometheusLabels) {
    setParameter(std::string("CommonSetting") + ".CustomPrometheusSetting.PrometheusLabels." + iter1.first, iter1.second);
  }
  setParameter(std::string("CommonSetting") + ".CustomPrometheusSetting.PrometheusClusterRegion", commonSetting.customPrometheusSetting.prometheusClusterRegion);
  setParameter(std::string("CommonSetting") + ".CustomPrometheusSetting.PrometheusClusterId", commonSetting.customPrometheusSetting.prometheusClusterId);
  for(int dep1 = 0; dep1 != commonSetting.customHost.hosts.size(); dep1++) {
    setParameter(std::string("CommonSetting") + ".CustomHost.Hosts." + std::to_string(dep1 + 1) + ".Domain", commonSetting.customHost.hosts[dep1].domain);
    setParameter(std::string("CommonSetting") + ".CustomHost.Hosts." + std::to_string(dep1 + 1) + ".IpType", std::to_string(commonSetting.customHost.hosts[dep1].ipType));
    for(int dep2 = 0; dep2 != commonSetting.customHost.hosts[dep1].ips.size(); dep2++) {
      setParameter(std::string("CommonSetting") + ".CustomHost.Hosts." + std::to_string(dep1 + 1) + ".Ips." + std::to_string(dep2 + 1), commonSetting.customHost.hosts[dep1].ips[dep2]);
    }
  }
  setParameter(std::string("CommonSetting") + ".CustomHost.SelectType", std::to_string(commonSetting.customHost.selectType));
  setParameter(std::string("CommonSetting") + ".XtraceRegion", commonSetting.xtraceRegion);
  setParameter(std::string("CommonSetting") + ".IpType", std::to_string(commonSetting.ipType));
  setParameter(std::string("CommonSetting") + ".IsOpenTrace", commonSetting.isOpenTrace ? "true" : "false");
  setParameter(std::string("CommonSetting") + ".TraceClientType", std::to_string(commonSetting.traceClientType));
  setParameter(std::string("CommonSetting") + ".CustomVPCSetting.VSwitchId", commonSetting.customVPCSetting.vSwitchId);
  setParameter(std::string("CommonSetting") + ".CustomVPCSetting.SecureGroupId", commonSetting.customVPCSetting.secureGroupId);
  setParameter(std::string("CommonSetting") + ".CustomVPCSetting.RegionId", commonSetting.customVPCSetting.regionId);
  setParameter(std::string("CommonSetting") + ".CustomVPCSetting.VpcId", commonSetting.customVPCSetting.vpcId);
  setParameter(std::string("CommonSetting") + ".MonitorSamples", std::to_string(commonSetting.monitorSamples));
}

int CreateTimingSyntheticTaskRequest::getMonitorCategory() const {
  return monitorCategory_;
}

void CreateTimingSyntheticTaskRequest::setMonitorCategory(int monitorCategory) {
  monitorCategory_ = monitorCategory;
  setParameter(std::string("MonitorCategory"), std::to_string(monitorCategory));
}

std::string CreateTimingSyntheticTaskRequest::getFrequency() const {
  return frequency_;
}

void CreateTimingSyntheticTaskRequest::setFrequency(const std::string &frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), frequency);
}

std::vector<CreateTimingSyntheticTaskRequest::Tags> CreateTimingSyntheticTaskRequest::getTags() const {
  return tags_;
}

void CreateTimingSyntheticTaskRequest::setTags(const std::vector<CreateTimingSyntheticTaskRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string CreateTimingSyntheticTaskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTimingSyntheticTaskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

CreateTimingSyntheticTaskRequest::MonitorConf CreateTimingSyntheticTaskRequest::getMonitorConf() const {
  return monitorConf_;
}

void CreateTimingSyntheticTaskRequest::setMonitorConf(const CreateTimingSyntheticTaskRequest::MonitorConf &monitorConf) {
  monitorConf_ = monitorConf;
  setParameter(std::string("MonitorConf") + ".NetICMP.TracertTimeout", std::to_string(monitorConf.netICMP.tracertTimeout));
  setParameter(std::string("MonitorConf") + ".NetICMP.Interval", std::to_string(monitorConf.netICMP.interval));
  setParameter(std::string("MonitorConf") + ".NetICMP.SplitPackage", monitorConf.netICMP.splitPackage ? "true" : "false");
  setParameter(std::string("MonitorConf") + ".NetICMP.PackageSize", std::to_string(monitorConf.netICMP.packageSize));
  setParameter(std::string("MonitorConf") + ".NetICMP.TracertEnable", monitorConf.netICMP.tracertEnable ? "true" : "false");
  setParameter(std::string("MonitorConf") + ".NetICMP.TargetUrl", monitorConf.netICMP.targetUrl);
  setParameter(std::string("MonitorConf") + ".NetICMP.Timeout", std::to_string(monitorConf.netICMP.timeout));
  setParameter(std::string("MonitorConf") + ".NetICMP.PackageNum", std::to_string(monitorConf.netICMP.packageNum));
  setParameter(std::string("MonitorConf") + ".NetICMP.TracertNumMax", std::to_string(monitorConf.netICMP.tracertNumMax));
  setParameter(std::string("MonitorConf") + ".ApiHTTP.ConnectTimeout", std::to_string(monitorConf.apiHTTP.connectTimeout));
  setParameter(std::string("MonitorConf") + ".ApiHTTP.RequestBody.Type", monitorConf.apiHTTP.requestBody.type);
  setParameter(std::string("MonitorConf") + ".ApiHTTP.RequestBody.Content", monitorConf.apiHTTP.requestBody.content);
  setParameter(std::string("MonitorConf") + ".ApiHTTP.Method", monitorConf.apiHTTP.method);
  setParameter(std::string("MonitorConf") + ".ApiHTTP.CheckCert", monitorConf.apiHTTP.checkCert ? "true" : "false");
  setParameter(std::string("MonitorConf") + ".ApiHTTP.ProtocolAlpnProtocol", std::to_string(monitorConf.apiHTTP.protocolAlpnProtocol));
  for(auto const &iter1 : monitorConf.apiHTTP.requestHeaders) {
    setParameter(std::string("MonitorConf") + ".ApiHTTP.RequestHeaders." + iter1.first, iter1.second);
  }
  setParameter(std::string("MonitorConf") + ".ApiHTTP.TargetUrl", monitorConf.apiHTTP.targetUrl);
  setParameter(std::string("MonitorConf") + ".ApiHTTP.Timeout", std::to_string(monitorConf.apiHTTP.timeout));
  setParameter(std::string("MonitorConf") + ".Website.FlowHijackJumpTimes", std::to_string(monitorConf.website.flowHijackJumpTimes));
  setParameter(std::string("MonitorConf") + ".Website.DNSHijackWhitelist", monitorConf.website.dNSHijackWhitelist);
  setParameter(std::string("MonitorConf") + ".Website.SlowElementThreshold", std::to_string(monitorConf.website.slowElementThreshold));
  setParameter(std::string("MonitorConf") + ".Website.VerifyStringBlacklist", monitorConf.website.verifyStringBlacklist);
  setParameter(std::string("MonitorConf") + ".Website.CustomHeader", std::to_string(monitorConf.website.customHeader));
  setParameter(std::string("MonitorConf") + ".Website.WaitCompletionTime", std::to_string(monitorConf.website.waitCompletionTime));
  setParameter(std::string("MonitorConf") + ".Website.DisableCompression", std::to_string(monitorConf.website.disableCompression));
  setParameter(std::string("MonitorConf") + ".Website.MonitorTimeout", std::to_string(monitorConf.website.monitorTimeout));
  setParameter(std::string("MonitorConf") + ".Website.VerifyStringWhitelist", monitorConf.website.verifyStringWhitelist);
  for(auto const &iter1 : monitorConf.website.customHeaderContent) {
    setParameter(std::string("MonitorConf") + ".Website.CustomHeaderContent." + iter1.first, iter1.second);
  }
  setParameter(std::string("MonitorConf") + ".Website.FilterInvalidIP", std::to_string(monitorConf.website.filterInvalidIP));
  setParameter(std::string("MonitorConf") + ".Website.DisableCache", std::to_string(monitorConf.website.disableCache));
  setParameter(std::string("MonitorConf") + ".Website.PageTamper", monitorConf.website.pageTamper);
  setParameter(std::string("MonitorConf") + ".Website.FlowHijackLogo", monitorConf.website.flowHijackLogo);
  setParameter(std::string("MonitorConf") + ".Website.AutomaticScrolling", std::to_string(monitorConf.website.automaticScrolling));
  setParameter(std::string("MonitorConf") + ".Website.TargetUrl", monitorConf.website.targetUrl);
  setParameter(std::string("MonitorConf") + ".Website.Redirection", std::to_string(monitorConf.website.redirection));
  setParameter(std::string("MonitorConf") + ".Website.IgnoreCertificateError", std::to_string(monitorConf.website.ignoreCertificateError));
  setParameter(std::string("MonitorConf") + ".Website.ElementBlacklist", monitorConf.website.elementBlacklist);
  setParameter(std::string("MonitorConf") + ".Stream.PlayerType", std::to_string(monitorConf.stream.playerType));
  setParameter(std::string("MonitorConf") + ".Stream.StreamType", std::to_string(monitorConf.stream.streamType));
  setParameter(std::string("MonitorConf") + ".Stream.StreamAddressType", std::to_string(monitorConf.stream.streamAddressType));
  for(auto const &iter1 : monitorConf.stream.customHeaderContent) {
    setParameter(std::string("MonitorConf") + ".Stream.CustomHeaderContent." + iter1.first, iter1.second);
  }
  setParameter(std::string("MonitorConf") + ".Stream.StreamMonitorTimeout", std::to_string(monitorConf.stream.streamMonitorTimeout));
  setParameter(std::string("MonitorConf") + ".Stream.WhiteList", monitorConf.stream.whiteList);
  setParameter(std::string("MonitorConf") + ".Stream.TargetUrl", monitorConf.stream.targetUrl);
  setParameter(std::string("MonitorConf") + ".NetDNS.NsServer", monitorConf.netDNS.nsServer);
  setParameter(std::string("MonitorConf") + ".NetDNS.QueryMethod", std::to_string(monitorConf.netDNS.queryMethod));
  setParameter(std::string("MonitorConf") + ".NetDNS.TargetUrl", monitorConf.netDNS.targetUrl);
  setParameter(std::string("MonitorConf") + ".NetDNS.DnsServerIpType", std::to_string(monitorConf.netDNS.dnsServerIpType));
  setParameter(std::string("MonitorConf") + ".NetDNS.Timeout", std::to_string(monitorConf.netDNS.timeout));
  setParameter(std::string("MonitorConf") + ".NetTCP.ConnectTimes", std::to_string(monitorConf.netTCP.connectTimes));
  setParameter(std::string("MonitorConf") + ".NetTCP.TracertTimeout", std::to_string(monitorConf.netTCP.tracertTimeout));
  setParameter(std::string("MonitorConf") + ".NetTCP.Interval", std::to_string(monitorConf.netTCP.interval));
  setParameter(std::string("MonitorConf") + ".NetTCP.TracertEnable", monitorConf.netTCP.tracertEnable ? "true" : "false");
  setParameter(std::string("MonitorConf") + ".NetTCP.TargetUrl", monitorConf.netTCP.targetUrl);
  setParameter(std::string("MonitorConf") + ".NetTCP.Timeout", std::to_string(monitorConf.netTCP.timeout));
  setParameter(std::string("MonitorConf") + ".NetTCP.TracertNumMax", std::to_string(monitorConf.netTCP.tracertNumMax));
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateUntrustworthyError", std::to_string(monitorConf.fileDownload.ignoreCertificateUntrustworthyError));
  setParameter(std::string("MonitorConf") + ".FileDownload.ConnectionTimeout", std::to_string(monitorConf.fileDownload.connectionTimeout));
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateCanceledError", std::to_string(monitorConf.fileDownload.ignoreCertificateCanceledError));
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateOutOfDateError", std::to_string(monitorConf.fileDownload.ignoreCertificateOutOfDateError));
  setParameter(std::string("MonitorConf") + ".FileDownload.DownloadKernel", std::to_string(monitorConf.fileDownload.downloadKernel));
  setParameter(std::string("MonitorConf") + ".FileDownload.WhiteList", monitorConf.fileDownload.whiteList);
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateAuthError", std::to_string(monitorConf.fileDownload.ignoreCertificateAuthError));
  setParameter(std::string("MonitorConf") + ".FileDownload.MonitorTimeout", std::to_string(monitorConf.fileDownload.monitorTimeout));
  setParameter(std::string("MonitorConf") + ".FileDownload.ValidateKeywords", monitorConf.fileDownload.validateKeywords);
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreInvalidHostError", std::to_string(monitorConf.fileDownload.ignoreInvalidHostError));
  for(auto const &iter1 : monitorConf.fileDownload.customHeaderContent) {
    setParameter(std::string("MonitorConf") + ".FileDownload.CustomHeaderContent." + iter1.first, iter1.second);
  }
  setParameter(std::string("MonitorConf") + ".FileDownload.TransmissionSize", std::to_string(monitorConf.fileDownload.transmissionSize));
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateUsingError", std::to_string(monitorConf.fileDownload.ignoreCertificateUsingError));
  setParameter(std::string("MonitorConf") + ".FileDownload.QuickProtocol", std::to_string(monitorConf.fileDownload.quickProtocol));
  setParameter(std::string("MonitorConf") + ".FileDownload.IgnoreCertificateStatusError", std::to_string(monitorConf.fileDownload.ignoreCertificateStatusError));
  setParameter(std::string("MonitorConf") + ".FileDownload.TargetUrl", monitorConf.fileDownload.targetUrl);
  setParameter(std::string("MonitorConf") + ".FileDownload.Redirection", std::to_string(monitorConf.fileDownload.redirection));
  setParameter(std::string("MonitorConf") + ".FileDownload.VerifyWay", std::to_string(monitorConf.fileDownload.verifyWay));
}

std::string CreateTimingSyntheticTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateTimingSyntheticTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

CreateTimingSyntheticTaskRequest::CustomPeriod CreateTimingSyntheticTaskRequest::getCustomPeriod() const {
  return customPeriod_;
}

void CreateTimingSyntheticTaskRequest::setCustomPeriod(const CreateTimingSyntheticTaskRequest::CustomPeriod &customPeriod) {
  customPeriod_ = customPeriod;
  setParameter(std::string("CustomPeriod") + ".EndHour", std::to_string(customPeriod.endHour));
  setParameter(std::string("CustomPeriod") + ".StartHour", std::to_string(customPeriod.startHour));
}

std::string CreateTimingSyntheticTaskRequest::getName() const {
  return name_;
}

void CreateTimingSyntheticTaskRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<CreateTimingSyntheticTaskRequest::Monitors> CreateTimingSyntheticTaskRequest::getMonitors() const {
  return monitors_;
}

void CreateTimingSyntheticTaskRequest::setMonitors(const std::vector<CreateTimingSyntheticTaskRequest::Monitors> &monitors) {
  monitors_ = monitors;
  for(int dep1 = 0; dep1 != monitors.size(); dep1++) {
    setParameter(std::string("Monitors") + "." + std::to_string(dep1 + 1) + ".ClientType", std::to_string(monitors[dep1].clientType));
    setParameter(std::string("Monitors") + "." + std::to_string(dep1 + 1) + ".CityCode", monitors[dep1].cityCode);
    setParameter(std::string("Monitors") + "." + std::to_string(dep1 + 1) + ".OperatorCode", monitors[dep1].operatorCode);
  }
}

