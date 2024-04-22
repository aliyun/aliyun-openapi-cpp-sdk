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

#ifndef ALIBABACLOUD_SAE_MODEL_GETARMSTOPNMETRICREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_GETARMSTOPNMETRICREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT GetArmsTopNMetricRequest : public RoaServiceRequest {
public:
	GetArmsTopNMetricRequest();
	~GetArmsTopNMetricRequest();
	std::string getAppSource() const;
	void setAppSource(const std::string &appSource);
	std::string getCpuStrategy() const;
	void setCpuStrategy(const std::string &cpuStrategy);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getLimit() const;
	void setLimit(long limit);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);

private:
	std::string appSource_;
	std::string cpuStrategy_;
	std::string regionId_;
	long limit_;
	std::string orderBy_;
	long endTime_;
	long startTime_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_GETARMSTOPNMETRICREQUEST_H_
