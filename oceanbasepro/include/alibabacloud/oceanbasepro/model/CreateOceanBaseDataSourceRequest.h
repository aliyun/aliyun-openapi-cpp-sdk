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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOCEANBASEDATASOURCEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOCEANBASEDATASOURCEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateOceanBaseDataSourceRequest : public RpcServiceRequest {
public:
	CreateOceanBaseDataSourceRequest();
	~CreateOceanBaseDataSourceRequest();
	std::string getCluster() const;
	void setCluster(const std::string &cluster);
	std::string getDrcUserName() const;
	void setDrcUserName(const std::string &drcUserName);
	std::string getLogProxyIp() const;
	void setLogProxyIp(const std::string &logProxyIp);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getInnerDrcPassword() const;
	void setInnerDrcPassword(const std::string &innerDrcPassword);
	std::string getTenant() const;
	void setTenant(const std::string &tenant);
	std::string getConfigUrl() const;
	void setConfigUrl(const std::string &configUrl);
	std::string getIp() const;
	void setIp(const std::string &ip);
	int getPort() const;
	void setPort(int port);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDrcPassword() const;
	void setDrcPassword(const std::string &drcPassword);
	std::string getLogProxyPort() const;
	void setLogProxyPort(const std::string &logProxyPort);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string cluster_;
	std::string drcUserName_;
	std::string logProxyIp_;
	std::string description_;
	std::string type_;
	std::string password_;
	std::string innerDrcPassword_;
	std::string tenant_;
	std::string configUrl_;
	std::string ip_;
	int port_;
	std::string vpcId_;
	std::string name_;
	std::string drcPassword_;
	std::string logProxyPort_;
	std::string userName_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOCEANBASEDATASOURCEREQUEST_H_
