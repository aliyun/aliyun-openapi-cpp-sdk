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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTUSERPERMISSIONREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTUSERPERMISSIONREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GrantUserPermissionRequest : public RpcServiceRequest {
public:
	GrantUserPermissionRequest();
	~GrantUserPermissionRequest();
	std::string getExpireDate() const;
	void setExpireDate(const std::string &expireDate);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	long getTid() const;
	void setTid(long tid);
	std::string getTableId() const;
	void setTableId(const std::string &tableId);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getPermTypes() const;
	void setPermTypes(const std::string &permTypes);
	std::string getDsType() const;
	void setDsType(const std::string &dsType);
	long getInstanceId() const;
	void setInstanceId(long instanceId);
	std::string getDbId() const;
	void setDbId(const std::string &dbId);
	bool getLogic() const;
	void setLogic(bool logic);

private:
	std::string expireDate_;
	std::string userId_;
	long tid_;
	std::string tableId_;
	std::string tableName_;
	std::string permTypes_;
	std::string dsType_;
	long instanceId_;
	std::string dbId_;
	bool logic_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTUSERPERMISSIONREQUEST_H_
