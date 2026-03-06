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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHIVECOLUMNLINEAGESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHIVECOLUMNLINEAGESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListHiveColumnLineagesRequest : public RpcServiceRequest {
public:
	ListHiveColumnLineagesRequest();
	~ListHiveColumnLineagesRequest();
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getColumnName() const;
	void setColumnName(const std::string &columnName);
	std::string getDatabaseName() const;
	void setDatabaseName(const std::string &databaseName);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);

private:
	std::string clusterId_;
	std::string columnName_;
	std::string databaseName_;
	std::string tableName_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHIVECOLUMNLINEAGESREQUEST_H_
