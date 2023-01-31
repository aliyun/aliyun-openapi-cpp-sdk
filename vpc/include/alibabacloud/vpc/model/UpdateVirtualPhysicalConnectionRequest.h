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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATEVIRTUALPHYSICALCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATEVIRTUALPHYSICALCONNECTIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateVirtualPhysicalConnectionRequest : public RpcServiceRequest {
public:
	UpdateVirtualPhysicalConnectionRequest();
	~UpdateVirtualPhysicalConnectionRequest();
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getVlanId() const;
	void setVlanId(long vlanId);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getExpectSpec() const;
	void setExpectSpec(const std::string &expectSpec);

private:
	bool dryRun_;
	long vlanId_;
	std::string token_;
	std::string instanceId_;
	std::string regionId_;
	std::string expectSpec_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATEVIRTUALPHYSICALCONNECTIONREQUEST_H_
