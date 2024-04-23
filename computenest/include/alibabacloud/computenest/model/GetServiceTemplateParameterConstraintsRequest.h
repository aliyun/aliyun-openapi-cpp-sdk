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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_H_

#include <alibabacloud/computenest/ComputeNestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNest {
namespace Model {
class ALIBABACLOUD_COMPUTENEST_EXPORT GetServiceTemplateParameterConstraintsRequest : public RpcServiceRequest {
public:
	struct Parameters {
		std::string parameterValue;
		std::string parameterKey;
	};
	GetServiceTemplateParameterConstraintsRequest();
	~GetServiceTemplateParameterConstraintsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getEnablePrivateVpcConnection() const;
	void setEnablePrivateVpcConnection(bool enablePrivateVpcConnection);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getServiceInstanceId() const;
	void setServiceInstanceId(const std::string &serviceInstanceId);
	std::string getDeployRegionId() const;
	void setDeployRegionId(const std::string &deployRegionId);
	std::string getSpecificationName() const;
	void setSpecificationName(const std::string &specificationName);
	std::string getTrialType() const;
	void setTrialType(const std::string &trialType);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);
	std::vector<Parameters> getParameters() const;
	void setParameters(const std::vector<Parameters> &parameters);

private:
	std::string clientToken_;
	bool enablePrivateVpcConnection_;
	std::string regionId_;
	std::string templateName_;
	std::string serviceInstanceId_;
	std::string deployRegionId_;
	std::string specificationName_;
	std::string trialType_;
	std::string serviceVersion_;
	std::string serviceId_;
	std::vector<Parameters> parameters_;
};
} // namespace Model
} // namespace ComputeNest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_H_
