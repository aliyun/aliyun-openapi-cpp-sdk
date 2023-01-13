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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribeCenRouteMapsRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string key;
	};
	DescribeCenRouteMapsRequest();
	~DescribeCenRouteMapsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getTransitRouterRouteTableId() const;
	void setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTransmitDirection() const;
	void setTransmitDirection(const std::string &transmitDirection);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRouteMapId() const;
	void setRouteMapId(const std::string &routeMapId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::string getCenRegionId() const;
	void setCenRegionId(const std::string &cenRegionId);

private:
	long resourceOwnerId_;
	std::string cenId_;
	int pageNumber_;
	std::string transitRouterRouteTableId_;
	int pageSize_;
	std::string transmitDirection_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string routeMapId_;
	long ownerId_;
	std::string version_;
	std::vector<Filter> filter_;
	std::string cenRegionId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENROUTEMAPSREQUEST_H_
