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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSpotPriceHistoryRequest : public RpcServiceRequest {
public:
	DescribeSpotPriceHistoryRequest();
	~DescribeSpotPriceHistoryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	int getOffset() const;
	void setOffset(int offset);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOSType() const;
	void setOSType(const std::string &oSType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string ioOptimized_;
	std::string networkType_;
	std::string startTime_;
	std::string regionId_;
	std::string instanceType_;
	int offset_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	std::string oSType_;
	long ownerId_;
	int spotDuration_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYREQUEST_H_
