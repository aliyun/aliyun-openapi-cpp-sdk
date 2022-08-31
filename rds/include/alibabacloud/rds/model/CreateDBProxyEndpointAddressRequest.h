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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDBPROXYENDPOINTADDRESSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDBPROXYENDPOINTADDRESSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateDBProxyEndpointAddressRequest : public RpcServiceRequest {
public:
	CreateDBProxyEndpointAddressRequest();
	~CreateDBProxyEndpointAddressRequest();
	std::string getConnectionStringPrefix() const;
	void setConnectionStringPrefix(const std::string &connectionStringPrefix);
	std::string getDBProxyConnectStringNetType() const;
	void setDBProxyConnectStringNetType(const std::string &dBProxyConnectStringNetType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBProxyNewConnectStringPort() const;
	void setDBProxyNewConnectStringPort(const std::string &dBProxyNewConnectStringPort);
	std::string getDBProxyEngineType() const;
	void setDBProxyEngineType(const std::string &dBProxyEngineType);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getDBProxyEndpointId() const;
	void setDBProxyEndpointId(const std::string &dBProxyEndpointId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);

private:
	std::string connectionStringPrefix_;
	std::string dBProxyConnectStringNetType_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string dBProxyNewConnectStringPort_;
	std::string dBProxyEngineType_;
	std::string vSwitchId_;
	std::string dBProxyEndpointId_;
	std::string vPCId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDBPROXYENDPOINTADDRESSREQUEST_H_
