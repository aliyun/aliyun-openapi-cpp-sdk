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

#ifndef ALIBABACLOUD_MSE_MODEL_SCALINGCLUSTERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_SCALINGCLUSTERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ScalingClusterRequest : public RpcServiceRequest {
public:
	ScalingClusterRequest();
	~ScalingClusterRequest();
	std::string getClusterSpecification() const;
	void setClusterSpecification(const std::string &clusterSpecification);
	int getCpu() const;
	void setCpu(int cpu);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getMemoryCapacity() const;
	void setMemoryCapacity(long memoryCapacity);
	int getInstanceCount() const;
	void setInstanceCount(int instanceCount);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string clusterSpecification_;
	int cpu_;
	std::string clusterId_;
	std::string instanceId_;
	long memoryCapacity_;
	int instanceCount_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_SCALINGCLUSTERREQUEST_H_
