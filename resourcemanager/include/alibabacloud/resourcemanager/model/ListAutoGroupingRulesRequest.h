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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListAutoGroupingRulesRequest : public RpcServiceRequest {
public:
	ListAutoGroupingRulesRequest();
	~ListAutoGroupingRulesRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);

private:
	std::string ruleName_;
	std::string nextToken_;
	std::string ruleType_;
	int maxResults_;
	std::string ruleId_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESREQUEST_H_
