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

#ifndef ALIBABACLOUD_CONFIG_MODEL_UPDATEREMEDIATIONREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_UPDATEREMEDIATIONREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT UpdateRemediationRequest : public RpcServiceRequest {
public:
	UpdateRemediationRequest();
	~UpdateRemediationRequest();
	std::string getConfigRuleId() const;
	void setConfigRuleId(const std::string &configRuleId);
	std::string getRemediationType() const;
	void setRemediationType(const std::string &remediationType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRemediationId() const;
	void setRemediationId(const std::string &remediationId);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getRemediationTemplateId() const;
	void setRemediationTemplateId(const std::string &remediationTemplateId);
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getInvokeType() const;
	void setInvokeType(const std::string &invokeType);

private:
	std::string configRuleId_;
	std::string remediationType_;
	std::string clientToken_;
	std::string remediationId_;
	std::string sourceType_;
	std::string remediationTemplateId_;
	std::string params_;
	std::string invokeType_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_UPDATEREMEDIATIONREQUEST_H_
