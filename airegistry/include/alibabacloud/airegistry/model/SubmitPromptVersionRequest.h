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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_SUBMITPROMPTVERSIONREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_SUBMITPROMPTVERSIONREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT SubmitPromptVersionRequest : public RpcServiceRequest {
public:
	SubmitPromptVersionRequest();
	~SubmitPromptVersionRequest();
	std::string getPromptKey() const;
	void setPromptKey(const std::string &promptKey);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getPromptVersion() const;
	void setPromptVersion(const std::string &promptVersion);

private:
	std::string promptKey_;
	std::string namespaceId_;
	std::string promptVersion_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_SUBMITPROMPTVERSIONREQUEST_H_
