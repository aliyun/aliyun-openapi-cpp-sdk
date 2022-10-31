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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBERTSNATIVESDKPLAYTIMEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBERTSNATIVESDKPLAYTIMEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeRTSNativeSDKPlayTimeRequest : public RpcServiceRequest {
public:
	DescribeRTSNativeSDKPlayTimeRequest();
	~DescribeRTSNativeSDKPlayTimeRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::vector<std::string> getDomainNameList() const;
	void setDomainNameList(const std::vector<std::string> &domainNameList);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getDataInterval() const;
	void setDataInterval(const std::string &dataInterval);

private:
	std::string endTime_;
	std::vector<std::string> domainNameList_;
	std::string startTime_;
	std::string dataInterval_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBERTSNATIVESDKPLAYTIMEREQUEST_H_
