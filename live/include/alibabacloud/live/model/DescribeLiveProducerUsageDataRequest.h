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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPRODUCERUSAGEDATAREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPRODUCERUSAGEDATAREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveProducerUsageDataRequest : public RpcServiceRequest {
public:
	DescribeLiveProducerUsageDataRequest();
	~DescribeLiveProducerUsageDataRequest();
	std::string getInstance() const;
	void setInstance(const std::string &instance);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getSplitBy() const;
	void setSplitBy(const std::string &splitBy);
	std::string getApp() const;
	void setApp(const std::string &app);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInterval() const;
	void setInterval(const std::string &interval);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string instance_;
	std::string startTime_;
	std::string type_;
	std::string splitBy_;
	std::string app_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
	std::string interval_;
	std::string region_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPRODUCERUSAGEDATAREQUEST_H_
