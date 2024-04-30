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

#ifndef ALIBABACLOUD_DCDN_MODEL_BATCHCREATEDCDNWAFRULESREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_BATCHCREATEDCDNWAFRULESREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT BatchCreateDcdnWafRulesRequest : public RpcServiceRequest {
public:
	BatchCreateDcdnWafRulesRequest();
	~BatchCreateDcdnWafRulesRequest();
	long getPolicyId() const;
	void setPolicyId(long policyId);
	std::string getRuleConfigs() const;
	void setRuleConfigs(const std::string &ruleConfigs);

private:
	long policyId_;
	std::string ruleConfigs_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_BATCHCREATEDCDNWAFRULESREQUEST_H_
