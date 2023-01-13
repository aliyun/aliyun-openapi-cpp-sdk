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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRAFFICMARKINGPOLICIESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRAFFICMARKINGPOLICIESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTrafficMarkingPoliciesRequest : public RpcServiceRequest {
public:
	ListTrafficMarkingPoliciesRequest();
	~ListTrafficMarkingPoliciesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTrafficMarkingPolicyDescription() const;
	void setTrafficMarkingPolicyDescription(const std::string &trafficMarkingPolicyDescription);
	std::string getTrafficMarkingPolicyId() const;
	void setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTrafficMarkingPolicyName() const;
	void setTrafficMarkingPolicyName(const std::string &trafficMarkingPolicyName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	std::string trafficMarkingPolicyDescription_;
	std::string trafficMarkingPolicyId_;
	std::string nextToken_;
	std::string trafficMarkingPolicyName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string version_;
	int maxResults_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRAFFICMARKINGPOLICIESREQUEST_H_
