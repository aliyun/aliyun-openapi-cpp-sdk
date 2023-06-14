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

#ifndef ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT ListCustomRoutingPortMappingsByDestinationRequest : public RpcServiceRequest {
public:
	ListCustomRoutingPortMappingsByDestinationRequest();
	~ListCustomRoutingPortMappingsByDestinationRequest();
	std::string getEndpointId() const;
	void setEndpointId(const std::string &endpointId);
	std::string getDestinationAddress() const;
	void setDestinationAddress(const std::string &destinationAddress);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);

private:
	std::string endpointId_;
	std::string destinationAddress_;
	std::string pageNumber_;
	std::string regionId_;
	std::string pageSize_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_H_
