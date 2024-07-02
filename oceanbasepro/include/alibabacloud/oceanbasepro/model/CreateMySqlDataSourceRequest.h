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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEMYSQLDATASOURCEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEMYSQLDATASOURCEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateMySqlDataSourceRequest : public RpcServiceRequest {
public:
	CreateMySqlDataSourceRequest();
	~CreateMySqlDataSourceRequest();
	std::string getSchema() const;
	void setSchema(const std::string &schema);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	bool getUseSsl() const;
	void setUseSsl(bool useSsl);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getDgInstanceId() const;
	void setDgInstanceId(const std::string &dgInstanceId);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPort() const;
	void setPort(int port);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string schema_;
	std::string description_;
	std::string type_;
	bool useSsl_;
	std::string password_;
	std::string dgInstanceId_;
	std::string ip_;
	std::string instanceId_;
	int port_;
	std::string vpcId_;
	std::string name_;
	std::string userName_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEMYSQLDATASOURCEREQUEST_H_
