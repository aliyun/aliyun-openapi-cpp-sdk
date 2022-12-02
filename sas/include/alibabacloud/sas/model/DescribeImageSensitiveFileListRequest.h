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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGESENSITIVEFILELISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGESENSITIVEFILELISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageSensitiveFileListRequest : public RpcServiceRequest {
public:
	DescribeImageSensitiveFileListRequest();
	~DescribeImageSensitiveFileListRequest();
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getCriteriaType() const;
	void setCriteriaType(const std::string &criteriaType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getImageUuid() const;
	void setImageUuid(const std::string &imageUuid);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getRiskLevel() const;
	void setRiskLevel(const std::string &riskLevel);

private:
	std::string criteria_;
	std::string uuid_;
	std::vector<std::string> scanRange_;
	int pageSize_;
	std::string criteriaType_;
	std::string lang_;
	std::string imageUuid_;
	int currentPage_;
	std::string riskLevel_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGESENSITIVEFILELISTREQUEST_H_
