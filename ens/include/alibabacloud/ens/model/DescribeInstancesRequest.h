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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeInstancesRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	DescribeInstancesRequest();
	~DescribeInstancesRequest();
	std::vector<std::string> getServiceStatus() const;
	void setServiceStatus(const std::vector<std::string> &serviceStatus);
	std::string getOrderByParams() const;
	void setOrderByParams(const std::string &orderByParams);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getInstanceResourceType() const;
	void setInstanceResourceType(const std::string &instanceResourceType);
	std::string getEnsServiceId() const;
	void setEnsServiceId(const std::string &ensServiceId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getIntranetIp() const;
	void setIntranetIp(const std::string &intranetIp);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getEnsRegionIds() const;
	void setEnsRegionIds(const std::string &ensRegionIds);

private:
	std::vector<std::string> serviceStatus_;
	std::string orderByParams_;
	std::string ensRegionId_;
	std::string instanceResourceType_;
	std::string ensServiceId_;
	std::vector<Tags> tags_;
	std::string vSwitchId_;
	std::string instanceId_;
	std::string instanceName_;
	std::string instanceIds_;
	std::string networkId_;
	std::string status_;
	std::string intranetIp_;
	std::string imageId_;
	std::string securityGroupId_;
	std::string searchKey_;
	int pageNumber_;
	std::string pageSize_;
	std::string instanceType_;
	std::string ensRegionIds_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESREQUEST_H_
