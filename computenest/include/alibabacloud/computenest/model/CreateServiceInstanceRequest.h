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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_CREATESERVICEINSTANCEREQUEST_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_CREATESERVICEINSTANCEREQUEST_H_

#include <alibabacloud/computenest/ComputeNestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNest {
namespace Model {
class ALIBABACLOUD_COMPUTENEST_EXPORT CreateServiceInstanceRequest : public RpcServiceRequest {
public:
	struct Commodity {
		long payPeriod;
		bool autoPay;
		bool autoRenew;
		std::string payPeriodUnit;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct OperationMetadata {
		std::string endTime;
		std::string resources;
		std::string startTime;
		std::string extraInfo;
		std::string serviceInstanceId;
	};
	CreateServiceInstanceRequest();
	~CreateServiceInstanceRequest();
	Commodity getCommodity() const;
	void setCommodity(const Commodity &commodity);
	std::string getContactGroup() const;
	void setContactGroup(const std::string &contactGroup);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSpecificationCode() const;
	void setSpecificationCode(const std::string &specificationCode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getEnableInstanceOps() const;
	void setEnableInstanceOps(bool enableInstanceOps);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getEnableUserPrometheus() const;
	void setEnableUserPrometheus(bool enableUserPrometheus);
	std::string getSpecificationName() const;
	void setSpecificationName(const std::string &specificationName);
	std::string getTrialType() const;
	void setTrialType(const std::string &trialType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);
	OperationMetadata getOperationMetadata() const;
	void setOperationMetadata(const OperationMetadata &operationMetadata);

private:
	Commodity commodity_;
	std::string contactGroup_;
	std::string clientToken_;
	std::string specificationCode_;
	std::string resourceGroupId_;
	std::string regionId_;
	bool enableInstanceOps_;
	std::string templateName_;
	std::vector<Tag> tag_;
	bool dryRun_;
	bool enableUserPrometheus_;
	std::string specificationName_;
	std::string trialType_;
	std::string name_;
	std::string serviceVersion_;
	std::string serviceId_;
	std::string parameters_;
	OperationMetadata operationMetadata_;
};
} // namespace Model
} // namespace ComputeNest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_CREATESERVICEINSTANCEREQUEST_H_
