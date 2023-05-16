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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEESTIMATECOSTREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEESTIMATECOSTREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT GetServiceEstimateCostRequest : public RpcServiceRequest {
public:
	GetServiceEstimateCostRequest();
	~GetServiceEstimateCostRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);
	std::string getServiceInstanceId() const;
	void setServiceInstanceId(const std::string &serviceInstanceId);

private:
	std::string clientToken_;
	std::string regionId_;
	std::string serviceVersion_;
	std::string templateName_;
	std::string serviceId_;
	std::string parameters_;
	std::string serviceInstanceId_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETSERVICEESTIMATECOSTREQUEST_H_
