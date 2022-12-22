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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEPRODUCINGTASKSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEPRODUCINGTASKSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetMetaTableProducingTasksRequest : public RpcServiceRequest {
public:
	GetMetaTableProducingTasksRequest();
	~GetMetaTableProducingTasksRequest();
	std::string getDataSourceType() const;
	void setDataSourceType(const std::string &dataSourceType);
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getTableGuid() const;
	void setTableGuid(const std::string &tableGuid);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);

private:
	std::string dataSourceType_;
	std::string schemaName_;
	std::string clusterId_;
	std::string dbName_;
	std::string tableGuid_;
	std::string tableName_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEPRODUCINGTASKSREQUEST_H_
