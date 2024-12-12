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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTAUTHORIZEDUSERSFORDATABASEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTAUTHORIZEDUSERSFORDATABASEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListAuthorizedUsersForDatabaseRequest : public RpcServiceRequest {
public:
	ListAuthorizedUsersForDatabaseRequest();
	~ListAuthorizedUsersForDatabaseRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	long getTid() const;
	void setTid(long tid);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getDbId() const;
	void setDbId(const std::string &dbId);
	bool getLogic() const;
	void setLogic(bool logic);

private:
	std::string searchKey_;
	std::string pageNumber_;
	long tid_;
	std::string pageSize_;
	std::string dbId_;
	bool logic_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTAUTHORIZEDUSERSFORDATABASEREQUEST_H_
