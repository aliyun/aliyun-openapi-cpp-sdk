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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_ADDGTMADDRESSPOOLREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_ADDGTMADDRESSPOOLREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT AddGtmAddressPoolRequest : public RpcServiceRequest {
public:
	struct Addr {
		std::string mode;
		int lbaWeight;
		std::string value;
	};
	struct IspCityNode {
		std::string cityCode;
		std::string ispCode;
	};
	AddGtmAddressPoolRequest();
	~AddGtmAddressPoolRequest();
	std::string getMonitorExtendInfo() const;
	void setMonitorExtendInfo(const std::string &monitorExtendInfo);
	std::string getType() const;
	void setType(const std::string &type);
	int getTimeout() const;
	void setTimeout(int timeout);
	int getMinAvailableAddrNum() const;
	void setMinAvailableAddrNum(int minAvailableAddrNum);
	int getEvaluationCount() const;
	void setEvaluationCount(int evaluationCount);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<Addr> getAddr() const;
	void setAddr(const std::vector<Addr> &addr);
	std::string getMonitorStatus() const;
	void setMonitorStatus(const std::string &monitorStatus);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	int getInterval() const;
	void setInterval(int interval);
	std::vector<IspCityNode> getIspCityNode() const;
	void setIspCityNode(const std::vector<IspCityNode> &ispCityNode);

private:
	std::string monitorExtendInfo_;
	std::string type_;
	int timeout_;
	int minAvailableAddrNum_;
	int evaluationCount_;
	std::string lang_;
	std::vector<Addr> addr_;
	std::string monitorStatus_;
	std::string instanceId_;
	std::string userClientIp_;
	std::string name_;
	std::string protocolType_;
	int interval_;
	std::vector<IspCityNode> ispCityNode_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_ADDGTMADDRESSPOOLREQUEST_H_
