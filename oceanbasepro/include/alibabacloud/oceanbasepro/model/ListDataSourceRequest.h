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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTDATASOURCEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTDATASOURCEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ListDataSourceRequest : public RpcServiceRequest {
public:
	ListDataSourceRequest();
	~ListDataSourceRequest();
	std::vector<std::string> getTypes() const;
	void setTypes(const std::vector<std::string> &types);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	std::vector<std::string> types_;
	std::string searchKey_;
	std::string pageNumber_;
	std::string pageSize_;
	std::string sortField_;
	std::string order_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTDATASOURCEREQUEST_H_
