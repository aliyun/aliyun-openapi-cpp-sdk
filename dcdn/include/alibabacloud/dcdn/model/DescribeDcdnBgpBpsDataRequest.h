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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNBGPBPSDATAREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNBGPBPSDATAREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnBgpBpsDataRequest : public RpcServiceRequest {
public:
	DescribeDcdnBgpBpsDataRequest();
	~DescribeDcdnBgpBpsDataRequest();
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInterval() const;
	void setInterval(const std::string &interval);
	std::string getDeviceName() const;
	void setDeviceName(const std::string &deviceName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getDevicePort() const;
	void setDevicePort(const std::string &devicePort);

private:
	std::string isp_;
	std::string endTime_;
	std::string interval_;
	std::string deviceName_;
	std::string startTime_;
	std::string devicePort_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNBGPBPSDATAREQUEST_H_
