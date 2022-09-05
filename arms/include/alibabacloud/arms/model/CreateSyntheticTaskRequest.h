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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATESYNTHETICTASKREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATESYNTHETICTASKREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateSyntheticTaskRequest : public RpcServiceRequest {
public:
	struct MonitorList {
		long netServiceId;
		long monitorType;
		long cityCode;
	};
	struct CommonParam {
		std::string alertNotifierId;
		std::string alertPolicyId;
		struct AlertListItem {
			long isCritical;
			std::string name;
			std::string seriousAlert;
			std::string generalAlert;
			long symbols;
		};
		AlertListItem alertListItem;
		std::vector<AlertListItem> alertList;
		std::string alarmFlag;
		long startExecutionTime;
		long monitorSamples;
	};
	struct ExtendInterval {
		long startMinute;
		long endHour;
		long endMinute;
		long startHour;
		std::string endTime;
		long long;
		std::vector<long> days;
		std::string startTime;
	};
	struct Navigation {
		long executeActiveX;
		std::string navCustomHostIp;
		long navReturnElement;
		long qUICVersion;
		double slowElementThreshold;
		double waitCompletionTime;
		std::string qUICDomain;
		std::string navCustomHeaderContent;
		long responseHeader;
		std::string verifyStringWhiteList;
		std::string monitorTimeout;
		long filterInvalidIP;
		std::string flowHijackLogo;
		long navDisableCache;
		std::string elementBlacklist;
		long flowHijackJumpTimes;
		long executeScript;
		std::string navDisableCompression;
		std::string dNSHijackWhiteList;
		std::string processName;
		std::string verifyStringBlacklist;
		std::string navAutomaticScrolling;
		long navRedirection;
		std::string navCustomHeader;
		long executeApplication;
		long navCustomHost;
		long navIgnoreCertificateError;
		std::string pageTamper;
		long requestHeader;
	};
	struct Download {
		std::string downloadIgnoreCertificateError;
		long downloadCustomHost;
		double connectionTimeout;
		long downloadKernel;
		std::string whiteList;
		long downloadRedirection;
		long monitorTimeout;
		std::string validateKeywords;
		long downloadTransmissionSize;
		std::string quickProtocol;
		std::string downloadCustomHeaderContent;
		long verifyWay;
		std::string downloadCustomHostIp;
	};
	struct Protocol {
		long receivedDataSize;
		std::string protocolMonitorTimeout;
		struct RequestContent {
			std::string method;
			struct HeaderItem {
				std::string value;
				std::string key;
			};
			HeaderItem headerItem;
			std::vector<HeaderItem> header;
			struct Body {
				std::string mode;
				std::string raw;
				struct UrlEncodingItem {
					std::string value;
					std::string key;
				};
				UrlEncodingItem urlEncodingItem;
				std::vector<UrlEncodingItem> urlEncoding;
				std::string language;
				struct FormDataItem {
					std::string value;
					std::string key;
				};
				FormDataItem formDataItem;
				std::vector<FormDataItem> formData;
			};
			Body body;
		};
		RequestContent requestContent;
		long protocolConnectionTime;
		long characterEncoding;
		std::string verifyContent;
		long customHost;
		double protocolConnectionTimeout;
		std::string customHostIp;
		long verifyWay;
	};
	struct Net {
		long netICMPTimeout;
		long netTraceRouteTimeout;
		long netICMPActive;
		long netICMPDataCut;
		long netICMPNum;
		long netDNSTimeout;
		long netDNSQueryMethod;
		std::string whiteList;
		std::string netDNSNs;
		long netDNSServer;
		long netTraceRouteSwitch;
		long netDigSwitch;
		long netICMPInterval;
		long netDNSSwitch;
		long netTraceRouteNum;
		long netICMPSwitch;
		long netICMPSize;
	};
	CreateSyntheticTaskRequest();
	~CreateSyntheticTaskRequest();
	long getTaskType() const;
	void setTaskType(long taskType);
	std::string getIntervalType() const;
	void setIntervalType(const std::string &intervalType);
	bool getUpdateTask() const;
	void setUpdateTask(bool updateTask);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	std::vector<MonitorList> getMonitorList() const;
	void setMonitorList(const std::vector<MonitorList> &monitorList);
	long getIpType() const;
	void setIpType(long ipType);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	std::string getIntervalTime() const;
	void setIntervalTime(const std::string &intervalTime);
	CommonParam getCommonParam() const;
	void setCommonParam(const CommonParam &commonParam);
	ExtendInterval getExtendInterval() const;
	void setExtendInterval(const ExtendInterval &extendInterval);
	Navigation getNavigation() const;
	void setNavigation(const Navigation &navigation);
	Download getDownload() const;
	void setDownload(const Download &download);
	Protocol getProtocol() const;
	void setProtocol(const Protocol &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	Net getNet() const;
	void setNet(const Net &net);

private:
	long taskType_;
	std::string intervalType_;
	bool updateTask_;
	std::string taskName_;
	std::vector<MonitorList> monitorList_;
	long ipType_;
	std::string url_;
	std::string intervalTime_;
	CommonParam commonParam_;
	ExtendInterval extendInterval_;
	Navigation navigation_;
	Download download_;
	Protocol protocol_;
	std::string regionId_;
	Net net_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATESYNTHETICTASKREQUEST_H_
