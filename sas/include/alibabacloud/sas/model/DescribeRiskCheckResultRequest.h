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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeRiskCheckResultRequest : public RpcServiceRequest {
public:
	DescribeRiskCheckResultRequest();
	~DescribeRiskCheckResultRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getAssetType() const;
	void setAssetType(const std::string &assetType);
	std::string getQueryFlag() const;
	void setQueryFlag(const std::string &queryFlag);
	long getGroupId() const;
	void setGroupId(long groupId);
	std::vector<std::string> getItemIds() const;
	void setItemIds(const std::vector<std::string> &itemIds);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getRiskLevel() const;
	void setRiskLevel(const std::string &riskLevel);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	std::string assetType_;
	std::string queryFlag_;
	long groupId_;
	std::vector<std::string> itemIds_;
	int currentPage_;
	std::string riskLevel_;
	std::string instanceId_;
	std::string name_;
	std::string status_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBERISKCHECKRESULTREQUEST_H_
