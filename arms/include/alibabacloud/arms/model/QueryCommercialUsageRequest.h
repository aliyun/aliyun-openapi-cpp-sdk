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

#ifndef ALIBABACLOUD_ARMS_MODEL_QUERYCOMMERCIALUSAGEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_QUERYCOMMERCIALUSAGEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT QueryCommercialUsageRequest : public RpcServiceRequest {
public:
	struct AdvancedFilters {
		std::string opType;
		std::string value;
		std::string key;
	};
	QueryCommercialUsageRequest();
	~QueryCommercialUsageRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	std::vector<std::string> getMeasures() const;
	void setMeasures(const std::vector<std::string> &measures);
	int getIntervalInSec() const;
	void setIntervalInSec(int intervalInSec);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getMetric() const;
	void setMetric(const std::string &metric);
	std::vector<AdvancedFilters> getAdvancedFilters() const;
	void setAdvancedFilters(const std::vector<AdvancedFilters> &advancedFilters);
	std::vector<std::string> getDimensions() const;
	void setDimensions(const std::vector<std::string> &dimensions);

private:
	long startTime_;
	std::vector<std::string> measures_;
	int intervalInSec_;
	std::string queryType_;
	std::string order_;
	long endTime_;
	std::string orderBy_;
	std::string proxyUserId_;
	std::string metric_;
	std::vector<AdvancedFilters> advancedFilters_;
	std::vector<std::string> dimensions_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_QUERYCOMMERCIALUSAGEREQUEST_H_
