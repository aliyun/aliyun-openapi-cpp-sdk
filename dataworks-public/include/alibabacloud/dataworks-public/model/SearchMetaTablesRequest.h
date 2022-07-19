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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMETATABLESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMETATABLESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT SearchMetaTablesRequest : public RpcServiceRequest {
public:
	SearchMetaTablesRequest();
	~SearchMetaTablesRequest();
	std::string getSchema() const;
	void setSchema(const std::string &schema);
	std::string getDataSourceType() const;
	void setDataSourceType(const std::string &dataSourceType);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getEntityType() const;
	void setEntityType(int entityType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAppGuid() const;
	void setAppGuid(const std::string &appGuid);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	std::string schema_;
	std::string dataSourceType_;
	std::string clusterId_;
	int pageNumber_;
	int entityType_;
	int pageSize_;
	std::string appGuid_;
	std::string keyword_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_SEARCHMETATABLESREQUEST_H_
