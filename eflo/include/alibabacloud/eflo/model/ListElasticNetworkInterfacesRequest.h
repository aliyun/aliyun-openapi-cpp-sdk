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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListElasticNetworkInterfacesRequest : public RpcServiceRequest {
public:
	ListElasticNetworkInterfacesRequest();
	~ListElasticNetworkInterfacesRequest();
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getElasticNetworkInterfaceId() const;
	void setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string networkType_;
	std::string type_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string nodeId_;
	std::string ip_;
	std::string vSwitchId_;
	std::string vpcId_;
	std::string zoneId_;
	std::string elasticNetworkInterfaceId_;
	std::string status_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESREQUEST_H_
