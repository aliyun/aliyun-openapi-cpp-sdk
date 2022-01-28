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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNBANDWIDTHDATAREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNBANDWIDTHDATAREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeEpnBandWidthDataRequest : public RpcServiceRequest {
public:
	DescribeEpnBandWidthDataRequest();
	~DescribeEpnBandWidthDataRequest();
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getEPNInstanceId() const;
	void setEPNInstanceId(const std::string &ePNInstanceId);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNetworkingModel() const;
	void setNetworkingModel(const std::string &networkingModel);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);

private:
	std::string isp_;
	std::string startTime_;
	std::string ensRegionId_;
	std::string ePNInstanceId_;
	std::string period_;
	std::string instanceId_;
	std::string networkingModel_;
	std::string endTime_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNBANDWIDTHDATAREQUEST_H_
