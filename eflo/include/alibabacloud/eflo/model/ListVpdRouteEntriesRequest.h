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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTVPDROUTEENTRIESREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTVPDROUTEENTRIESREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListVpdRouteEntriesRequest : public RpcServiceRequest {
public:
	ListVpdRouteEntriesRequest();
	~ListVpdRouteEntriesRequest();
	bool getIgnoreDetailedRouteEntry() const;
	void setIgnoreDetailedRouteEntry(bool ignoreDetailedRouteEntry);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRouteType() const;
	void setRouteType(const std::string &routeType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNextHopId() const;
	void setNextHopId(const std::string &nextHopId);
	std::string getNextHopType() const;
	void setNextHopType(const std::string &nextHopType);
	std::string getVpdRouteEntryId() const;
	void setVpdRouteEntryId(const std::string &vpdRouteEntryId);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	bool ignoreDetailedRouteEntry_;
	int pageNumber_;
	std::string routeType_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string nextHopId_;
	std::string nextHopType_;
	std::string vpdRouteEntryId_;
	std::string destinationCidrBlock_;
	std::string vpdId_;
	bool enablePage_;
	std::string status_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTVPDROUTEENTRIESREQUEST_H_
