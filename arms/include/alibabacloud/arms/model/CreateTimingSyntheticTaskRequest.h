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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATETIMINGSYNTHETICTASKREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATETIMINGSYNTHETICTASKREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateTimingSyntheticTaskRequest : public RpcServiceRequest {
public:
	struct AvailableAssertions {
		std::string expect;
		std::string type;
		std::string _operator;
		std::string target;
	};
	struct CommonSetting {
		struct CustomPrometheusSetting {
			std::map<std::string, std::string> prometheusLabels;
			std::string prometheusClusterRegion;
			std::string prometheusClusterId;
		};
		CustomPrometheusSetting customPrometheusSetting;
		struct CustomHost {
			struct HostsItem {
				std::string domain;
				int ipType;
				std::string string;
				std::vector<std::string> ips;
			};
			HostsItem hostsItem;
			std::vector<HostsItem> hosts;
			int selectType;
		};
		CustomHost customHost;
		std::string xtraceRegion;
		int ipType;
		bool isOpenTrace;
		int traceClientType;
		struct CustomVPCSetting {
			std::string vSwitchId;
			std::string secureGroupId;
			std::string regionId;
			std::string vpcId;
		};
		CustomVPCSetting customVPCSetting;
		int monitorSamples;
	};
	struct Tags {
		std::string value;
		std::string key;
	};
	struct MonitorConf {
		struct NetICMP {
			long tracertTimeout;
			long interval;
			bool splitPackage;
			int packageSize;
			bool tracertEnable;
			std::string targetUrl;
			long timeout;
			int packageNum;
			int tracertNumMax;
		};
		NetICMP netICMP;
		struct ApiHTTP {
			long connectTimeout;
			struct RequestBody {
				std::string type;
				std::string content;
			};
			RequestBody requestBody;
			std::string method;
			bool checkCert;
			int protocolAlpnProtocol;
			std::map<std::string, std::string> requestHeaders;
			std::string targetUrl;
			long timeout;
		};
		ApiHTTP apiHTTP;
		struct Website {
			int flowHijackJumpTimes;
			std::string dNSHijackWhitelist;
			long slowElementThreshold;
			std::string verifyStringBlacklist;
			int customHeader;
			long waitCompletionTime;
			int disableCompression;
			long monitorTimeout;
			std::string verifyStringWhitelist;
			std::map<std::string, std::string> customHeaderContent;
			int filterInvalidIP;
			int disableCache;
			std::string pageTamper;
			std::string flowHijackLogo;
			int automaticScrolling;
			std::string targetUrl;
			int redirection;
			int ignoreCertificateError;
			std::string elementBlacklist;
		};
		Website website;
		struct Stream {
			int playerType;
			int streamType;
			int streamAddressType;
			std::map<std::string, std::string> customHeaderContent;
			int streamMonitorTimeout;
			std::string whiteList;
			std::string targetUrl;
		};
		Stream stream;
		struct NetDNS {
			std::string nsServer;
			int queryMethod;
			std::string targetUrl;
			int dnsServerIpType;
			long timeout;
		};
		NetDNS netDNS;
		struct NetTCP {
			int connectTimes;
			long tracertTimeout;
			long interval;
			bool tracertEnable;
			std::string targetUrl;
			long timeout;
			int tracertNumMax;
		};
		NetTCP netTCP;
		struct FileDownload {
			int ignoreCertificateUntrustworthyError;
			long connectionTimeout;
			int ignoreCertificateCanceledError;
			int ignoreCertificateOutOfDateError;
			int downloadKernel;
			std::string whiteList;
			int ignoreCertificateAuthError;
			long monitorTimeout;
			std::string validateKeywords;
			int ignoreInvalidHostError;
			std::map<std::string, std::string> customHeaderContent;
			long transmissionSize;
			int ignoreCertificateUsingError;
			int quickProtocol;
			int ignoreCertificateStatusError;
			std::string targetUrl;
			int redirection;
			int verifyWay;
		};
		FileDownload fileDownload;
	};
	struct CustomPeriod {
		int endHour;
		int startHour;
	};
	struct Monitors {
		int clientType;
		std::string cityCode;
		std::string operatorCode;
	};
	CreateTimingSyntheticTaskRequest();
	~CreateTimingSyntheticTaskRequest();
	std::vector<AvailableAssertions> getAvailableAssertions() const;
	void setAvailableAssertions(const std::vector<AvailableAssertions> &availableAssertions);
	int getTaskType() const;
	void setTaskType(int taskType);
	CommonSetting getCommonSetting() const;
	void setCommonSetting(const CommonSetting &commonSetting);
	int getMonitorCategory() const;
	void setMonitorCategory(int monitorCategory);
	std::string getFrequency() const;
	void setFrequency(const std::string &frequency);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	MonitorConf getMonitorConf() const;
	void setMonitorConf(const MonitorConf &monitorConf);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	CustomPeriod getCustomPeriod() const;
	void setCustomPeriod(const CustomPeriod &customPeriod);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<Monitors> getMonitors() const;
	void setMonitors(const std::vector<Monitors> &monitors);

private:
	std::vector<AvailableAssertions> availableAssertions_;
	int taskType_;
	CommonSetting commonSetting_;
	int monitorCategory_;
	std::string frequency_;
	std::vector<Tags> tags_;
	std::string resourceGroupId_;
	MonitorConf monitorConf_;
	std::string regionId_;
	CustomPeriod customPeriod_;
	std::string name_;
	std::vector<Monitors> monitors_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATETIMINGSYNTHETICTASKREQUEST_H_
