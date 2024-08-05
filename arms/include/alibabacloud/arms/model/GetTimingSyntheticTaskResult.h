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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETTIMINGSYNTHETICTASKRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETTIMINGSYNTHETICTASKRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT GetTimingSyntheticTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct MonitorConf
					{
						struct NetICMP
						{
							bool tracertEnable;
							int packageNum;
							int packageSize;
							bool splitPackage;
							long timeout;
							long tracertTimeout;
							std::string targetUrl;
							int tracertNumMax;
							int interval;
						};
						struct NetTCP
						{
							bool tracertEnable;
							long timeout;
							long tracertTimeout;
							std::string targetUrl;
							int tracertNumMax;
							int connectTimes;
							long interval;
						};
						struct NetDNS
						{
							int queryMethod;
							long timeout;
							std::string nsServer;
							int dnsServerIpType;
							std::string targetUrl;
						};
						struct ApiHTTP
						{
							struct RequestBody
							{
								std::string type;
								std::string content;
							};
							bool checkCert;
							long connectTimeout;
							int protocolAlpnProtocol;
							long timeout;
							std::string targetUrl;
							std::string method;
							std::string requestHeaders;
							RequestBody requestBody;
						};
						struct FileDownload
						{
							long connectionTimeout;
							std::string customHeaderContent;
							long transmissionSize;
							int ignoreCertificateOutOfDateError;
							int ignoreCertificateUsingError;
							std::string whiteList;
							int verifyWay;
							std::string targetUrl;
							int ignoreCertificateStatusError;
							int ignoreCertificateCanceledError;
							long monitorTimeout;
							std::string validateKeywords;
							int ignoreCertificateUntrustworthyError;
							int redirection;
							int ignoreCertificateAuthError;
							long quickProtocol;
							long downloadKernel;
							int ignoreInvalidHostError;
						};
						struct Website
						{
							int disableCompression;
							std::string customHeaderContent;
							int automaticScrolling;
							long slowElementThreshold;
							std::string verifyStringWhitelist;
							int ignoreCertificateError;
							std::string targetUrl;
							int flowHijackJumpTimes;
							int disableCache;
							int monitorTimeout;
							long waitCompletionTime;
							std::string verifyStringBlacklist;
							std::string dNSHijackWhitelist;
							std::string flowHijackLogo;
							std::string elementBlacklist;
							int redirection;
							int customHeader;
							std::string pageTamper;
							int filterInvalidIP;
						};
						struct Stream
						{
							int streamType;
							std::string customHeaderContent;
							int streamAddressType;
							int streamMonitorTimeout;
							int playerType;
							std::string whiteList;
							std::string targetUrl;
						};
						NetDNS netDNS;
						FileDownload fileDownload;
						Website website;
						Stream stream;
						NetTCP netTCP;
						NetICMP netICMP;
						ApiHTTP apiHTTP;
					};
					struct CustomPeriod
					{
						long startHour;
						long endHour;
					};
					struct CommonSetting
					{
						struct CustomHost
						{
							struct Host
							{
								int ipType;
								std::string domain;
								std::vector<std::string> ips;
							};
							std::vector<Host> hosts;
							int selectType;
						};
						struct CustomVPCSetting
						{
							std::string vpcId;
							std::string vSwitchId;
							std::string secureGroupId;
							std::string regionId;
						};
						struct CustomPrometheusSetting
						{
							std::string prometheusClusterId;
							std::string prometheusClusterRegion;
							std::string prometheusLabels;
						};
						CustomPrometheusSetting customPrometheusSetting;
						int ipType;
						bool isOpenTrace;
						int traceClientType;
						CustomVPCSetting customVPCSetting;
						std::string xtraceRegion;
						CustomHost customHost;
						int monitorSamples;
					};
					struct Monitor
					{
						std::string cityCode;
						int clientType;
						std::string operatorCode;
					};
					struct AvailableAssertion
					{
						std::string type;
						std::string target;
						std::string expect;
						std::string _operator;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string taskId;
					CustomPeriod customPeriod;
					std::string resourceGroupId;
					std::vector<AvailableAssertion> availableAssertions;
					std::string name;
					MonitorConf monitorConf;
					int taskType;
					std::vector<Monitor> monitors;
					std::string frequency;
					long monitorCategory;
					std::string regionId;
					CommonSetting commonSetting;
					std::vector<Tag> tags;
				};


				GetTimingSyntheticTaskResult();
				explicit GetTimingSyntheticTaskResult(const std::string &payload);
				~GetTimingSyntheticTaskResult();
				std::string getMessage()const;
				Data getData()const;
				long getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				long code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETTIMINGSYNTHETICTASKRESULT_H_