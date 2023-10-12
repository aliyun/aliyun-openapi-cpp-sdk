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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSlowSQLListRequest : public RpcServiceRequest {
public:
	DescribeSlowSQLListRequest();
	~DescribeSlowSQLListRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSearchRule() const;
	void setSearchRule(const std::string &searchRule);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSearchParameter() const;
	void setSearchParameter(const std::string &searchParameter);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getSearchValue() const;
	void setSearchValue(const std::string &searchValue);
	std::string getSQLId() const;
	void setSQLId(const std::string &sQLId);
	std::string getFilterCondition() const;
	void setFilterCondition(const std::string &filterCondition);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getNodeIp() const;
	void setNodeIp(const std::string &nodeIp);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getSearchKeyWord() const;
	void setSearchKeyWord(const std::string &searchKeyWord);
	std::string getSortColumn() const;
	void setSortColumn(const std::string &sortColumn);

private:
	std::string startTime_;
	int pageNumber_;
	std::string searchRule_;
	std::string tenantId_;
	int pageSize_;
	std::string searchParameter_;
	std::string sortOrder_;
	std::string searchValue_;
	std::string sQLId_;
	std::string filterCondition_;
	std::string endTime_;
	std::string nodeIp_;
	std::string dbName_;
	std::string searchKeyWord_;
	std::string sortColumn_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTREQUEST_H_
