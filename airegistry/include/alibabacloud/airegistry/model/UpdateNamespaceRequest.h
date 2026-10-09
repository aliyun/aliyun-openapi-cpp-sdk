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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_UPDATENAMESPACEREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_UPDATENAMESPACEREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT UpdateNamespaceRequest : public RpcServiceRequest {
public:
	UpdateNamespaceRequest();
	~UpdateNamespaceRequest();
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getScanPolicy() const;
	void setScanPolicy(const std::string &scanPolicy);

private:
	std::string namespaceId_;
	std::string tags_;
	std::string name_;
	std::string description_;
	std::string scanPolicy_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_UPDATENAMESPACEREQUEST_H_
