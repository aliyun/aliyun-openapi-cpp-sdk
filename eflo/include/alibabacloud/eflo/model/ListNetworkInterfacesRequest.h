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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTNETWORKINTERFACESREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTNETWORKINTERFACESREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListNetworkInterfacesRequest : public RpcServiceRequest {
public:
	ListNetworkInterfacesRequest();
	~ListNetworkInterfacesRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getSubnetId() const;
	void setSubnetId(const std::string &subnetId);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string nodeId_;
	std::string subnetId_;
	std::string ip_;
	std::string vpdId_;
	bool enablePage_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTNETWORKINTERFACESREQUEST_H_
