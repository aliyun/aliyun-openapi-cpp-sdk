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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLDETAILSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLDETAILSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOasSQLDetailsRequest : public RpcServiceRequest {
public:
	DescribeOasSQLDetailsRequest();
	~DescribeOasSQLDetailsRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	bool getParseTable() const;
	void setParseTable(bool parseTable);
	bool getDynamicSql() const;
	void setDynamicSql(bool dynamicSql);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getSqlId() const;
	void setSqlId(const std::string &sqlId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);

private:
	std::string startTime_;
	bool parseTable_;
	bool dynamicSql_;
	std::string tenantId_;
	std::string sqlId_;
	std::string endTime_;
	std::string instanceId_;
	std::string dbName_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLDETAILSREQUEST_H_
