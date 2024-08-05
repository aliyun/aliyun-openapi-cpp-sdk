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

#include <alibabacloud/arms/model/GetSyntheticTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetSyntheticTaskDetailResult::GetSyntheticTaskDetailResult() :
	ServiceResult()
{}

GetSyntheticTaskDetailResult::GetSyntheticTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSyntheticTaskDetailResult::~GetSyntheticTaskDetailResult()
{}

void GetSyntheticTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskDetailNode = value["TaskDetail"];
	if(!taskDetailNode["TaskId"].isNull())
		taskDetail_.taskId = std::stol(taskDetailNode["TaskId"].asString());
	if(!taskDetailNode["TaskName"].isNull())
		taskDetail_.taskName = taskDetailNode["TaskName"].asString();
	if(!taskDetailNode["Url"].isNull())
		taskDetail_.url = taskDetailNode["Url"].asString();
	if(!taskDetailNode["TaskType"].isNull())
		taskDetail_.taskType = std::stol(taskDetailNode["TaskType"].asString());
	if(!taskDetailNode["IntervalTime"].isNull())
		taskDetail_.intervalTime = std::stol(taskDetailNode["IntervalTime"].asString());
	if(!taskDetailNode["IntervalType"].isNull())
		taskDetail_.intervalType = std::stol(taskDetailNode["IntervalType"].asString());
	if(!taskDetailNode["IpType"].isNull())
		taskDetail_.ipType = std::stol(taskDetailNode["IpType"].asString());
	if(!taskDetailNode["MonitorListString"].isNull())
		taskDetail_.monitorListString = taskDetailNode["MonitorListString"].asString();
	auto allMonitorListNode = taskDetailNode["MonitorList"]["monitorListItem"];
	for (auto taskDetailNodeMonitorListmonitorListItem : allMonitorListNode)
	{
		TaskDetail::MonitorListItem monitorListItemObject;
		if(!taskDetailNodeMonitorListmonitorListItem["CityCode"].isNull())
			monitorListItemObject.cityCode = std::stol(taskDetailNodeMonitorListmonitorListItem["CityCode"].asString());
		if(!taskDetailNodeMonitorListmonitorListItem["NetServiceId"].isNull())
			monitorListItemObject.netServiceId = std::stol(taskDetailNodeMonitorListmonitorListItem["NetServiceId"].asString());
		if(!taskDetailNodeMonitorListmonitorListItem["MonitorType"].isNull())
			monitorListItemObject.monitorType = std::stol(taskDetailNodeMonitorListmonitorListItem["MonitorType"].asString());
		if(!taskDetailNodeMonitorListmonitorListItem["SendCount"].isNull())
			monitorListItemObject.sendCount = std::stol(taskDetailNodeMonitorListmonitorListItem["SendCount"].asString());
		taskDetail_.monitorList.push_back(monitorListItemObject);
	}
	auto extendIntervalNode = taskDetailNode["ExtendInterval"];
	if(!extendIntervalNode["StartTime"].isNull())
		taskDetail_.extendInterval.startTime = extendIntervalNode["StartTime"].asString();
	if(!extendIntervalNode["EndTime"].isNull())
		taskDetail_.extendInterval.endTime = extendIntervalNode["EndTime"].asString();
	if(!extendIntervalNode["StartHour"].isNull())
		taskDetail_.extendInterval.startHour = std::stol(extendIntervalNode["StartHour"].asString());
	if(!extendIntervalNode["StartMinute"].isNull())
		taskDetail_.extendInterval.startMinute = std::stol(extendIntervalNode["StartMinute"].asString());
	if(!extendIntervalNode["Endhour"].isNull())
		taskDetail_.extendInterval.endhour = std::stol(extendIntervalNode["Endhour"].asString());
	if(!extendIntervalNode["EndMinute"].isNull())
		taskDetail_.extendInterval.endMinute = std::stol(extendIntervalNode["EndMinute"].asString());
		auto allDays = extendIntervalNode["Days"]["days"];
		for (auto value : allDays)
			taskDetail_.extendInterval.days.push_back(value.asString());
	auto downloadNode = taskDetailNode["Download"];
	if(!downloadNode["DownloadTransmissionSize"].isNull())
		taskDetail_.download.downloadTransmissionSize = std::stol(downloadNode["DownloadTransmissionSize"].asString());
	if(!downloadNode["DownloadCustomHost"].isNull())
		taskDetail_.download.downloadCustomHost = std::stol(downloadNode["DownloadCustomHost"].asString());
	if(!downloadNode["DownloadCustomHostIp"].isNull())
		taskDetail_.download.downloadCustomHostIp = downloadNode["DownloadCustomHostIp"].asString();
	if(!downloadNode["WhiteList"].isNull())
		taskDetail_.download.whiteList = downloadNode["WhiteList"].asString();
	if(!downloadNode["DownloadKernel"].isNull())
		taskDetail_.download.downloadKernel = std::stol(downloadNode["DownloadKernel"].asString());
	if(!downloadNode["QuickProtocol"].isNull())
		taskDetail_.download.quickProtocol = downloadNode["QuickProtocol"].asString();
	if(!downloadNode["MonitorTimeout"].isNull())
		taskDetail_.download.monitorTimeout = std::stol(downloadNode["MonitorTimeout"].asString());
	if(!downloadNode["ConnectionTimeout"].isNull())
		taskDetail_.download.connectionTimeout = std::stol(downloadNode["ConnectionTimeout"].asString());
	if(!downloadNode["VerifyWay"].isNull())
		taskDetail_.download.verifyWay = std::stol(downloadNode["VerifyWay"].asString());
	if(!downloadNode["ValidateKeywords"].isNull())
		taskDetail_.download.validateKeywords = downloadNode["ValidateKeywords"].asString();
	if(!downloadNode["DownloadRedirect"].isNull())
		taskDetail_.download.downloadRedirect = std::stol(downloadNode["DownloadRedirect"].asString());
	if(!downloadNode["DownloadCustomHeaderContent"].isNull())
		taskDetail_.download.downloadCustomHeaderContent = downloadNode["DownloadCustomHeaderContent"].asString();
	auto netNode = taskDetailNode["Net"];
	if(!netNode["NetIcmpSwitch"].isNull())
		taskDetail_.net.netIcmpSwitch = std::stol(netNode["NetIcmpSwitch"].asString());
	if(!netNode["NetIcmpActive"].isNull())
		taskDetail_.net.netIcmpActive = std::stol(netNode["NetIcmpActive"].asString());
	if(!netNode["NetIcmpTimeout"].isNull())
		taskDetail_.net.netIcmpTimeout = std::stol(netNode["NetIcmpTimeout"].asString());
	if(!netNode["NetIcmpInterval"].isNull())
		taskDetail_.net.netIcmpInterval = std::stol(netNode["NetIcmpInterval"].asString());
	if(!netNode["NetIcmpNum"].isNull())
		taskDetail_.net.netIcmpNum = std::stol(netNode["NetIcmpNum"].asString());
	if(!netNode["NetIcmpSize"].isNull())
		taskDetail_.net.netIcmpSize = std::stol(netNode["NetIcmpSize"].asString());
	if(!netNode["NetIcmpDataCut"].isNull())
		taskDetail_.net.netIcmpDataCut = std::stol(netNode["NetIcmpDataCut"].asString());
	if(!netNode["NetDnsQueryMethod"].isNull())
		taskDetail_.net.netDnsQueryMethod = netNode["NetDnsQueryMethod"].asString();
	if(!netNode["NetDnsSwitch"].isNull())
		taskDetail_.net.netDnsSwitch = std::stol(netNode["NetDnsSwitch"].asString());
	if(!netNode["NetTraceRouteSwitch"].isNull())
		taskDetail_.net.netTraceRouteSwitch = std::stol(netNode["NetTraceRouteSwitch"].asString());
	if(!netNode["NetTraceRouteTimeout"].isNull())
		taskDetail_.net.netTraceRouteTimeout = std::stol(netNode["NetTraceRouteTimeout"].asString());
	if(!netNode["NetTraceRouteNum"].isNull())
		taskDetail_.net.netTraceRouteNum = std::stol(netNode["NetTraceRouteNum"].asString());
	if(!netNode["WhiteList"].isNull())
		taskDetail_.net.whiteList = netNode["WhiteList"].asString();
	if(!netNode["NetDnsNs"].isNull())
		taskDetail_.net.netDnsNs = netNode["NetDnsNs"].asString();
	if(!netNode["NetDigSwitch"].isNull())
		taskDetail_.net.netDigSwitch = std::stol(netNode["NetDigSwitch"].asString());
	if(!netNode["NetDnsServer"].isNull())
		taskDetail_.net.netDnsServer = std::stol(netNode["NetDnsServer"].asString());
	if(!netNode["NetDnsTimeout"].isNull())
		taskDetail_.net.netDnsTimeout = netNode["NetDnsTimeout"].asString();
	auto navNode = taskDetailNode["Nav"];
	if(!navNode["NavDisableCache"].isNull())
		taskDetail_.nav.navDisableCache = std::stol(navNode["NavDisableCache"].asString());
	if(!navNode["NavReturnElement"].isNull())
		taskDetail_.nav.navReturnElement = std::stol(navNode["NavReturnElement"].asString());
	if(!navNode["NavRedirect"].isNull())
		taskDetail_.nav.navRedirect = std::stol(navNode["NavRedirect"].asString());
	if(!navNode["NavDisableCompression"].isNull())
		taskDetail_.nav.navDisableCompression = std::stol(navNode["NavDisableCompression"].asString());
	if(!navNode["NavAutomaticScrolling"].isNull())
		taskDetail_.nav.navAutomaticScrolling = std::stol(navNode["NavAutomaticScrolling"].asString());
	if(!navNode["NavIgnoreCertificateError"].isNull())
		taskDetail_.nav.navIgnoreCertificateError = std::stol(navNode["NavIgnoreCertificateError"].asString());
	if(!navNode["FilterInvalidIP"].isNull())
		taskDetail_.nav.filterInvalidIP = std::stol(navNode["FilterInvalidIP"].asString());
	if(!navNode["ExecuteApplet"].isNull())
		taskDetail_.nav.executeApplet = std::stol(navNode["ExecuteApplet"].asString());
	if(!navNode["ExecuteActiveX"].isNull())
		taskDetail_.nav.executeActiveX = std::stol(navNode["ExecuteActiveX"].asString());
	if(!navNode["ExecuteScript"].isNull())
		taskDetail_.nav.executeScript = std::stol(navNode["ExecuteScript"].asString());
	if(!navNode["QuicVersion"].isNull())
		taskDetail_.nav.quicVersion = std::stol(navNode["QuicVersion"].asString());
	if(!navNode["QuicDomain"].isNull())
		taskDetail_.nav.quicDomain = navNode["QuicDomain"].asString();
	if(!navNode["RequestHeader"].isNull())
		taskDetail_.nav.requestHeader = std::stol(navNode["RequestHeader"].asString());
	if(!navNode["NavCustomHost"].isNull())
		taskDetail_.nav.navCustomHost = std::stol(navNode["NavCustomHost"].asString());
	if(!navNode["NavCustomHostIp"].isNull())
		taskDetail_.nav.navCustomHostIp = navNode["NavCustomHostIp"].asString();
	if(!navNode["NavCustomHeader"].isNull())
		taskDetail_.nav.navCustomHeader = navNode["NavCustomHeader"].asString();
	if(!navNode["NavCustomHeaderContent"].isNull())
		taskDetail_.nav.navCustomHeaderContent = navNode["NavCustomHeaderContent"].asString();
	if(!navNode["ElementBlacklist"].isNull())
		taskDetail_.nav.elementBlacklist = navNode["ElementBlacklist"].asString();
	if(!navNode["ProcessName"].isNull())
		taskDetail_.nav.processName = navNode["ProcessName"].asString();
	if(!navNode["VerifyStringBlacklist"].isNull())
		taskDetail_.nav.verifyStringBlacklist = navNode["VerifyStringBlacklist"].asString();
	if(!navNode["VerifyStringWhitelist"].isNull())
		taskDetail_.nav.verifyStringWhitelist = navNode["VerifyStringWhitelist"].asString();
	if(!navNode["MonitorTimeout"].isNull())
		taskDetail_.nav.monitorTimeout = std::stol(navNode["MonitorTimeout"].asString());
	if(!navNode["WaitCompletionTime"].isNull())
		taskDetail_.nav.waitCompletionTime = std::stol(navNode["WaitCompletionTime"].asString());
	if(!navNode["SlowElementThreshold"].isNull())
		taskDetail_.nav.slowElementThreshold = std::stol(navNode["SlowElementThreshold"].asString());
	if(!navNode["DnsHijackWhitelist"].isNull())
		taskDetail_.nav.dnsHijackWhitelist = navNode["DnsHijackWhitelist"].asString();
	if(!navNode["PageTampering"].isNull())
		taskDetail_.nav.pageTampering = navNode["PageTampering"].asString();
	if(!navNode["FlowHijackJumpTimes"].isNull())
		taskDetail_.nav.flowHijackJumpTimes = std::stol(navNode["FlowHijackJumpTimes"].asString());
	if(!navNode["FlowHijackLogo"].isNull())
		taskDetail_.nav.flowHijackLogo = navNode["FlowHijackLogo"].asString();
	auto protocolNode = taskDetailNode["Protocol"];
	if(!protocolNode["CharacterEncoding"].isNull())
		taskDetail_.protocol.characterEncoding = std::stol(protocolNode["CharacterEncoding"].asString());
	if(!protocolNode["VerifyWay"].isNull())
		taskDetail_.protocol.verifyWay = std::stol(protocolNode["VerifyWay"].asString());
	if(!protocolNode["VerifyContent"].isNull())
		taskDetail_.protocol.verifyContent = protocolNode["VerifyContent"].asString();
	if(!protocolNode["ReceivedDataSize"].isNull())
		taskDetail_.protocol.receivedDataSize = std::stol(protocolNode["ReceivedDataSize"].asString());
	if(!protocolNode["ProtocolMonitorTimeout"].isNull())
		taskDetail_.protocol.protocolMonitorTimeout = std::stol(protocolNode["ProtocolMonitorTimeout"].asString());
	if(!protocolNode["ProtocolConnectionTimeout"].isNull())
		taskDetail_.protocol.protocolConnectionTimeout = std::stol(protocolNode["ProtocolConnectionTimeout"].asString());
	if(!protocolNode["CustomHost"].isNull())
		taskDetail_.protocol.customHost = std::stol(protocolNode["CustomHost"].asString());
	if(!protocolNode["CustomHostIp"].isNull())
		taskDetail_.protocol.customHostIp = protocolNode["CustomHostIp"].asString();
	auto requestContentNode = protocolNode["RequestContent"];
	if(!requestContentNode["Method"].isNull())
		taskDetail_.protocol.requestContent.method = requestContentNode["Method"].asString();
	auto allHeaderNode = requestContentNode["Header"]["headerItem"];
	for (auto requestContentNodeHeaderheaderItem : allHeaderNode)
	{
		TaskDetail::Protocol::RequestContent::HeaderItem headerItemObject;
		if(!requestContentNodeHeaderheaderItem["Key"].isNull())
			headerItemObject.key = requestContentNodeHeaderheaderItem["Key"].asString();
		if(!requestContentNodeHeaderheaderItem["Value"].isNull())
			headerItemObject.value = requestContentNodeHeaderheaderItem["Value"].asString();
		taskDetail_.protocol.requestContent.header.push_back(headerItemObject);
	}
	auto bodyNode = requestContentNode["Body"];
	if(!bodyNode["Mode"].isNull())
		taskDetail_.protocol.requestContent.body.mode = bodyNode["Mode"].asString();
	if(!bodyNode["Raw"].isNull())
		taskDetail_.protocol.requestContent.body.raw = bodyNode["Raw"].asString();
	if(!bodyNode["Language"].isNull())
		taskDetail_.protocol.requestContent.body.language = bodyNode["Language"].asString();
	auto formdataNode = bodyNode["Formdata"];
	if(!formdataNode["Key"].isNull())
		taskDetail_.protocol.requestContent.body.formdata.key = formdataNode["Key"].asString();
	if(!formdataNode["Value"].isNull())
		taskDetail_.protocol.requestContent.body.formdata.value = formdataNode["Value"].asString();
	auto urlencodedNode = bodyNode["Urlencoded"];
	if(!urlencodedNode["Key"].isNull())
		taskDetail_.protocol.requestContent.body.urlencoded.key = urlencodedNode["Key"].asString();
	if(!urlencodedNode["Value"].isNull())
		taskDetail_.protocol.requestContent.body.urlencoded.value = urlencodedNode["Value"].asString();
	auto commonParamNode = taskDetailNode["CommonParam"];
	if(!commonParamNode["AlarmFlag"].isNull())
		taskDetail_.commonParam.alarmFlag = std::stol(commonParamNode["AlarmFlag"].asString());
	if(!commonParamNode["AlertPolicyId"].isNull())
		taskDetail_.commonParam.alertPolicyId = commonParamNode["AlertPolicyId"].asString();
	if(!commonParamNode["AlertNotifierId"].isNull())
		taskDetail_.commonParam.alertNotifierId = commonParamNode["AlertNotifierId"].asString();
	if(!commonParamNode["StartExecutionTime"].isNull())
		taskDetail_.commonParam.startExecutionTime = commonParamNode["StartExecutionTime"].asString();
	if(!commonParamNode["MonitorSamples"].isNull())
		taskDetail_.commonParam.monitorSamples = commonParamNode["MonitorSamples"].asString();
	auto allAlertListNode = commonParamNode["AlertList"]["alertListItem"];
	for (auto commonParamNodeAlertListalertListItem : allAlertListNode)
	{
		TaskDetail::CommonParam::AlertListItem alertListItemObject;
		if(!commonParamNodeAlertListalertListItem["Name"].isNull())
			alertListItemObject.name = commonParamNodeAlertListalertListItem["Name"].asString();
		if(!commonParamNodeAlertListalertListItem["GeneralAlert"].isNull())
			alertListItemObject.generalAlert = commonParamNodeAlertListalertListItem["GeneralAlert"].asString();
		if(!commonParamNodeAlertListalertListItem["SeriousAlert"].isNull())
			alertListItemObject.seriousAlert = commonParamNodeAlertListalertListItem["SeriousAlert"].asString();
		if(!commonParamNodeAlertListalertListItem["IsCritical"].isNull())
			alertListItemObject.isCritical = commonParamNodeAlertListalertListItem["IsCritical"].asString();
		if(!commonParamNodeAlertListalertListItem["Symbols"].isNull())
			alertListItemObject.symbols = commonParamNodeAlertListalertListItem["Symbols"].asString();
		taskDetail_.commonParam.alertList.push_back(alertListItemObject);
	}

}

GetSyntheticTaskDetailResult::TaskDetail GetSyntheticTaskDetailResult::getTaskDetail()const
{
	return taskDetail_;
}

