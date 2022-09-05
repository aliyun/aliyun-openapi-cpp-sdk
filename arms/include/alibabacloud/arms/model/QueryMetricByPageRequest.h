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

#ifndef ALIBABACLOUD_ARMS_MODEL_QUERYMETRICBYPAGEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_QUERYMETRICBYPAGEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT QueryMetricByPageRequest : public RpcServiceRequest {
public:
	struct Filters {
		std::string value;
		std::string key;
	};
	QueryMetricByPageRequest();
	~QueryMetricByPageRequest();
	std::string getConsistencyQueryStrategy() const;
	void setConsistencyQueryStrategy(const std::string &consistencyQueryStrategy);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getConsistencyDataKey() const;
	void setConsistencyDataKey(const std::string &consistencyDataKey);
	std::vector<Filters> getFilters() const;
	void setFilters(const std::vector<Filters> &filters);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::vector<std::string> getMeasures() const;
	void setMeasures(const std::vector<std::string> &measures);
	int getIntervalInSec() const;
	void setIntervalInSec(int intervalInSec);
	std::string getMetric() const;
	void setMetric(const std::string &metric);
	std::vector<std::string> getCustomFilters() const;
	void setCustomFilters(const std::vector<std::string> &customFilters);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::vector<std::string> getDimensions() const;
	void setDimensions(const std::vector<std::string> &dimensions);

private:
	std::string consistencyQueryStrategy_;
	long endTime_;
	std::string orderBy_;
	int currentPage_;
	long startTime_;
	std::string consistencyDataKey_;
	std::vector<Filters> filters_;
	std::string proxyUserId_;
	std::vector<std::string> measures_;
	int intervalInSec_;
	std::string metric_;
	std::vector<std::string> customFilters_;
	int pageSize_;
	std::string order_;
	std::vector<std::string> dimensions_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_QUERYMETRICBYPAGEREQUEST_H_
