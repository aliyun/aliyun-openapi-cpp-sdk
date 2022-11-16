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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEEXPORTMIGRATIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEEXPORTMIGRATIONREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateExportMigrationRequest : public RpcServiceRequest {
public:
	CreateExportMigrationRequest();
	~CreateExportMigrationRequest();
	long getIncrementalSince() const;
	void setIncrementalSince(long incrementalSince);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getExportObjectStatus() const;
	void setExportObjectStatus(const std::string &exportObjectStatus);
	std::string getExportMode() const;
	void setExportMode(const std::string &exportMode);
	std::string getName() const;
	void setName(const std::string &name);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	long incrementalSince_;
	std::string description_;
	std::string exportObjectStatus_;
	std::string exportMode_;
	std::string name_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEEXPORTMIGRATIONREQUEST_H_
