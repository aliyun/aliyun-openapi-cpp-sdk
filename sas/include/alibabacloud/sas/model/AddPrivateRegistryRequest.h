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

#ifndef ALIBABACLOUD_SAS_MODEL_ADDPRIVATEREGISTRYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_ADDPRIVATEREGISTRYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT AddPrivateRegistryRequest : public RpcServiceRequest {
public:
	AddPrivateRegistryRequest();
	~AddPrivateRegistryRequest();
	std::string getExtraParam() const;
	void setExtraParam(const std::string &extraParam);
	std::string getRegistryVersion() const;
	void setRegistryVersion(const std::string &registryVersion);
	std::string getRegistryHostIp() const;
	void setRegistryHostIp(const std::string &registryHostIp);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegistryRegionId() const;
	void setRegistryRegionId(const std::string &registryRegionId);
	int getTransPerHour() const;
	void setTransPerHour(int transPerHour);
	std::string getRegistryType() const;
	void setRegistryType(const std::string &registryType);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getNetType() const;
	void setNetType(long netType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	long getProtocolType() const;
	void setProtocolType(long protocolType);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string extraParam_;
	std::string registryVersion_;
	std::string registryHostIp_;
	std::string password_;
	std::string sourceIp_;
	std::string registryRegionId_;
	int transPerHour_;
	std::string registryType_;
	std::string domainName_;
	long netType_;
	std::string vpcId_;
	long protocolType_;
	std::string userName_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_ADDPRIVATEREGISTRYREQUEST_H_
