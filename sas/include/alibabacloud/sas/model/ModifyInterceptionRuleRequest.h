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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYINTERCEPTIONRULEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYINTERCEPTIONRULEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyInterceptionRuleRequest : public RpcServiceRequest {
public:
	ModifyInterceptionRuleRequest();
	~ModifyInterceptionRuleRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getOrderIndex() const;
	void setOrderIndex(long orderIndex);
	std::string getDstTarget() const;
	void setDstTarget(const std::string &dstTarget);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getInterceptType() const;
	void setInterceptType(int interceptType);
	int getRuleSwitch() const;
	void setRuleSwitch(int ruleSwitch);
	long getRuleId() const;
	void setRuleId(long ruleId);
	std::string getSrcTarget() const;
	void setSrcTarget(const std::string &srcTarget);

private:
	std::string ruleName_;
	std::string sourceIp_;
	long orderIndex_;
	std::string dstTarget_;
	std::string clusterId_;
	int interceptType_;
	int ruleSwitch_;
	long ruleId_;
	std::string srcTarget_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYINTERCEPTIONRULEREQUEST_H_
