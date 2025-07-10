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

#ifndef ALIBABACLOUD_VPC_MODEL_TRANSFORMEIPSEGMENTTOPUBLICIPADDRESSPOOLREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_TRANSFORMEIPSEGMENTTOPUBLICIPADDRESSPOOLREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT TransformEipSegmentToPublicIpAddressPoolRequest : public RpcServiceRequest {
public:
	TransformEipSegmentToPublicIpAddressPoolRequest();
	~TransformEipSegmentToPublicIpAddressPoolRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string clientToken_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string instanceId_;
	std::string name_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_TRANSFORMEIPSEGMENTTOPUBLICIPADDRESSPOOLREQUEST_H_
