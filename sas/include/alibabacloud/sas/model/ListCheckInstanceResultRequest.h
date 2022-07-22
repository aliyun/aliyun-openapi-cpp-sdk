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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListCheckInstanceResultRequest : public RpcServiceRequest {
public:
	ListCheckInstanceResultRequest();
	~ListCheckInstanceResultRequest();
	std::string getRegionIdKey() const;
	void setRegionIdKey(const std::string &regionIdKey);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getCheckId() const;
	void setCheckId(long checkId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::vector<std::string> getSortTypes() const;
	void setSortTypes(const std::vector<std::string> &sortTypes);
	std::string getInstanceIdKey() const;
	void setInstanceIdKey(const std::string &instanceIdKey);
	std::string getInstanceNameKey() const;
	void setInstanceNameKey(const std::string &instanceNameKey);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);

private:
	std::string regionIdKey_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	long checkId_;
	int currentPage_;
	std::vector<std::string> sortTypes_;
	std::string instanceIdKey_;
	std::string instanceNameKey_;
	std::vector<std::string> instanceIds_;
	std::vector<std::string> statuses_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCHECKINSTANCERESULTREQUEST_H_
