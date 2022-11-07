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

#ifndef ALIBABACLOUD_CC5G_MODEL_UPDATEDNSAUTHORIZATIONRULEREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_UPDATEDNSAUTHORIZATIONRULEREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT UpdateDNSAuthorizationRuleRequest : public RpcServiceRequest {
public:
	UpdateDNSAuthorizationRuleRequest();
	~UpdateDNSAuthorizationRuleRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getSourceDNSIp() const;
	void setSourceDNSIp(const std::string &sourceDNSIp);
	std::string getAuthorizationRuleId() const;
	void setAuthorizationRuleId(const std::string &authorizationRuleId);
	std::string getDestinationIp() const;
	void setDestinationIp(const std::string &destinationIp);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	std::string description_;
	bool dryRun_;
	std::string sourceDNSIp_;
	std::string authorizationRuleId_;
	std::string destinationIp_;
	std::string wirelessCloudConnectorId_;
	std::string name_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_UPDATEDNSAUTHORIZATIONRULEREQUEST_H_
