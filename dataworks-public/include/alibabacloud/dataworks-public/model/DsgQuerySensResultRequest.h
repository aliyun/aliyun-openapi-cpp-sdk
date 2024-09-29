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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGQUERYSENSRESULTREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGQUERYSENSRESULTREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT DsgQuerySensResultRequest : public RpcServiceRequest {
public:
	DsgQuerySensResultRequest();
	~DsgQuerySensResultRequest();
	std::string getCol() const;
	void setCol(const std::string &col);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getSensStatus() const;
	void setSensStatus(const std::string &sensStatus);
	std::string getNodeName() const;
	void setNodeName(const std::string &nodeName);
	std::string getSensitiveId() const;
	void setSensitiveId(const std::string &sensitiveId);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSensitiveName() const;
	void setSensitiveName(const std::string &sensitiveName);
	std::string getTable() const;
	void setTable(const std::string &table);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getOrderField() const;
	void setOrderField(const std::string &orderField);

private:
	std::string col_;
	std::string projectName_;
	std::string schemaName_;
	std::string level_;
	std::string sensStatus_;
	std::string nodeName_;
	std::string sensitiveId_;
	int pageNo_;
	std::string tenantId_;
	std::string dbType_;
	int pageSize_;
	std::string sensitiveName_;
	std::string table_;
	std::string order_;
	std::string orderField_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGQUERYSENSRESULTREQUEST_H_
