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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOASOUTLINETASKREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOASOUTLINETASKREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateOasOutlineTaskRequest : public RpcServiceRequest {
public:
	CreateOasOutlineTaskRequest();
	~CreateOasOutlineTaskRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getUId() const;
	void setUId(const std::string &uId);
	bool getDynamicSql() const;
	void setDynamicSql(bool dynamicSql);
	std::string getSqlText() const;
	void setSqlText(const std::string &sqlText);
	bool getBySqlId() const;
	void setBySqlId(bool bySqlId);
	int getMaxConcurrent() const;
	void setMaxConcurrent(int maxConcurrent);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getStatementId() const;
	void setStatementId(const std::string &statementId);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getSqlId() const;
	void setSqlId(const std::string &sqlId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPlanData() const;
	void setPlanData(const std::string &planData);
	std::string getIndexName() const;
	void setIndexName(const std::string &indexName);
	std::string getDatabaseName() const;
	void setDatabaseName(const std::string &databaseName);
	bool getIsConcurrentLimit() const;
	void setIsConcurrentLimit(bool isConcurrentLimit);

private:
	std::string startTime_;
	std::string uId_;
	bool dynamicSql_;
	std::string sqlText_;
	bool bySqlId_;
	int maxConcurrent_;
	std::string tenantId_;
	std::string statementId_;
	std::string tableName_;
	std::string sqlId_;
	std::string endTime_;
	std::string instanceId_;
	std::string planData_;
	std::string indexName_;
	std::string databaseName_;
	bool isConcurrentLimit_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATEOASOUTLINETASKREQUEST_H_
