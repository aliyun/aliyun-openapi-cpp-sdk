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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATECLUSTERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateClusterRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateClusterRequest();
	~CreateClusterRequest();
	std::string getClusterSpecification() const;
	void setClusterSpecification(const std::string &clusterSpecification);
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getClusterType() const;
	void setClusterType(const std::string &clusterType);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getNetType() const;
	void setNetType(const std::string &netType);
	std::string getMseVersion() const;
	void setMseVersion(const std::string &mseVersion);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getPubSlbSpecification() const;
	void setPubSlbSpecification(const std::string &pubSlbSpecification);
	std::string getPrivateSlbSpecification() const;
	void setPrivateSlbSpecification(const std::string &privateSlbSpecification);
	int getInstanceCount() const;
	void setInstanceCount(int instanceCount);
	std::string getConnectionType() const;
	void setConnectionType(const std::string &connectionType);
	std::string getClusterVersion() const;
	void setClusterVersion(const std::string &clusterVersion);
	int getDiskCapacity() const;
	void setDiskCapacity(int diskCapacity);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	std::string getPubNetworkFlow() const;
	void setPubNetworkFlow(const std::string &pubNetworkFlow);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	std::string clusterSpecification_;
	std::string mseSessionId_;
	std::string resourceGroupId_;
	std::string requestPars_;
	std::vector<Tag> tag_;
	std::string vSwitchId_;
	std::string clusterType_;
	std::string instanceName_;
	std::string netType_;
	std::string mseVersion_;
	std::string region_;
	std::string pubSlbSpecification_;
	std::string privateSlbSpecification_;
	int instanceCount_;
	std::string connectionType_;
	std::string clusterVersion_;
	int diskCapacity_;
	std::string diskType_;
	std::string pubNetworkFlow_;
	std::string vpcId_;
	std::string acceptLanguage_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATECLUSTERREQUEST_H_
