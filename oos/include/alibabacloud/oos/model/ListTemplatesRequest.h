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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListTemplatesRequest : public RpcServiceRequest {
public:
	ListTemplatesRequest();
	~ListTemplatesRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getCreatedDateBefore() const;
	void setCreatedDateBefore(const std::string &createdDateBefore);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCreatedBy() const;
	void setCreatedBy(const std::string &createdBy);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTemplateType() const;
	void setTemplateType(const std::string &templateType);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getShareType() const;
	void setShareType(const std::string &shareType);
	bool getHasTrigger() const;
	void setHasTrigger(bool hasTrigger);
	std::string getCreatedDateAfter() const;
	void setCreatedDateAfter(const std::string &createdDateAfter);
	std::map<std::string, std::string> getTags() const;
	void setTags(std::map<std::string, std::string> tags);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getTemplateFormat() const;
	void setTemplateFormat(const std::string &templateFormat);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::string resourceGroupId_;
	std::string createdDateBefore_;
	std::string regionId_;
	std::string createdBy_;
	std::string nextToken_;
	std::string templateType_;
	std::string templateName_;
	std::string sortOrder_;
	std::string shareType_;
	bool hasTrigger_;
	std::string createdDateAfter_;
	std::map<std::string, std::string> tags_;
	int maxResults_;
	std::string templateFormat_;
	std::string sortField_;
	std::string category_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESREQUEST_H_
