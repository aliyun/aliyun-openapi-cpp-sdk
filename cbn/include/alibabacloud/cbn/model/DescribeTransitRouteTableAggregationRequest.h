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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBETRANSITROUTETABLEAGGREGATIONREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBETRANSITROUTETABLEAGGREGATIONREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribeTransitRouteTableAggregationRequest : public RpcServiceRequest {
public:
	DescribeTransitRouteTableAggregationRequest();
	~DescribeTransitRouteTableAggregationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
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
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string nextToken_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string transitRouteTableId_;
	std::string transitRouteTableAggregationCidr_;
	long maxResults_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBETRANSITROUTETABLEAGGREGATIONREQUEST_H_
