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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTSYNTHETICDETAILREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTSYNTHETICDETAILREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListSyntheticDetailRequest : public RpcServiceRequest {
public:
	struct ExactFilters {
		std::string opType;
		ObjectOfAny value;
		std::string key;
	};
	struct AdvancedFilters {
		std::string opType;
		ObjectOfAny value;
		std::string key;
	};
	ListSyntheticDetailRequest();
	~ListSyntheticDetailRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::map<std::string, std::string> getFilters() const;
	void setFilters(const std::map<std::string, std::string> &filters);
	std::vector<ExactFilters> getExactFilters() const;
	void setExactFilters(const std::vector<ExactFilters> &exactFilters);
	int getSyntheticType() const;
	void setSyntheticType(int syntheticType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<AdvancedFilters> getAdvancedFilters() const;
	void setAdvancedFilters(const std::vector<AdvancedFilters> &advancedFilters);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDetail() const;
	void setDetail(const std::string &detail);
	int getPage() const;
	void setPage(int page);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	long endTime_;
	std::string orderBy_;
	long startTime_;
	std::map<std::string, std::string> filters_;
	std::vector<ExactFilters> exactFilters_;
	int syntheticType_;
	std::string regionId_;
	std::vector<AdvancedFilters> advancedFilters_;
	int pageSize_;
	std::string detail_;
	int page_;
	std::string category_;
	std::string order_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTSYNTHETICDETAILREQUEST_H_
