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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListProxySQLExecAuditLogRequest : public RpcServiceRequest {
public:
	ListProxySQLExecAuditLogRequest();
	~ListProxySQLExecAuditLogRequest();
	std::string getSearchName() const;
	void setSearchName(const std::string &searchName);
	std::string getOpUserName() const;
	void setOpUserName(const std::string &opUserName);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	long getTid() const;
	void setTid(long tid);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSQLType() const;
	void setSQLType(const std::string &sQLType);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getExecState() const;
	void setExecState(const std::string &execState);

private:
	std::string searchName_;
	std::string opUserName_;
	long startTime_;
	int pageNumber_;
	long tid_;
	int pageSize_;
	std::string sQLType_;
	long endTime_;
	std::string execState_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGREQUEST_H_
