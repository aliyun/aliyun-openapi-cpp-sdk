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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_UPDATESKILLLABELSREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_UPDATESKILLLABELSREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT UpdateSkillLabelsRequest : public RpcServiceRequest {
public:
	UpdateSkillLabelsRequest();
	~UpdateSkillLabelsRequest();
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string getSkillName() const;
	void setSkillName(const std::string &skillName);

private:
	std::string namespaceId_;
	std::string labels_;
	std::string skillName_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_UPDATESKILLLABELSREQUEST_H_
