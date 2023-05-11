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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMACCESSSTRATEGYREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMACCESSSTRATEGYREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT UpdateGtmAccessStrategyRequest : public RpcServiceRequest {
public:
	UpdateGtmAccessStrategyRequest();
	~UpdateGtmAccessStrategyRequest();
	std::string getDefaultAddrPoolId() const;
	void setDefaultAddrPoolId(const std::string &defaultAddrPoolId);
	std::string getFailoverAddrPoolId() const;
	void setFailoverAddrPoolId(const std::string &failoverAddrPoolId);
	std::string getStrategyName() const;
	void setStrategyName(const std::string &strategyName);
	std::string getAccessLines() const;
	void setAccessLines(const std::string &accessLines);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getStrategyId() const;
	void setStrategyId(const std::string &strategyId);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string defaultAddrPoolId_;
	std::string failoverAddrPoolId_;
	std::string strategyName_;
	std::string accessLines_;
	std::string userClientIp_;
	std::string strategyId_;
	std::string lang_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMACCESSSTRATEGYREQUEST_H_
