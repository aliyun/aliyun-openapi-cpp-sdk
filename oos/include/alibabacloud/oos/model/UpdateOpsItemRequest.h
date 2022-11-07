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

#ifndef ALIBABACLOUD_OOS_MODEL_UPDATEOPSITEMREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_UPDATEOPSITEMREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT UpdateOpsItemRequest : public RpcServiceRequest {
public:
	UpdateOpsItemRequest();
	~UpdateOpsItemRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSeverity() const;
	void setSeverity(const std::string &severity);
	std::string getSolutions() const;
	void setSolutions(const std::string &solutions);
	std::string getResources() const;
	void setResources(const std::string &resources);
	int getPriority() const;
	void setPriority(int priority);
	std::string getDedupString() const;
	void setDedupString(const std::string &dedupString);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getOpsItemId() const;
	void setOpsItemId(const std::string &opsItemId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string clientToken_;
	std::string description_;
	std::string source_;
	std::string title_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string severity_;
	std::string solutions_;
	std::string resources_;
	int priority_;
	std::string dedupString_;
	std::string tags_;
	std::string opsItemId_;
	std::string category_;
	std::string status_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_UPDATEOPSITEMREQUEST_H_
