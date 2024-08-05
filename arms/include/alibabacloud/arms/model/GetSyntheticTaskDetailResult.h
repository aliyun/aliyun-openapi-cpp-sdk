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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKDETAILRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT GetSyntheticTaskDetailResult : public ServiceResult
			{
			public:
				struct TaskDetail
				{
					struct ExtendInterval
					{
						long startMinute;
						std::string endTime;
						long startHour;
						std::vector<std::string> days;
						std::string startTime;
						long endhour;
						long endMinute;
					};
					struct Download
					{
						long connectionTimeout;
						std::string downloadCustomHeaderContent;
						long downloadTransmissionSize;
						std::string downloadCustomHostIp;
						long downloadCustomHost;
						std::string whiteList;
						long verifyWay;
						std::string quickProtocol;
						long downloadRedirect;
						long downloadKernel;
						long monitorTimeout;
						std::string validateKeywords;
					};
					struct Net
					{
						long netIcmpSize;
						std::string netDnsNs;
						long netIcmpSwitch;
						std::string whiteList;
						std::string netDnsTimeout;
						long netDnsServer;
						long netTraceRouteTimeout;
						std::string netDnsQueryMethod;
						long netTraceRouteNum;
						long netDigSwitch;
						long netIcmpTimeout;
						long netIcmpDataCut;
						long netIcmpActive;
						long netTraceRouteSwitch;
						long netIcmpInterval;
						long netDnsSwitch;
						long netIcmpNum;
					};
					struct Nav
					{
						std::string quicDomain;
						std::string processName;
						std::string verifyStringWhitelist;
						std::string navCustomHostIp;
						long monitorTimeout;
						long navReturnElement;
						std::string navCustomHeader;
						long navAutomaticScrolling;
						std::string verifyStringBlacklist;
						long navDisableCompression;
						std::string elementBlacklist;
						long quicVersion;
						long navRedirect;
						long filterInvalidIP;
						long navDisableCache;
						long executeActiveX;
						long slowElementThreshold;
						long executeScript;
						std::string pageTampering;
						long executeApplet;
						long flowHijackJumpTimes;
						long waitCompletionTime;
						std::string flowHijackLogo;
						long navIgnoreCertificateError;
						long navCustomHost;
						long requestHeader;
						std::string dnsHijackWhitelist;
						std::string navCustomHeaderContent;
					};
					struct Protocol
					{
						struct RequestContent
						{
							struct Body
							{
								struct Formdata
								{
									std::string value;
									std::string key;
								};
								struct Urlencoded
								{
									std::string value;
									std::string key;
								};
								Formdata formdata;
								Urlencoded urlencoded;
								std::string language;
								std::string mode;
								std::string raw;
							};
							struct HeaderItem
							{
								std::string value;
								std::string key;
							};
							std::vector<HeaderItem> header;
							std::string method;
							Body body;
						};
						RequestContent requestContent;
						long protocolConnectionTimeout;
						std::string verifyContent;
						long receivedDataSize;
						long characterEncoding;
						long verifyWay;
						long customHost;
						std::string customHostIp;
						long protocolMonitorTimeout;
					};
					struct CommonParam
					{
						struct AlertListItem
						{
							std::string seriousAlert;
							std::string generalAlert;
							std::string symbols;
							std::string isCritical;
							std::string name;
						};
						std::string startExecutionTime;
						std::string alertPolicyId;
						std::string alertNotifierId;
						long alarmFlag;
						std::vector<AlertListItem> alertList;
						std::string monitorSamples;
					};
					struct MonitorListItem
					{
						long cityCode;
						long netServiceId;
						long monitorType;
						long sendCount;
					};
					Nav nav;
					long taskId;
					long ipType;
					long intervalType;
					long intervalTime;
					std::string url;
					ExtendInterval extendInterval;
					std::string monitorListString;
					std::vector<MonitorListItem> monitorList;
					std::string taskName;
					CommonParam commonParam;
					long taskType;
					Net net;
					Protocol protocol;
					Download download;
				};


				GetSyntheticTaskDetailResult();
				explicit GetSyntheticTaskDetailResult(const std::string &payload);
				~GetSyntheticTaskDetailResult();
				TaskDetail getTaskDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				TaskDetail taskDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKDETAILRESULT_H_