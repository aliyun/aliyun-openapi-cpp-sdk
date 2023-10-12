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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOasAnomalySQLListRequest : public RpcServiceRequest {
public:
	DescribeOasAnomalySQLListRequest();
	~DescribeOasAnomalySQLListRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSearchRule() const;
	void setSearchRule(const std::string &searchRule);
	bool getMergeDynamicSql() const;
	void setMergeDynamicSql(bool mergeDynamicSql);
	long getCurrent() const;
	void setCurrent(long current);
	bool getDynamicSql() const;
	void setDynamicSql(bool dynamicSql);
	long getSqlTextLength() const;
	void setSqlTextLength(long sqlTextLength);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getSearchValue() const;
	void setSearchValue(const std::string &searchValue);
	std::string getSqlId() const;
	void setSqlId(const std::string &sqlId);
	std::string getFilterCondition() const;
	void setFilterCondition(const std::string &filterCondition);
	std::string getSearchParam() const;
	void setSearchParam(const std::string &searchParam);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getNodeIp() const;
	void setNodeIp(const std::string &nodeIp);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getSearchKeyWord() const;
	void setSearchKeyWord(const std::string &searchKeyWord);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string startTime_;
	std::string searchRule_;
	bool mergeDynamicSql_;
	long current_;
	bool dynamicSql_;
	long sqlTextLength_;
	std::string tenantId_;
	long pageSize_;
	std::string searchValue_;
	std::string sqlId_;
	std::string filterCondition_;
	std::string searchParam_;
	std::string endTime_;
	std::string nodeIp_;
	std::string instanceId_;
	std::string dbName_;
	std::string searchKeyWord_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTREQUEST_H_
