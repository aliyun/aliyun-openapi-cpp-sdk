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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEMETATABLEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEMETATABLEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateMetaTableRequest : public RpcServiceRequest {
public:
	UpdateMetaTableRequest();
	~UpdateMetaTableRequest();
	std::string getSchema() const;
	void setSchema(const std::string &schema);
	int getVisibility() const;
	void setVisibility(int visibility);
	std::string getCaption() const;
	void setCaption(const std::string &caption);
	std::string getNewOwnerId() const;
	void setNewOwnerId(const std::string &newOwnerId);
	std::string getTableGuid() const;
	void setTableGuid(const std::string &tableGuid);
	std::string getAddedLabels() const;
	void setAddedLabels(const std::string &addedLabels);
	std::string getRemovedLabels() const;
	void setRemovedLabels(const std::string &removedLabels);
	int getEnvType() const;
	void setEnvType(int envType);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	long getProjectId() const;
	void setProjectId(long projectId);
	long getCategoryId() const;
	void setCategoryId(long categoryId);

private:
	std::string schema_;
	int visibility_;
	std::string caption_;
	std::string newOwnerId_;
	std::string tableGuid_;
	std::string addedLabels_;
	std::string removedLabels_;
	int envType_;
	std::string tableName_;
	long projectId_;
	long categoryId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEMETATABLEREQUEST_H_
