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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYMASKINGRULESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYMASKINGRULESREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyMaskingRulesRequest : public RpcServiceRequest {
public:
	ModifyMaskingRulesRequest();
	~ModifyMaskingRulesRequest();
	std::string getMaskingAlgo() const;
	void setMaskingAlgo(const std::string &maskingAlgo);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getRuleVersion() const;
	void setRuleVersion(const std::string &ruleVersion);
	std::string getEnable() const;
	void setEnable(const std::string &enable);
	std::string getInterfaceVersion() const;
	void setInterfaceVersion(const std::string &interfaceVersion);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getDefaultAlgo() const;
	void setDefaultAlgo(const std::string &defaultAlgo);
	std::string getRuleConfig() const;
	void setRuleConfig(const std::string &ruleConfig);
	std::string getRuleNameList() const;
	void setRuleNameList(const std::string &ruleNameList);

private:
	std::string maskingAlgo_;
	std::string ruleName_;
	std::string ruleVersion_;
	std::string enable_;
	std::string interfaceVersion_;
	std::string dBClusterId_;
	std::string defaultAlgo_;
	std::string ruleConfig_;
	std::string ruleNameList_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYMASKINGRULESREQUEST_H_
