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

#ifndef ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT CreateRuleRequest : public RpcServiceRequest {
public:
	CreateRuleRequest();
	~CreateRuleRequest();
	int getWarnLevel() const;
	void setWarnLevel(int warnLevel);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	long getProductId() const;
	void setProductId(long productId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getRiskLevelId() const;
	void setRiskLevelId(long riskLevelId);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getMatchType() const;
	void setMatchType(int matchType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getSupportForm() const;
	void setSupportForm(int supportForm);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	int getRuleType() const;
	void setRuleType(int ruleType);
	std::string getStatExpress() const;
	void setStatExpress(const std::string &statExpress);
	int getContentCategory() const;
	void setContentCategory(int contentCategory);
	long getCustomType() const;
	void setCustomType(long customType);
	std::string getTarget() const;
	void setTarget(const std::string &target);
	std::string getName() const;
	void setName(const std::string &name);
	int getCategory() const;
	void setCategory(int category);
	int getStatus() const;
	void setStatus(int status);

private:
	int warnLevel_;
	std::string productCode_;
	long productId_;
	std::string description_;
	long riskLevelId_;
	std::string content_;
	std::string sourceIp_;
	int matchType_;
	std::string lang_;
	int supportForm_;
	int featureType_;
	int ruleType_;
	std::string statExpress_;
	int contentCategory_;
	long customType_;
	std::string target_;
	std::string name_;
	int category_;
	int status_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_
