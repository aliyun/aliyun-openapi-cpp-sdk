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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEMETRICSDATAREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEMETRICSDATAREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeMetricsDataRequest : public RpcServiceRequest {
public:
	DescribeMetricsDataRequest();
	~DescribeMetricsDataRequest();
	std::string getGroupByLabels() const;
	void setGroupByLabels(const std::string &groupByLabels);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getLimit() const;
	void setLimit(const std::string &limit);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getSortMetricKey() const;
	void setSortMetricKey(const std::string &sortMetricKey);
	std::string getReplicaType() const;
	void setReplicaType(const std::string &replicaType);
	std::string getMetricScope() const;
	void setMetricScope(const std::string &metricScope);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getMetrics() const;
	void setMetrics(const std::string &metrics);

private:
	std::string groupByLabels_;
	std::string startTime_;
	std::string limit_;
	std::string sortOrder_;
	std::string sortMetricKey_;
	std::string replicaType_;
	std::string metricScope_;
	std::string endTime_;
	std::string labels_;
	std::string instanceId_;
	std::string metrics_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEMETRICSDATAREQUEST_H_
