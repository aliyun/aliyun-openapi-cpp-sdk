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

#ifndef ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT ListCustomRoutingEndpointGroupDestinationsRequest : public RpcServiceRequest {
public:
	ListCustomRoutingEndpointGroupDestinationsRequest();
	~ListCustomRoutingEndpointGroupDestinationsRequest();
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getFromPort() const;
	void setFromPort(int fromPort);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);
	std::vector<std::string> getProtocols() const;
	void setProtocols(const std::vector<std::string> &protocols);
	int getToPort() const;
	void setToPort(int toPort);
	std::string getEndpointGroupId() const;
	void setEndpointGroupId(const std::string &endpointGroupId);

private:
	std::string pageNumber_;
	std::string listenerId_;
	std::string regionId_;
	int fromPort_;
	std::string pageSize_;
	std::string acceleratorId_;
	std::vector<std::string> protocols_;
	int toPort_;
	std::string endpointGroupId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_H_
