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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRouterRouteEntriesRequest : public RpcServiceRequest {
public:
	struct RouteFilter {
		std::string key;
	};
	ListTransitRouterRouteEntriesRequest();
	~ListTransitRouterRouteEntriesRequest();
	std::string getTransitRouterRouteEntryType() const;
	void setTransitRouterRouteEntryType(const std::string &transitRouterRouteEntryType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTransitRouterRouteEntryNextHopResourceType() const;
	void setTransitRouterRouteEntryNextHopResourceType(const std::string &transitRouterRouteEntryNextHopResourceType);
	std::string getTransitRouterRouteEntryNextHopType() const;
	void setTransitRouterRouteEntryNextHopType(const std::string &transitRouterRouteEntryNextHopType);
	std::string getTransitRouterRouteEntryDestinationCidrBlock() const;
	void setTransitRouterRouteEntryDestinationCidrBlock(const std::string &transitRouterRouteEntryDestinationCidrBlock);
	std::string getTransitRouterRouteTableId() const;
	void setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getPrefixListId() const;
	void setPrefixListId(const std::string &prefixListId);
	std::string getTransitRouterRouteEntryNextHopId() const;
	void setTransitRouterRouteEntryNextHopId(const std::string &transitRouterRouteEntryNextHopId);
	std::string getTransitRouterRouteEntryStatus() const;
	void setTransitRouterRouteEntryStatus(const std::string &transitRouterRouteEntryStatus);
	std::vector<RouteFilter> getRouteFilter() const;
	void setRouteFilter(const std::vector<RouteFilter> &routeFilter);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getTransitRouterRouteEntryNames() const;
	void setTransitRouterRouteEntryNames(const std::vector<std::string> &transitRouterRouteEntryNames);
	std::vector<std::string> getTransitRouterRouteEntryIds() const;
	void setTransitRouterRouteEntryIds(const std::vector<std::string> &transitRouterRouteEntryIds);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterRouteEntryOriginResourceType() const;
	void setTransitRouterRouteEntryOriginResourceType(const std::string &transitRouterRouteEntryOriginResourceType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getTransitRouterRouteEntryOriginResourceId() const;
	void setTransitRouterRouteEntryOriginResourceId(const std::string &transitRouterRouteEntryOriginResourceId);
	std::string getTransitRouterRouteEntryNextHopResourceId() const;
	void setTransitRouterRouteEntryNextHopResourceId(const std::string &transitRouterRouteEntryNextHopResourceId);

private:
	std::string transitRouterRouteEntryType_;
	long resourceOwnerId_;
	std::string transitRouterRouteEntryNextHopResourceType_;
	std::string transitRouterRouteEntryNextHopType_;
	std::string transitRouterRouteEntryDestinationCidrBlock_;
	std::string transitRouterRouteTableId_;
	std::string nextToken_;
	std::string prefixListId_;
	std::string transitRouterRouteEntryNextHopId_;
	std::string transitRouterRouteEntryStatus_;
	std::vector<RouteFilter> routeFilter_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> transitRouterRouteEntryNames_;
	std::vector<std::string> transitRouterRouteEntryIds_;
	long ownerId_;
	std::string version_;
	std::string transitRouterRouteEntryOriginResourceType_;
	int maxResults_;
	std::string transitRouterRouteEntryOriginResourceId_;
	std::string transitRouterRouteEntryNextHopResourceId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTEENTRIESREQUEST_H_
