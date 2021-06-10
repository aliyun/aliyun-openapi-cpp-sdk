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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATABASEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATABASEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT SearchDatabaseRequest : public RpcServiceRequest {
public:
	SearchDatabaseRequest();
	~SearchDatabaseRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getSearchRange() const;
	void setSearchRange(const std::string &searchRange);
	long getTid() const;
	void setTid(long tid);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSearchTarget() const;
	void setSearchTarget(const std::string &searchTarget);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEnvType() const;
	void setEnvType(const std::string &envType);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);

private:
	std::string searchKey_;
	std::string searchRange_;
	long tid_;
	int pageNumber_;
	std::string searchTarget_;
	int pageSize_;
	std::string envType_;
	std::string dbType_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATABASEREQUEST_H_
