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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEPROJECTREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateProjectRequest : public RpcServiceRequest {
public:
	CreateProjectRequest();
	~CreateProjectRequest();
	long getDatasetMaxBindCount() const;
	void setDatasetMaxBindCount(long datasetMaxBindCount);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getDatasetMaxRelationCount() const;
	void setDatasetMaxRelationCount(long datasetMaxRelationCount);
	long getDatasetMaxFileCount() const;
	void setDatasetMaxFileCount(long datasetMaxFileCount);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	long getProjectMaxDatasetCount() const;
	void setProjectMaxDatasetCount(long projectMaxDatasetCount);
	long getDatasetMaxEntityCount() const;
	void setDatasetMaxEntityCount(long datasetMaxEntityCount);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	long getDatasetMaxTotalFileSize() const;
	void setDatasetMaxTotalFileSize(long datasetMaxTotalFileSize);
	std::string getServiceRole() const;
	void setServiceRole(const std::string &serviceRole);

private:
	long datasetMaxBindCount_;
	std::string description_;
	long datasetMaxRelationCount_;
	long datasetMaxFileCount_;
	std::string projectName_;
	long projectMaxDatasetCount_;
	long datasetMaxEntityCount_;
	std::string templateId_;
	long datasetMaxTotalFileSize_;
	std::string serviceRole_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEPROJECTREQUEST_H_
