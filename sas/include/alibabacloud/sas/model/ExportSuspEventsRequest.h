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

#ifndef ALIBABACLOUD_SAS_MODEL_EXPORTSUSPEVENTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_EXPORTSUSPEVENTSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ExportSuspEventsRequest : public RpcServiceRequest {
public:
	ExportSuspEventsRequest();
	~ExportSuspEventsRequest();
	std::string getTimeEnd() const;
	void setTimeEnd(const std::string &timeEnd);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	std::string getCurrentPage() const;
	void setCurrentPage(const std::string &currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<std::string> getAssetsTypeList() const;
	void setAssetsTypeList(const std::vector<std::string> &assetsTypeList);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getTimeStart() const;
	void setTimeStart(const std::string &timeStart);
	std::string getLevels() const;
	void setLevels(const std::string &levels);
	std::string getParentEventTypes() const;
	void setParentEventTypes(const std::string &parentEventTypes);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string timeEnd_;
	std::string targetType_;
	std::string remark_;
	std::string containerFieldName_;
	std::string sourceIp_;
	std::string containerFieldValue_;
	std::string pageSize_;
	std::string from_;
	std::string lang_;
	std::string dealed_;
	std::string currentPage_;
	std::string clusterId_;
	std::vector<std::string> assetsTypeList_;
	std::string name_;
	std::string timeStart_;
	std::string levels_;
	std::string parentEventTypes_;
	std::string status_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_EXPORTSUSPEVENTSREQUEST_H_
