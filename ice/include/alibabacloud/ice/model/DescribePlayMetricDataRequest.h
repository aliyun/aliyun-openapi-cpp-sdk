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

#ifndef ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYMETRICDATAREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYMETRICDATAREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT DescribePlayMetricDataRequest : public RpcServiceRequest {
public:
	DescribePlayMetricDataRequest();
	~DescribePlayMetricDataRequest();
	std::string getMetricType() const;
	void setMetricType(const std::string &metricType);
	std::string getNetwork() const;
	void setNetwork(const std::string &network);
	std::string getSdkVersion() const;
	void setSdkVersion(const std::string &sdkVersion);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	long getEndTs() const;
	void setEndTs(long endTs);
	std::string getDefinition() const;
	void setDefinition(const std::string &definition);
	std::string getItemConfigs() const;
	void setItemConfigs(const std::string &itemConfigs);
	std::string getOs() const;
	void setOs(const std::string &os);
	long getBeginTs() const;
	void setBeginTs(long beginTs);
	std::string getExperienceLevel() const;
	void setExperienceLevel(const std::string &experienceLevel);
	std::string getTerminalType() const;
	void setTerminalType(const std::string &terminalType);

private:
	std::string metricType_;
	std::string network_;
	std::string sdkVersion_;
	std::string appName_;
	long endTs_;
	std::string definition_;
	std::string itemConfigs_;
	std::string os_;
	long beginTs_;
	std::string experienceLevel_;
	std::string terminalType_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYMETRICDATAREQUEST_H_
