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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_DELETEFUNCTIONREQUEST_H_
#define ALIBABACLOUD_DATALAKE_MODEL_DELETEFUNCTIONREQUEST_H_

#include <alibabacloud/datalake/DataLakeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DataLake {
namespace Model {
class ALIBABACLOUD_DATALAKE_EXPORT DeleteFunctionRequest : public RoaServiceRequest {
public:
	DeleteFunctionRequest();
	~DeleteFunctionRequest();
	std::string getCatalogId() const;
	void setCatalogId(const std::string &catalogId);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	std::string getDatabaseName() const;
	void setDatabaseName(const std::string &databaseName);

private:
	std::string catalogId_;
	std::string functionName_;
	std::string databaseName_;
};
} // namespace Model
} // namespace DataLake
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATALAKE_MODEL_DELETEFUNCTIONREQUEST_H_
