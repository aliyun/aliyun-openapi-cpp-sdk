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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATAREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodDomainMax95BpsDataRequest : public RpcServiceRequest {
public:
	DescribeVodDomainMax95BpsDataRequest();
	~DescribeVodDomainMax95BpsDataRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getCycle() const;
	void setCycle(const std::string &cycle);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTimePoint() const;
	void setTimePoint(const std::string &timePoint);

private:
	std::string startTime_;
	std::string cycle_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
	std::string timePoint_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATAREQUEST_H_
