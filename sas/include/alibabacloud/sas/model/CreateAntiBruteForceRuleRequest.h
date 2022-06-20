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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEANTIBRUTEFORCERULEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEANTIBRUTEFORCERULEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateAntiBruteForceRuleRequest : public RpcServiceRequest {
public:
	CreateAntiBruteForceRuleRequest();
	~CreateAntiBruteForceRuleRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getForbiddenTime() const;
	void setForbiddenTime(int forbiddenTime);
	int getFailCount() const;
	void setFailCount(int failCount);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	bool getEnableSmartRule() const;
	void setEnableSmartRule(bool enableSmartRule);
	std::vector<std::string> getUuidList() const;
	void setUuidList(const std::vector<std::string> &uuidList);
	std::string getName() const;
	void setName(const std::string &name);
	int getSpan() const;
	void setSpan(int span);
	bool getDefaultRule() const;
	void setDefaultRule(bool defaultRule);

private:
	long resourceOwnerId_;
	int forbiddenTime_;
	int failCount_;
	std::string sourceIp_;
	bool enableSmartRule_;
	std::vector<std::string> uuidList_;
	std::string name_;
	int span_;
	bool defaultRule_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEANTIBRUTEFORCERULEREQUEST_H_
