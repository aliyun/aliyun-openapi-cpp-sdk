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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEMASKINGRULESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEMASKINGRULESREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateMaskingRulesRequest : public RpcServiceRequest {
public:
	struct RuleConfig {
		std::string string;
		std::vector<std::string> databases;
		std::string string;
		std::vector<std::string> tables;
		std::string string;
		std::vector<std::string> columns;
	};
	CreateMaskingRulesRequest();
	~CreateMaskingRulesRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getMaskingAlgo() const;
	void setMaskingAlgo(const std::string &maskingAlgo);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getDefaultAlgo() const;
	void setDefaultAlgo(const std::string &defaultAlgo);
	RuleConfig getRuleConfig() const;
	void setRuleConfig(const RuleConfig &ruleConfig);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);

private:
	std::string dBInstanceName_;
	long resourceOwnerId_;
	std::string maskingAlgo_;
	std::string ruleName_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerId_;
	std::string defaultAlgo_;
	RuleConfig ruleConfig_;
	std::string dBName_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEMASKINGRULESREQUEST_H_
