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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRouterRouteTablesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListTransitRouterRouteTablesRequest();
	~ListTransitRouterRouteTablesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getTransitRouterRouteTableNames() const;
	void setTransitRouterRouteTableNames(const std::vector<std::string> &transitRouterRouteTableNames);
	std::string getTransitRouterRouteTableType() const;
	void setTransitRouterRouteTableType(const std::string &transitRouterRouteTableType);
	std::string getTransitRouterRouteTableStatus() const;
	void setTransitRouterRouteTableStatus(const std::string &transitRouterRouteTableStatus);
	std::vector<std::string> getTransitRouterRouteTableIds() const;
	void setTransitRouterRouteTableIds(const std::vector<std::string> &transitRouterRouteTableIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	std::vector<std::string> transitRouterRouteTableNames_;
	std::string transitRouterRouteTableType_;
	std::string transitRouterRouteTableStatus_;
	std::vector<std::string> transitRouterRouteTableIds_;
	std::string nextToken_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	int maxResults_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLESREQUEST_H_
