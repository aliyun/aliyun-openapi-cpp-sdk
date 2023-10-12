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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEDATABASEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEDATABASEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateDatabaseRequest : public RpcServiceRequest {
public:
	CreateDatabaseRequest();
	~CreateDatabaseRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEncoding() const;
	void setEncoding(const std::string &encoding);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDatabaseName() const;
	void setDatabaseName(const std::string &databaseName);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getCollation() const;
	void setCollation(const std::string &collation);

private:
	std::string clientToken_;
	std::string description_;
	std::string encoding_;
	std::string instanceId_;
	std::string databaseName_;
	std::string tenantId_;
	std::string collation_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEDATABASEREQUEST_H_
