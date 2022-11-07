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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTAUTHORIZATIONRULESREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTAUTHORIZATIONRULESREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT ListAuthorizationRulesRequest : public RpcServiceRequest {
public:
	ListAuthorizationRulesRequest();
	~ListAuthorizationRulesRequest();
	std::string getDestinationType() const;
	void setDestinationType(const std::string &destinationType);
	std::string getDestination() const;
	void setDestination(const std::string &destination);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::vector<std::string> getAuthorizationRuleIds() const;
	void setAuthorizationRuleIds(const std::vector<std::string> &authorizationRuleIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	bool getDns() const;
	void setDns(bool dns);
	std::string getDestinationPort() const;
	void setDestinationPort(const std::string &destinationPort);
	std::vector<std::string> getNames() const;
	void setNames(const std::vector<std::string> &names);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);

private:
	std::string destinationType_;
	std::string destination_;
	std::string type_;
	std::string protocol_;
	std::vector<std::string> authorizationRuleIds_;
	std::string nextToken_;
	std::string policy_;
	bool dns_;
	std::string destinationPort_;
	std::vector<std::string> names_;
	std::string wirelessCloudConnectorId_;
	long maxResults_;
	std::vector<std::string> statuses_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTAUTHORIZATIONRULESREQUEST_H_
