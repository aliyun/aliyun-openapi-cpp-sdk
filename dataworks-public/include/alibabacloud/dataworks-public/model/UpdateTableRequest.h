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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateTableRequest : public RpcServiceRequest {
public:
	struct Columns {
		int seqNumber;
		bool isPartitionCol;
		std::string columnNameCn;
		int length;
		std::string comment;
		std::string columnName;
		std::string columnType;
	};
	struct Themes {
		int themeLevel;
		long themeId;
	};
	UpdateTableRequest();
	~UpdateTableRequest();
	std::string getSchema() const;
	void setSchema(const std::string &schema);
	std::vector<Columns> getColumns() const;
	void setColumns(const std::vector<Columns> &columns);
	int getLifeCycle() const;
	void setLifeCycle(int lifeCycle);
	std::vector<Themes> getThemes() const;
	void setThemes(const std::vector<Themes> &themes);
	long getLogicalLevelId() const;
	void setLogicalLevelId(long logicalLevelId);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	int getEnvType() const;
	void setEnvType(int envType);
	int getHasPart() const;
	void setHasPart(int hasPart);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getAppGuid() const;
	void setAppGuid(const std::string &appGuid);
	long getProjectId() const;
	void setProjectId(long projectId);
	long getCategoryId() const;
	void setCategoryId(long categoryId);
	int getVisibility() const;
	void setVisibility(int visibility);
	long getPhysicsLevelId() const;
	void setPhysicsLevelId(long physicsLevelId);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getIsView() const;
	void setIsView(int isView);
	std::string getExternalTableType() const;
	void setExternalTableType(const std::string &externalTableType);
	std::string getLocation() const;
	void setLocation(const std::string &location);
	std::string getComment() const;
	void setComment(const std::string &comment);
	bool getCreateIfNotExists() const;
	void setCreateIfNotExists(bool createIfNotExists);

private:
	std::string schema_;
	std::vector<Columns> columns_;
	int lifeCycle_;
	std::vector<Themes> themes_;
	long logicalLevelId_;
	std::string endpoint_;
	int envType_;
	int hasPart_;
	std::string tableName_;
	std::string appGuid_;
	long projectId_;
	long categoryId_;
	int visibility_;
	long physicsLevelId_;
	std::string ownerId_;
	int isView_;
	std::string externalTableType_;
	std::string location_;
	std::string comment_;
	bool createIfNotExists_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEREQUEST_H_
