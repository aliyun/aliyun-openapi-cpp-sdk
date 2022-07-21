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

#ifndef ALIBABACLOUD_IMM_MODEL_DETECTIMAGELABELSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_DETECTIMAGELABELSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT DetectImageLabelsRequest : public RpcServiceRequest {
public:
	struct CredentialConfig {
		struct ChainItem {
			std::string role;
			std::string roleType;
			std::string assumeRoleFor;
		};
		ChainItem chainItem;
		std::vector<ChainItem> chain;
		std::string serviceRole;
		std::string policy;
	};
	DetectImageLabelsRequest();
	~DetectImageLabelsRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getSourceURI() const;
	void setSourceURI(const std::string &sourceURI);
	float getThreshold() const;
	void setThreshold(float threshold);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);

private:
	std::string projectName_;
	std::string sourceURI_;
	float threshold_;
	CredentialConfig credentialConfig_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_DETECTIMAGELABELSREQUEST_H_
