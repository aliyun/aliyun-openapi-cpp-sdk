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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROJECTSTEPMETRICREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROJECTSTEPMETRICREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeProjectStepMetricRequest : public RpcServiceRequest {
public:
	DescribeProjectStepMetricRequest();
	~DescribeProjectStepMetricRequest();
	std::string getMetricType() const;
	void setMetricType(const std::string &metricType);
	std::string getStepName() const;
	void setStepName(const std::string &stepName);
	std::string getAggregator() const;
	void setAggregator(const std::string &aggregator);
	int getMaxPointNum() const;
	void setMaxPointNum(int maxPointNum);
	long getEndTimestamp() const;
	void setEndTimestamp(long endTimestamp);
	long getBeginTimestamp() const;
	void setBeginTimestamp(long beginTimestamp);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);

private:
	std::string metricType_;
	std::string stepName_;
	std::string aggregator_;
	int maxPointNum_;
	long endTimestamp_;
	long beginTimestamp_;
	std::string projectId_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROJECTSTEPMETRICREQUEST_H_
