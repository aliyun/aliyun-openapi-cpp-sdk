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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListInstancesRequest : public RpcServiceRequest {
public:
	ListInstancesRequest();
	~ListInstancesRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	long getTid() const;
	void setTid(long tid);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getEnvType() const;
	void setEnvType(const std::string &envType);
	std::string getInstanceSource() const;
	void setInstanceSource(const std::string &instanceSource);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceState() const;
	void setInstanceState(const std::string &instanceState);
	std::string getNetType() const;
	void setNetType(const std::string &netType);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);

private:
	std::string searchKey_;
	long tid_;
	int pageNumber_;
	std::string envType_;
	std::string instanceSource_;
	int pageSize_;
	std::string instanceState_;
	std::string netType_;
	std::string dbType_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESREQUEST_H_
