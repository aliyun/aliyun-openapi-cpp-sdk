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

#ifndef ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT GetTableObjectsRequest : public RpcServiceRequest {
public:
	GetTableObjectsRequest();
	~GetTableObjectsRequest();
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getFilterTblType() const;
	void setFilterTblType(const std::string &filterTblType);
	std::string getFilterDescription() const;
	void setFilterDescription(const std::string &filterDescription);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getFilterTblName() const;
	void setFilterTblName(const std::string &filterTblName);
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getFilterOwner() const;
	void setFilterOwner(const std::string &filterOwner);

private:
	long pageNumber_;
	std::string filterTblType_;
	std::string filterDescription_;
	std::string regionId_;
	long pageSize_;
	std::string filterTblName_;
	std::string schemaName_;
	std::string dBClusterId_;
	std::string orderBy_;
	std::string filterOwner_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSREQUEST_H_
