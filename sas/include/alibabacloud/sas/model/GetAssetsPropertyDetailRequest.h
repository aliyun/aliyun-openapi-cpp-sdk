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

#ifndef ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT GetAssetsPropertyDetailRequest : public RpcServiceRequest {
public:
	struct SearchCriteriaList {
		std::string name;
		std::string value;
	};
	GetAssetsPropertyDetailRequest();
	~GetAssetsPropertyDetailRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	long getMaxId() const;
	void setMaxId(long maxId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<SearchCriteriaList> getSearchCriteriaList() const;
	void setSearchCriteriaList(const std::vector<SearchCriteriaList> &searchCriteriaList);
	std::string getItemName() const;
	void setItemName(const std::string &itemName);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);

private:
	std::string remark_;
	std::string uuid_;
	std::string biz_;
	long maxId_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	std::vector<SearchCriteriaList> searchCriteriaList_;
	std::string itemName_;
	int currentPage_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILREQUEST_H_
