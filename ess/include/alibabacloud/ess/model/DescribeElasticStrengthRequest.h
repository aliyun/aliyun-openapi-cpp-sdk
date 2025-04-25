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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribeElasticStrengthRequest : public RpcServiceRequest {
public:
	DescribeElasticStrengthRequest();
	~DescribeElasticStrengthRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::vector<std::string> getDataDiskCategories() const;
	void setDataDiskCategories(const std::vector<std::string> &dataDiskCategories);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::vector<std::string> getVSwitchIds() const;
	void setVSwitchIds(const std::vector<std::string> &vSwitchIds);
	std::vector<std::string> getInstanceTypes() const;
	void setInstanceTypes(const std::vector<std::string> &instanceTypes);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::vector<std::string> getScalingGroupIds() const;
	void setScalingGroupIds(const std::vector<std::string> &scalingGroupIds);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	std::vector<std::string> getSystemDiskCategories() const;
	void setSystemDiskCategories(const std::vector<std::string> &systemDiskCategories);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getPriorityStrategy() const;
	void setPriorityStrategy(const std::string &priorityStrategy);
	std::string getImageFamily() const;
	void setImageFamily(const std::string &imageFamily);

private:
	std::string imageId_;
	std::vector<std::string> dataDiskCategories_;
	std::string scalingGroupId_;
	std::vector<std::string> vSwitchIds_;
	std::vector<std::string> instanceTypes_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string imageName_;
	std::vector<std::string> scalingGroupIds_;
	int ipv6AddressCount_;
	std::vector<std::string> systemDiskCategories_;
	std::string spotStrategy_;
	std::string priorityStrategy_;
	std::string imageFamily_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHREQUEST_H_
