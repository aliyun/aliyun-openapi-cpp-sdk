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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGSUMMARYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGSUMMARYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListCheckItemWarningSummaryRequest : public RpcServiceRequest {
public:
	ListCheckItemWarningSummaryRequest();
	~ListCheckItemWarningSummaryRequest();
	std::string getRiskType() const;
	void setRiskType(const std::string &riskType);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getCheckType() const;
	void setCheckType(const std::string &checkType);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getCheckWarningStatus() const;
	void setCheckWarningStatus(int checkWarningStatus);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getCheckItemFuzzy() const;
	void setCheckItemFuzzy(const std::string &checkItemFuzzy);
	std::string getCheckLevel() const;
	void setCheckLevel(const std::string &checkLevel);

private:
	std::string riskType_;
	std::string containerFieldName_;
	std::string checkType_;
	std::string containerFieldValue_;
	int pageSize_;
	std::string lang_;
	int checkWarningStatus_;
	long groupId_;
	int currentPage_;
	std::string checkItemFuzzy_;
	std::string checkLevel_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCHECKITEMWARNINGSUMMARYREQUEST_H_
