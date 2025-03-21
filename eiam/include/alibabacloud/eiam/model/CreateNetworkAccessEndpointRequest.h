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

#ifndef ALIBABACLOUD_EIAM_MODEL_CREATENETWORKACCESSENDPOINTREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_CREATENETWORKACCESSENDPOINTREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT CreateNetworkAccessEndpointRequest : public RpcServiceRequest {
public:
	CreateNetworkAccessEndpointRequest();
	~CreateNetworkAccessEndpointRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getVSwitchIds() const;
	void setVSwitchIds(const std::vector<std::string> &vSwitchIds);
	std::string getNetworkAccessEndpointName() const;
	void setNetworkAccessEndpointName(const std::string &networkAccessEndpointName);
	std::string getVpcRegionId() const;
	void setVpcRegionId(const std::string &vpcRegionId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string clientToken_;
	std::vector<std::string> vSwitchIds_;
	std::string networkAccessEndpointName_;
	std::string vpcRegionId_;
	std::string instanceId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_CREATENETWORKACCESSENDPOINTREQUEST_H_
