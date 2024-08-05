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

#include <alibabacloud/arms/model/GetTimingSyntheticTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetTimingSyntheticTaskResult::GetTimingSyntheticTaskResult() :
	ServiceResult()
{}

GetTimingSyntheticTaskResult::GetTimingSyntheticTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTimingSyntheticTaskResult::~GetTimingSyntheticTaskResult()
{}

void GetTimingSyntheticTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["TaskType"].isNull())
		data_.taskType = std::stoi(dataNode["TaskType"].asString());
	if(!dataNode["MonitorCategory"].isNull())
		data_.monitorCategory = std::stol(dataNode["MonitorCategory"].asString());
	if(!dataNode["Frequency"].isNull())
		data_.frequency = dataNode["Frequency"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	auto allMonitorsNode = dataNode["Monitors"]["monitor"];
	for (auto dataNodeMonitorsmonitor : allMonitorsNode)
	{
		Data::Monitor monitorObject;
		if(!dataNodeMonitorsmonitor["CityCode"].isNull())
			monitorObject.cityCode = dataNodeMonitorsmonitor["CityCode"].asString();
		if(!dataNodeMonitorsmonitor["OperatorCode"].isNull())
			monitorObject.operatorCode = dataNodeMonitorsmonitor["OperatorCode"].asString();
		if(!dataNodeMonitorsmonitor["ClientType"].isNull())
			monitorObject.clientType = std::stoi(dataNodeMonitorsmonitor["ClientType"].asString());
		data_.monitors.push_back(monitorObject);
	}
	auto allAvailableAssertionsNode = dataNode["AvailableAssertions"]["availableAssertion"];
	for (auto dataNodeAvailableAssertionsavailableAssertion : allAvailableAssertionsNode)
	{
		Data::AvailableAssertion availableAssertionObject;
		if(!dataNodeAvailableAssertionsavailableAssertion["Type"].isNull())
			availableAssertionObject.type = dataNodeAvailableAssertionsavailableAssertion["Type"].asString();
		if(!dataNodeAvailableAssertionsavailableAssertion["Target"].isNull())
			availableAssertionObject.target = dataNodeAvailableAssertionsavailableAssertion["Target"].asString();
		if(!dataNodeAvailableAssertionsavailableAssertion["Operator"].isNull())
			availableAssertionObject._operator = dataNodeAvailableAssertionsavailableAssertion["Operator"].asString();
		if(!dataNodeAvailableAssertionsavailableAssertion["Expect"].isNull())
			availableAssertionObject.expect = dataNodeAvailableAssertionsavailableAssertion["Expect"].asString();
		data_.availableAssertions.push_back(availableAssertionObject);
	}
	auto allTagsNode = dataNode["Tags"]["tag"];
	for (auto dataNodeTagstag : allTagsNode)
	{
		Data::Tag tagObject;
		if(!dataNodeTagstag["Key"].isNull())
			tagObject.key = dataNodeTagstag["Key"].asString();
		if(!dataNodeTagstag["Value"].isNull())
			tagObject.value = dataNodeTagstag["Value"].asString();
		data_.tags.push_back(tagObject);
	}
	auto monitorConfNode = dataNode["MonitorConf"];
	auto netICMPNode = monitorConfNode["NetICMP"];
	if(!netICMPNode["TargetUrl"].isNull())
		data_.monitorConf.netICMP.targetUrl = netICMPNode["TargetUrl"].asString();
	if(!netICMPNode["Interval"].isNull())
		data_.monitorConf.netICMP.interval = std::stoi(netICMPNode["Interval"].asString());
	if(!netICMPNode["PackageNum"].isNull())
		data_.monitorConf.netICMP.packageNum = std::stoi(netICMPNode["PackageNum"].asString());
	if(!netICMPNode["PackageSize"].isNull())
		data_.monitorConf.netICMP.packageSize = std::stoi(netICMPNode["PackageSize"].asString());
	if(!netICMPNode["SplitPackage"].isNull())
		data_.monitorConf.netICMP.splitPackage = netICMPNode["SplitPackage"].asString() == "true";
	if(!netICMPNode["Timeout"].isNull())
		data_.monitorConf.netICMP.timeout = std::stol(netICMPNode["Timeout"].asString());
	if(!netICMPNode["TracertEnable"].isNull())
		data_.monitorConf.netICMP.tracertEnable = netICMPNode["TracertEnable"].asString() == "true";
	if(!netICMPNode["TracertNumMax"].isNull())
		data_.monitorConf.netICMP.tracertNumMax = std::stoi(netICMPNode["TracertNumMax"].asString());
	if(!netICMPNode["TracertTimeout"].isNull())
		data_.monitorConf.netICMP.tracertTimeout = std::stol(netICMPNode["TracertTimeout"].asString());
	auto netTCPNode = monitorConfNode["NetTCP"];
	if(!netTCPNode["TargetUrl"].isNull())
		data_.monitorConf.netTCP.targetUrl = netTCPNode["TargetUrl"].asString();
	if(!netTCPNode["ConnectTimes"].isNull())
		data_.monitorConf.netTCP.connectTimes = std::stoi(netTCPNode["ConnectTimes"].asString());
	if(!netTCPNode["Interval"].isNull())
		data_.monitorConf.netTCP.interval = std::stol(netTCPNode["Interval"].asString());
	if(!netTCPNode["Timeout"].isNull())
		data_.monitorConf.netTCP.timeout = std::stol(netTCPNode["Timeout"].asString());
	if(!netTCPNode["TracertEnable"].isNull())
		data_.monitorConf.netTCP.tracertEnable = netTCPNode["TracertEnable"].asString() == "true";
	if(!netTCPNode["TracertNumMax"].isNull())
		data_.monitorConf.netTCP.tracertNumMax = std::stoi(netTCPNode["TracertNumMax"].asString());
	if(!netTCPNode["TracertTimeout"].isNull())
		data_.monitorConf.netTCP.tracertTimeout = std::stol(netTCPNode["TracertTimeout"].asString());
	auto netDNSNode = monitorConfNode["NetDNS"];
	if(!netDNSNode["TargetUrl"].isNull())
		data_.monitorConf.netDNS.targetUrl = netDNSNode["TargetUrl"].asString();
	if(!netDNSNode["DnsServerIpType"].isNull())
		data_.monitorConf.netDNS.dnsServerIpType = std::stoi(netDNSNode["DnsServerIpType"].asString());
	if(!netDNSNode["NsServer"].isNull())
		data_.monitorConf.netDNS.nsServer = netDNSNode["NsServer"].asString();
	if(!netDNSNode["QueryMethod"].isNull())
		data_.monitorConf.netDNS.queryMethod = std::stoi(netDNSNode["QueryMethod"].asString());
	if(!netDNSNode["Timeout"].isNull())
		data_.monitorConf.netDNS.timeout = std::stol(netDNSNode["Timeout"].asString());
	auto apiHTTPNode = monitorConfNode["ApiHTTP"];
	if(!apiHTTPNode["TargetUrl"].isNull())
		data_.monitorConf.apiHTTP.targetUrl = apiHTTPNode["TargetUrl"].asString();
	if(!apiHTTPNode["Method"].isNull())
		data_.monitorConf.apiHTTP.method = apiHTTPNode["Method"].asString();
	if(!apiHTTPNode["RequestHeaders"].isNull())
		data_.monitorConf.apiHTTP.requestHeaders = apiHTTPNode["RequestHeaders"].asString();
	if(!apiHTTPNode["ConnectTimeout"].isNull())
		data_.monitorConf.apiHTTP.connectTimeout = std::stol(apiHTTPNode["ConnectTimeout"].asString());
	if(!apiHTTPNode["Timeout"].isNull())
		data_.monitorConf.apiHTTP.timeout = std::stol(apiHTTPNode["Timeout"].asString());
	if(!apiHTTPNode["CheckCert"].isNull())
		data_.monitorConf.apiHTTP.checkCert = apiHTTPNode["CheckCert"].asString() == "true";
	if(!apiHTTPNode["ProtocolAlpnProtocol"].isNull())
		data_.monitorConf.apiHTTP.protocolAlpnProtocol = std::stoi(apiHTTPNode["ProtocolAlpnProtocol"].asString());
	auto requestBodyNode = apiHTTPNode["RequestBody"];
	if(!requestBodyNode["Content"].isNull())
		data_.monitorConf.apiHTTP.requestBody.content = requestBodyNode["Content"].asString();
	if(!requestBodyNode["Type"].isNull())
		data_.monitorConf.apiHTTP.requestBody.type = requestBodyNode["Type"].asString();
	auto fileDownloadNode = monitorConfNode["FileDownload"];
	if(!fileDownloadNode["TargetUrl"].isNull())
		data_.monitorConf.fileDownload.targetUrl = fileDownloadNode["TargetUrl"].asString();
	if(!fileDownloadNode["DownloadKernel"].isNull())
		data_.monitorConf.fileDownload.downloadKernel = std::stol(fileDownloadNode["DownloadKernel"].asString());
	if(!fileDownloadNode["QuickProtocol"].isNull())
		data_.monitorConf.fileDownload.quickProtocol = std::stol(fileDownloadNode["QuickProtocol"].asString());
	if(!fileDownloadNode["ConnectionTimeout"].isNull())
		data_.monitorConf.fileDownload.connectionTimeout = std::stol(fileDownloadNode["ConnectionTimeout"].asString());
	if(!fileDownloadNode["CustomHeaderContent"].isNull())
		data_.monitorConf.fileDownload.customHeaderContent = fileDownloadNode["CustomHeaderContent"].asString();
	if(!fileDownloadNode["IgnoreCertificateStatusError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateStatusError = std::stoi(fileDownloadNode["IgnoreCertificateStatusError"].asString());
	if(!fileDownloadNode["IgnoreCertificateUntrustworthyError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateUntrustworthyError = std::stoi(fileDownloadNode["IgnoreCertificateUntrustworthyError"].asString());
	if(!fileDownloadNode["IgnoreInvalidHostError"].isNull())
		data_.monitorConf.fileDownload.ignoreInvalidHostError = std::stoi(fileDownloadNode["IgnoreInvalidHostError"].asString());
	if(!fileDownloadNode["MonitorTimeout"].isNull())
		data_.monitorConf.fileDownload.monitorTimeout = std::stol(fileDownloadNode["MonitorTimeout"].asString());
	if(!fileDownloadNode["Redirection"].isNull())
		data_.monitorConf.fileDownload.redirection = std::stoi(fileDownloadNode["Redirection"].asString());
	if(!fileDownloadNode["TransmissionSize"].isNull())
		data_.monitorConf.fileDownload.transmissionSize = std::stol(fileDownloadNode["TransmissionSize"].asString());
	if(!fileDownloadNode["IgnoreCertificateCanceledError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateCanceledError = std::stoi(fileDownloadNode["IgnoreCertificateCanceledError"].asString());
	if(!fileDownloadNode["IgnoreCertificateAuthError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateAuthError = std::stoi(fileDownloadNode["IgnoreCertificateAuthError"].asString());
	if(!fileDownloadNode["IgnoreCertificateOutOfDateError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateOutOfDateError = std::stoi(fileDownloadNode["IgnoreCertificateOutOfDateError"].asString());
	if(!fileDownloadNode["IgnoreCertificateUsingError"].isNull())
		data_.monitorConf.fileDownload.ignoreCertificateUsingError = std::stoi(fileDownloadNode["IgnoreCertificateUsingError"].asString());
	if(!fileDownloadNode["VerifyWay"].isNull())
		data_.monitorConf.fileDownload.verifyWay = std::stoi(fileDownloadNode["VerifyWay"].asString());
	if(!fileDownloadNode["ValidateKeywords"].isNull())
		data_.monitorConf.fileDownload.validateKeywords = fileDownloadNode["ValidateKeywords"].asString();
	if(!fileDownloadNode["WhiteList"].isNull())
		data_.monitorConf.fileDownload.whiteList = fileDownloadNode["WhiteList"].asString();
	auto websiteNode = monitorConfNode["Website"];
	if(!websiteNode["TargetUrl"].isNull())
		data_.monitorConf.website.targetUrl = websiteNode["TargetUrl"].asString();
	if(!websiteNode["AutomaticScrolling"].isNull())
		data_.monitorConf.website.automaticScrolling = std::stoi(websiteNode["AutomaticScrolling"].asString());
	if(!websiteNode["CustomHeader"].isNull())
		data_.monitorConf.website.customHeader = std::stoi(websiteNode["CustomHeader"].asString());
	if(!websiteNode["CustomHeaderContent"].isNull())
		data_.monitorConf.website.customHeaderContent = websiteNode["CustomHeaderContent"].asString();
	if(!websiteNode["DisableCache"].isNull())
		data_.monitorConf.website.disableCache = std::stoi(websiteNode["DisableCache"].asString());
	if(!websiteNode["DisableCompression"].isNull())
		data_.monitorConf.website.disableCompression = std::stoi(websiteNode["DisableCompression"].asString());
	if(!websiteNode["FilterInvalidIP"].isNull())
		data_.monitorConf.website.filterInvalidIP = std::stoi(websiteNode["FilterInvalidIP"].asString());
	if(!websiteNode["IgnoreCertificateError"].isNull())
		data_.monitorConf.website.ignoreCertificateError = std::stoi(websiteNode["IgnoreCertificateError"].asString());
	if(!websiteNode["MonitorTimeout"].isNull())
		data_.monitorConf.website.monitorTimeout = std::stoi(websiteNode["MonitorTimeout"].asString());
	if(!websiteNode["Redirection"].isNull())
		data_.monitorConf.website.redirection = std::stoi(websiteNode["Redirection"].asString());
	if(!websiteNode["SlowElementThreshold"].isNull())
		data_.monitorConf.website.slowElementThreshold = std::stol(websiteNode["SlowElementThreshold"].asString());
	if(!websiteNode["WaitCompletionTime"].isNull())
		data_.monitorConf.website.waitCompletionTime = std::stol(websiteNode["WaitCompletionTime"].asString());
	if(!websiteNode["VerifyStringBlacklist"].isNull())
		data_.monitorConf.website.verifyStringBlacklist = websiteNode["VerifyStringBlacklist"].asString();
	if(!websiteNode["VerifyStringWhitelist"].isNull())
		data_.monitorConf.website.verifyStringWhitelist = websiteNode["VerifyStringWhitelist"].asString();
	if(!websiteNode["ElementBlacklist"].isNull())
		data_.monitorConf.website.elementBlacklist = websiteNode["ElementBlacklist"].asString();
	if(!websiteNode["DNSHijackWhitelist"].isNull())
		data_.monitorConf.website.dNSHijackWhitelist = websiteNode["DNSHijackWhitelist"].asString();
	if(!websiteNode["PageTamper"].isNull())
		data_.monitorConf.website.pageTamper = websiteNode["PageTamper"].asString();
	if(!websiteNode["FlowHijackJumpTimes"].isNull())
		data_.monitorConf.website.flowHijackJumpTimes = std::stoi(websiteNode["FlowHijackJumpTimes"].asString());
	if(!websiteNode["FlowHijackLogo"].isNull())
		data_.monitorConf.website.flowHijackLogo = websiteNode["FlowHijackLogo"].asString();
	auto streamNode = monitorConfNode["Stream"];
	if(!streamNode["TargetUrl"].isNull())
		data_.monitorConf.stream.targetUrl = streamNode["TargetUrl"].asString();
	if(!streamNode["StreamType"].isNull())
		data_.monitorConf.stream.streamType = std::stoi(streamNode["StreamType"].asString());
	if(!streamNode["StreamMonitorTimeout"].isNull())
		data_.monitorConf.stream.streamMonitorTimeout = std::stoi(streamNode["StreamMonitorTimeout"].asString());
	if(!streamNode["StreamAddressType"].isNull())
		data_.monitorConf.stream.streamAddressType = std::stoi(streamNode["StreamAddressType"].asString());
	if(!streamNode["PlayerType"].isNull())
		data_.monitorConf.stream.playerType = std::stoi(streamNode["PlayerType"].asString());
	if(!streamNode["CustomHeaderContent"].isNull())
		data_.monitorConf.stream.customHeaderContent = streamNode["CustomHeaderContent"].asString();
	if(!streamNode["WhiteList"].isNull())
		data_.monitorConf.stream.whiteList = streamNode["WhiteList"].asString();
	auto customPeriodNode = dataNode["CustomPeriod"];
	if(!customPeriodNode["EndHour"].isNull())
		data_.customPeriod.endHour = std::stol(customPeriodNode["EndHour"].asString());
	if(!customPeriodNode["StartHour"].isNull())
		data_.customPeriod.startHour = std::stol(customPeriodNode["StartHour"].asString());
	auto commonSettingNode = dataNode["CommonSetting"];
	if(!commonSettingNode["IpType"].isNull())
		data_.commonSetting.ipType = std::stoi(commonSettingNode["IpType"].asString());
	if(!commonSettingNode["MonitorSamples"].isNull())
		data_.commonSetting.monitorSamples = std::stoi(commonSettingNode["MonitorSamples"].asString());
	if(!commonSettingNode["IsOpenTrace"].isNull())
		data_.commonSetting.isOpenTrace = commonSettingNode["IsOpenTrace"].asString() == "true";
	if(!commonSettingNode["TraceClientType"].isNull())
		data_.commonSetting.traceClientType = std::stoi(commonSettingNode["TraceClientType"].asString());
	if(!commonSettingNode["XtraceRegion"].isNull())
		data_.commonSetting.xtraceRegion = commonSettingNode["XtraceRegion"].asString();
	auto customHostNode = commonSettingNode["CustomHost"];
	if(!customHostNode["SelectType"].isNull())
		data_.commonSetting.customHost.selectType = std::stoi(customHostNode["SelectType"].asString());
	auto allHostsNode = customHostNode["Hosts"]["host"];
	for (auto customHostNodeHostshost : allHostsNode)
	{
		Data::CommonSetting::CustomHost::Host hostObject;
		if(!customHostNodeHostshost["Domain"].isNull())
			hostObject.domain = customHostNodeHostshost["Domain"].asString();
		if(!customHostNodeHostshost["IpType"].isNull())
			hostObject.ipType = std::stoi(customHostNodeHostshost["IpType"].asString());
		auto allIps = value["Ips"]["ip"];
		for (auto value : allIps)
			hostObject.ips.push_back(value.asString());
		data_.commonSetting.customHost.hosts.push_back(hostObject);
	}
	auto customVPCSettingNode = commonSettingNode["CustomVPCSetting"];
	if(!customVPCSettingNode["RegionId"].isNull())
		data_.commonSetting.customVPCSetting.regionId = customVPCSettingNode["RegionId"].asString();
	if(!customVPCSettingNode["VpcId"].isNull())
		data_.commonSetting.customVPCSetting.vpcId = customVPCSettingNode["VpcId"].asString();
	if(!customVPCSettingNode["VSwitchId"].isNull())
		data_.commonSetting.customVPCSetting.vSwitchId = customVPCSettingNode["VSwitchId"].asString();
	if(!customVPCSettingNode["SecureGroupId"].isNull())
		data_.commonSetting.customVPCSetting.secureGroupId = customVPCSettingNode["SecureGroupId"].asString();
	auto customPrometheusSettingNode = commonSettingNode["CustomPrometheusSetting"];
	if(!customPrometheusSettingNode["PrometheusLabels"].isNull())
		data_.commonSetting.customPrometheusSetting.prometheusLabels = customPrometheusSettingNode["PrometheusLabels"].asString();
	if(!customPrometheusSettingNode["PrometheusClusterId"].isNull())
		data_.commonSetting.customPrometheusSetting.prometheusClusterId = customPrometheusSettingNode["PrometheusClusterId"].asString();
	if(!customPrometheusSettingNode["PrometheusClusterRegion"].isNull())
		data_.commonSetting.customPrometheusSetting.prometheusClusterRegion = customPrometheusSettingNode["PrometheusClusterRegion"].asString();
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetTimingSyntheticTaskResult::getMessage()const
{
	return message_;
}

GetTimingSyntheticTaskResult::Data GetTimingSyntheticTaskResult::getData()const
{
	return data_;
}

long GetTimingSyntheticTaskResult::getCode()const
{
	return code_;
}

