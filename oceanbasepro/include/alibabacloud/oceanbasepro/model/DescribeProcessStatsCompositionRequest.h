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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeProcessStatsCompositionRequest : public RpcServiceRequest {
public:
	DescribeProcessStatsCompositionRequest();
	~DescribeProcessStatsCompositionRequest();
	std::string getUId() const;
	void setUId(const std::string &uId);
	bool getMergeDynamicSql() const;
	void setMergeDynamicSql(bool mergeDynamicSql);
	std::string getSqlText() const;
	void setSqlText(const std::string &sqlText);
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getServerIp() const;
	void setServerIp(const std::string &serverIp);
	std::string getUsers() const;
	void setUsers(const std::string &users);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string uId_;
	bool mergeDynamicSql_;
	std::string sqlText_;
	std::string clientIp_;
	std::string tenantId_;
	std::string serverIp_;
	std::string users_;
	std::string instanceId_;
	std::string status_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONREQUEST_H_
