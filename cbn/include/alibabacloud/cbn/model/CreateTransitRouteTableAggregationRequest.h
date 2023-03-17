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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTETABLEAGGREGATIONREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTETABLEAGGREGATIONREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateTransitRouteTableAggregationRequest : public RpcServiceRequest {
public:
	CreateTransitRouteTableAggregationRequest();
	~CreateTransitRouteTableAggregationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTransitRouteTableAggregationDescription() const;
	void setTransitRouteTableAggregationDescription(const std::string &transitRouteTableAggregationDescription);
	std::string getTransitRouteTableAggregationName() const;
	void setTransitRouteTableAggregationName(const std::string &transitRouteTableAggregationName);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getTransitRouteTableAggregationScope() const;
	void setTransitRouteTableAggregationScope(const std::string &transitRouteTableAggregationScope);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouteTableId() const;
	void setTransitRouteTableId(const std::string &transitRouteTableId);
	std::string getTransitRouteTableAggregationCidr() const;
	void setTransitRouteTableAggregationCidr(const std::string &transitRouteTableAggregationCidr);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string transitRouteTableAggregationDescription_;
	std::string transitRouteTableAggregationName_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string transitRouteTableAggregationScope_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string transitRouteTableId_;
	std::string transitRouteTableAggregationCidr_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTETABLEAGGREGATIONREQUEST_H_
