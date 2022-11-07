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

#ifndef ALIBABACLOUD_CC5G_MODEL_CREATEAUTHORIZATIONRULEREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_CREATEAUTHORIZATIONRULEREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT CreateAuthorizationRuleRequest : public RpcServiceRequest {
public:
	CreateAuthorizationRuleRequest();
	~CreateAuthorizationRuleRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSourceCidr() const;
	void setSourceCidr(const std::string &sourceCidr);
	std::string getDestinationType() const;
	void setDestinationType(const std::string &destinationType);
	std::string getDestination() const;
	void setDestination(const std::string &destination);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDestinationPort() const;
	void setDestinationPort(const std::string &destinationPort);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	std::string sourceCidr_;
	std::string destinationType_;
	std::string destination_;
	std::string description_;
	std::string protocol_;
	std::string policy_;
	bool dryRun_;
	std::string destinationPort_;
	std::string wirelessCloudConnectorId_;
	std::string name_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_CREATEAUTHORIZATIONRULEREQUEST_H_
