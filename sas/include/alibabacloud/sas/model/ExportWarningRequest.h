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

#ifndef ALIBABACLOUD_SAS_MODEL_EXPORTWARNINGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_EXPORTWARNINGREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ExportWarningRequest : public RpcServiceRequest {
public:
	ExportWarningRequest();
	~ExportWarningRequest();
	int getIsCleartextPwd() const;
	void setIsCleartextPwd(int isCleartextPwd);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getRiskLevels() const;
	void setRiskLevels(const std::string &riskLevels);
	std::string getRiskName() const;
	void setRiskName(const std::string &riskName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getExportType() const;
	void setExportType(const std::string &exportType);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	std::string getTypeNames() const;
	void setTypeNames(const std::string &typeNames);
	int getIsSummaryExport() const;
	void setIsSummaryExport(int isSummaryExport);
	std::string getRiskIds() const;
	void setRiskIds(const std::string &riskIds);
	long getStrategyId() const;
	void setStrategyId(long strategyId);
	std::string getTypeName() const;
	void setTypeName(const std::string &typeName);
	std::string getSubTypeNames() const;
	void setSubTypeNames(const std::string &subTypeNames);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);

private:
	int isCleartextPwd_;
	std::string statusList_;
	std::string riskLevels_;
	std::string riskName_;
	std::string sourceIp_;
	std::string lang_;
	std::string exportType_;
	std::string dealed_;
	std::string typeNames_;
	int isSummaryExport_;
	std::string riskIds_;
	long strategyId_;
	std::string typeName_;
	std::string subTypeNames_;
	std::string uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_EXPORTWARNINGREQUEST_H_
