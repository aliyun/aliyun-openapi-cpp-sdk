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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTTABLESREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTTABLESREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListTablesRequest : public RpcServiceRequest {
public:
	ListTablesRequest();
	~ListTablesRequest();
	std::string getSearchName() const;
	void setSearchName(const std::string &searchName);
	bool getReturnGuid() const;
	void setReturnGuid(bool returnGuid);
	long getTid() const;
	void setTid(long tid);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDatabaseId() const;
	void setDatabaseId(const std::string &databaseId);

private:
	std::string searchName_;
	bool returnGuid_;
	long tid_;
	int pageNumber_;
	int pageSize_;
	std::string databaseId_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTTABLESREQUEST_H_
