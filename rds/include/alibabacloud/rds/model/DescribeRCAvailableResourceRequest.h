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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCAVAILABLERESOURCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCAVAILABLERESOURCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCAvailableResourceRequest : public RpcServiceRequest {
public:
	DescribeRCAvailableResourceRequest();
	~DescribeRCAvailableResourceRequest();
	float getMemory() const;
	void setMemory(float memory);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getDataDiskCategory() const;
	void setDataDiskCategory(const std::string &dataDiskCategory);
	int getCores() const;
	void setCores(int cores);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getNetworkCategory() const;
	void setNetworkCategory(const std::string &networkCategory);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getDestinationResource() const;
	void setDestinationResource(const std::string &destinationResource);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	float memory_;
	std::string ioOptimized_;
	std::string dataDiskCategory_;
	int cores_;
	std::string regionId_;
	std::string systemDiskCategory_;
	std::string scope_;
	std::string instanceType_;
	std::string networkCategory_;
	std::string instanceChargeType_;
	std::string dedicatedHostId_;
	int spotDuration_;
	std::string resourceType_;
	std::string spotStrategy_;
	std::string destinationResource_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCAVAILABLERESOURCEREQUEST_H_
