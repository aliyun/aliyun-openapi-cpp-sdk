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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATERULELISTREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATERULELISTREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeCategoryTemplateRuleListRequest : public RpcServiceRequest {
public:
	DescribeCategoryTemplateRuleListRequest();
	~DescribeCategoryTemplateRuleListRequest();
	long getRiskLevelId() const;
	void setRiskLevelId(long riskLevelId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	std::string getParentCategoryIdList() const;
	void setParentCategoryIdList(const std::string &parentCategoryIdList);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	int getCustomType() const;
	void setCustomType(int customType);
	int getStatus() const;
	void setStatus(int status);

private:
	long riskLevelId_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	int featureType_;
	std::string parentCategoryIdList_;
	int currentPage_;
	long templateId_;
	int customType_;
	int status_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATERULELISTREQUEST_H_
