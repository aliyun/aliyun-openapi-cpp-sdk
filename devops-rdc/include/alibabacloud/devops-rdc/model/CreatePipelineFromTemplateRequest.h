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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATEPIPELINEFROMTEMPLATEREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATEPIPELINEFROMTEMPLATEREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT CreatePipelineFromTemplateRequest : public RpcServiceRequest {
public:
	CreatePipelineFromTemplateRequest();
	~CreatePipelineFromTemplateRequest();
	std::string getPipelineName() const;
	void setPipelineName(const std::string &pipelineName);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	long getPipelineTemplateId() const;
	void setPipelineTemplateId(long pipelineTemplateId);

private:
	std::string pipelineName_;
	std::string orgId_;
	long pipelineTemplateId_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATEPIPELINEFROMTEMPLATEREQUEST_H_
