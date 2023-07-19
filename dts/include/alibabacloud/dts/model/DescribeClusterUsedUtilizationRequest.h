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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeClusterUsedUtilizationRequest : public RpcServiceRequest {
public:
	DescribeClusterUsedUtilizationRequest();
	~DescribeClusterUsedUtilizationRequest();
	std::string getMetricType() const;
	void setMetricType(const std::string &metricType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDedicatedClusterId() const;
	void setDedicatedClusterId(const std::string &dedicatedClusterId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getEnv() const;
	void setEnv(const std::string &env);
	std::string getOwnerID() const;
	void setOwnerID(const std::string &ownerID);

private:
	std::string metricType_;
	std::string clientToken_;
	std::string dedicatedClusterId_;
	std::string accessKeyId_;
	std::string accountId_;
	std::string regionId_;
	std::string securityToken_;
	std::string dtsJobId_;
	std::string env_;
	std::string ownerID_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTERUSEDUTILIZATIONREQUEST_H_
