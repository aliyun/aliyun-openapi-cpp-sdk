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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListExecutionsRequest : public RpcServiceRequest {
public:
	ListExecutionsRequest();
	~ListExecutionsRequest();
	std::string getExecutedBy() const;
	void setExecutedBy(const std::string &executedBy);
	bool getIncludeChildExecution() const;
	void setIncludeChildExecution(bool includeChildExecution);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getExecutionId() const;
	void setExecutionId(const std::string &executionId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRamRole() const;
	void setRamRole(const std::string &ramRole);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getEndDateBefore() const;
	void setEndDateBefore(const std::string &endDateBefore);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getCategories() const;
	void setCategories(const std::string &categories);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getStartDateAfter() const;
	void setStartDateAfter(const std::string &startDateAfter);
	std::string getStartDateBefore() const;
	void setStartDateBefore(const std::string &startDateBefore);
	std::map<std::string, std::string> getTags() const;
	void setTags(std::map<std::string, std::string> tags);
	std::string getParentExecutionId() const;
	void setParentExecutionId(const std::string &parentExecutionId);
	std::string getDepth() const;
	void setDepth(const std::string &depth);
	std::string getEndDateAfter() const;
	void setEndDateAfter(const std::string &endDateAfter);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getResourceTemplateName() const;
	void setResourceTemplateName(const std::string &resourceTemplateName);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string executedBy_;
	bool includeChildExecution_;
	std::string description_;
	std::string mode_;
	std::string executionId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string ramRole_;
	std::string nextToken_;
	std::string templateName_;
	std::string endDateBefore_;
	std::string sortOrder_;
	std::string categories_;
	std::string resourceId_;
	std::string startDateAfter_;
	std::string startDateBefore_;
	std::map<std::string, std::string> tags_;
	std::string parentExecutionId_;
	std::string depth_;
	std::string endDateAfter_;
	int maxResults_;
	std::string sortField_;
	std::string category_;
	std::string resourceTemplateName_;
	std::string status_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSREQUEST_H_
