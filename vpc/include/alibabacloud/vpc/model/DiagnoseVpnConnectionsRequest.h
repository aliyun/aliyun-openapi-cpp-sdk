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

#ifndef ALIBABACLOUD_VPC_MODEL_DIAGNOSEVPNCONNECTIONSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DIAGNOSEVPNCONNECTIONSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DiagnoseVpnConnectionsRequest : public RpcServiceRequest {
public:
	DiagnoseVpnConnectionsRequest();
	~DiagnoseVpnConnectionsRequest();
	std::vector<std::string> getTunnelIds() const;
	void setTunnelIds(const std::vector<std::string> &tunnelIds);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVpnGatewayId() const;
	void setVpnGatewayId(const std::string &vpnGatewayId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getVpnConnectionIds() const;
	void setVpnConnectionIds(const std::vector<std::string> &vpnConnectionIds);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::vector<std::string> tunnelIds_;
	long resourceOwnerId_;
	std::string vpnGatewayId_;
	int pageNumber_;
	std::string regionId_;
	std::vector<std::string> vpnConnectionIds_;
	int pageSize_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DIAGNOSEVPNCONNECTIONSREQUEST_H_
