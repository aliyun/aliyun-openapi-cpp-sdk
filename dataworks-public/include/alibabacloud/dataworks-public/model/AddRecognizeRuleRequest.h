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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDRECOGNIZERULEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDRECOGNIZERULEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT AddRecognizeRuleRequest : public RpcServiceRequest {
public:
	AddRecognizeRuleRequest();
	~AddRecognizeRuleRequest();
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getColScan() const;
	void setColScan(const std::string &colScan);
	std::string getColExclude() const;
	void setColExclude(const std::string &colExclude);
	std::string getContentScan() const;
	void setContentScan(const std::string &contentScan);
	int getOperationType() const;
	void setOperationType(int operationType);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getRecognizeRulesType() const;
	void setRecognizeRulesType(const std::string &recognizeRulesType);
	std::string getCommentScan() const;
	void setCommentScan(const std::string &commentScan);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getSensitiveDescription() const;
	void setSensitiveDescription(const std::string &sensitiveDescription);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getRecognizeRules() const;
	void setRecognizeRules(const std::string &recognizeRules);
	int getHitThreshold() const;
	void setHitThreshold(int hitThreshold);
	std::string getSensitiveName() const;
	void setSensitiveName(const std::string &sensitiveName);
	std::string getNodeParent() const;
	void setNodeParent(const std::string &nodeParent);
	std::string getLevelName() const;
	void setLevelName(const std::string &levelName);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string level_;
	std::string colScan_;
	std::string colExclude_;
	std::string contentScan_;
	int operationType_;
	std::string templateId_;
	std::string recognizeRulesType_;
	std::string commentScan_;
	std::string accountName_;
	std::string sensitiveDescription_;
	std::string tenantId_;
	std::string recognizeRules_;
	int hitThreshold_;
	std::string sensitiveName_;
	std::string nodeParent_;
	std::string levelName_;
	std::string nodeId_;
	int status_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ADDRECOGNIZERULEREQUEST_H_
