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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_UPDATEPROMPTREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_UPDATEPROMPTREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT UpdatePromptRequest : public RpcServiceRequest {
public:
	UpdatePromptRequest();
	~UpdatePromptRequest();
	std::string getPromptKey() const;
	void setPromptKey(const std::string &promptKey);
	std::vector<std::string> getBizTags() const;
	void setBizTags(const std::vector<std::string> &bizTags);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::map<std::string, std::string> getLabels() const;
	void setLabels(const std::map<std::string, std::string> &labels);
	std::string getDescription() const;
	void setDescription(const std::string &description);

private:
	std::string promptKey_;
	std::vector<std::string> bizTags_;
	std::string namespaceId_;
	std::map<std::string, std::string> labels_;
	std::string description_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_UPDATEPROMPTREQUEST_H_
