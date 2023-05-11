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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMMONITORREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMMONITORREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT UpdateDnsGtmMonitorRequest : public RpcServiceRequest {
public:
	struct IspCityNode {
		std::string cityCode;
		std::string ispCode;
	};
	UpdateDnsGtmMonitorRequest();
	~UpdateDnsGtmMonitorRequest();
	std::string getMonitorExtendInfo() const;
	void setMonitorExtendInfo(const std::string &monitorExtendInfo);
	std::string getMonitorConfigId() const;
	void setMonitorConfigId(const std::string &monitorConfigId);
	int getTimeout() const;
	void setTimeout(int timeout);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	int getEvaluationCount() const;
	void setEvaluationCount(int evaluationCount);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	int getInterval() const;
	void setInterval(int interval);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<IspCityNode> getIspCityNode() const;
	void setIspCityNode(const std::vector<IspCityNode> &ispCityNode);

private:
	std::string monitorExtendInfo_;
	std::string monitorConfigId_;
	int timeout_;
	std::string userClientIp_;
	int evaluationCount_;
	std::string protocolType_;
	int interval_;
	std::string lang_;
	std::vector<IspCityNode> ispCityNode_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMMONITORREQUEST_H_
