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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEIMPORTMIGRATIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEIMPORTMIGRATIONREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateImportMigrationRequest : public RpcServiceRequest {
public:
	CreateImportMigrationRequest();
	~CreateImportMigrationRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getCommitRule() const;
	void setCommitRule(const std::string &commitRule);
	std::string getWorkspaceMap() const;
	void setWorkspaceMap(const std::string &workspaceMap);
	std::string getCalculateEngineMap() const;
	void setCalculateEngineMap(const std::string &calculateEngineMap);
	std::string getPackageFile() const;
	void setPackageFile(const std::string &packageFile);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPackageType() const;
	void setPackageType(const std::string &packageType);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getResourceGroupMap() const;
	void setResourceGroupMap(const std::string &resourceGroupMap);

private:
	std::string description_;
	std::string commitRule_;
	std::string workspaceMap_;
	std::string calculateEngineMap_;
	std::string packageFile_;
	std::string name_;
	std::string packageType_;
	long projectId_;
	std::string resourceGroupMap_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEIMPORTMIGRATIONREQUEST_H_
