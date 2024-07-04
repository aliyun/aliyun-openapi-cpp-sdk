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

#ifndef ALIBABACLOUD_NIS_MODEL_GETNISNETWORKMETRICSREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_GETNISNETWORKMETRICSREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT GetNisNetworkMetricsRequest : public RpcServiceRequest {
public:
	struct Dimensions {
		std::string name;
		std::string value;
	};
	GetNisNetworkMetricsRequest();
	~GetNisNetworkMetricsRequest();
	bool getUseCrossAccount() const;
	void setUseCrossAccount(bool useCrossAccount);
	std::string getScanBy() const;
	void setScanBy(const std::string &scanBy);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getRegionNo() const;
	void setRegionNo(const std::string &regionNo);
	std::vector<std::string> getAccountIds() const;
	void setAccountIds(const std::vector<std::string> &accountIds);
	std::vector<Dimensions> getDimensions() const;
	void setDimensions(const std::vector<Dimensions> &dimensions);

private:
	bool useCrossAccount_;
	std::string scanBy_;
	std::string metricName_;
	long endTime_;
	long beginTime_;
	std::string resourceType_;
	std::string regionNo_;
	std::vector<std::string> accountIds_;
	std::vector<Dimensions> dimensions_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_GETNISNETWORKMETRICSREQUEST_H_
