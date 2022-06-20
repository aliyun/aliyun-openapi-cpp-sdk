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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEEMGVULITEMREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEEMGVULITEMREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeEmgVulItemRequest : public RpcServiceRequest {
public:
	DescribeEmgVulItemRequest();
	~DescribeEmgVulItemRequest();
	std::string getScanType() const;
	void setScanType(const std::string &scanType);
	int getCheckType() const;
	void setCheckType(int checkType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getCheckStatus() const;
	void setCheckStatus(const std::string &checkStatus);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getVulName() const;
	void setVulName(const std::string &vulName);
	std::string getRiskStatus() const;
	void setRiskStatus(const std::string &riskStatus);

private:
	std::string scanType_;
	int checkType_;
	std::string sourceIp_;
	int pageSize_;
	std::string checkStatus_;
	std::string lang_;
	int currentPage_;
	std::string vulName_;
	std::string riskStatus_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEEMGVULITEMREQUEST_H_
