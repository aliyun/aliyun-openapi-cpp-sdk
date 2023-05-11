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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMACCESSSTRATEGYREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMACCESSSTRATEGYREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT UpdateDnsGtmAccessStrategyRequest : public RpcServiceRequest {
public:
	struct DefaultAddrPool {
		std::string id;
		int lbaWeight;
	};
	struct FailoverAddrPool {
		std::string id;
		int lbaWeight;
	};
	UpdateDnsGtmAccessStrategyRequest();
	~UpdateDnsGtmAccessStrategyRequest();
	std::string getDefaultLbaStrategy() const;
	void setDefaultLbaStrategy(const std::string &defaultLbaStrategy);
	std::string getFailoverAddrPoolType() const;
	void setFailoverAddrPoolType(const std::string &failoverAddrPoolType);
	std::string getDefaultAddrPoolType() const;
	void setDefaultAddrPoolType(const std::string &defaultAddrPoolType);
	int getFailoverMaxReturnAddrNum() const;
	void setFailoverMaxReturnAddrNum(int failoverMaxReturnAddrNum);
	std::string getFailoverLbaStrategy() const;
	void setFailoverLbaStrategy(const std::string &failoverLbaStrategy);
	std::vector<DefaultAddrPool> getDefaultAddrPool() const;
	void setDefaultAddrPool(const std::vector<DefaultAddrPool> &defaultAddrPool);
	int getFailoverMinAvailableAddrNum() const;
	void setFailoverMinAvailableAddrNum(int failoverMinAvailableAddrNum);
	int getDefaultMaxReturnAddrNum() const;
	void setDefaultMaxReturnAddrNum(int defaultMaxReturnAddrNum);
	int getDefaultMinAvailableAddrNum() const;
	void setDefaultMinAvailableAddrNum(int defaultMinAvailableAddrNum);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getLines() const;
	void setLines(const std::string &lines);
	std::string getStrategyName() const;
	void setStrategyName(const std::string &strategyName);
	std::string getDefaultLatencyOptimization() const;
	void setDefaultLatencyOptimization(const std::string &defaultLatencyOptimization);
	std::string getFailoverLatencyOptimization() const;
	void setFailoverLatencyOptimization(const std::string &failoverLatencyOptimization);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getStrategyId() const;
	void setStrategyId(const std::string &strategyId);
	std::vector<FailoverAddrPool> getFailoverAddrPool() const;
	void setFailoverAddrPool(const std::vector<FailoverAddrPool> &failoverAddrPool);
	std::string getAccessMode() const;
	void setAccessMode(const std::string &accessMode);

private:
	std::string defaultLbaStrategy_;
	std::string failoverAddrPoolType_;
	std::string defaultAddrPoolType_;
	int failoverMaxReturnAddrNum_;
	std::string failoverLbaStrategy_;
	std::vector<DefaultAddrPool> defaultAddrPool_;
	int failoverMinAvailableAddrNum_;
	int defaultMaxReturnAddrNum_;
	int defaultMinAvailableAddrNum_;
	std::string lang_;
	std::string lines_;
	std::string strategyName_;
	std::string defaultLatencyOptimization_;
	std::string failoverLatencyOptimization_;
	std::string userClientIp_;
	std::string strategyId_;
	std::vector<FailoverAddrPool> failoverAddrPool_;
	std::string accessMode_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMACCESSSTRATEGYREQUEST_H_
