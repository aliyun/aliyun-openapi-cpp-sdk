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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_ADDIMAGEREQUEST_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_ADDIMAGEREQUEST_H_

#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EhpcInstant {
namespace Model {
class ALIBABACLOUD_EHPCINSTANT_EXPORT AddImageRequest : public RpcServiceRequest {
public:
	struct ContainerImageSpec {
		bool isACREnterprise;
		std::string registryUrl;
		struct RegistryCredential {
			std::string server;
			std::string password;
			std::string userName;
		};
		RegistryCredential registryCredential;
		std::string registryCriId;
		bool isACRRegistry;
	};
	struct VMImageSpec {
		std::string imageId;
	};
	AddImageRequest();
	~AddImageRequest();
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getImageVersion() const;
	void setImageVersion(const std::string &imageVersion);
	ContainerImageSpec getContainerImageSpec() const;
	void setContainerImageSpec(const ContainerImageSpec &containerImageSpec);
	VMImageSpec getVMImageSpec() const;
	void setVMImageSpec(const VMImageSpec &vMImageSpec);

private:
	std::string imageType_;
	std::string description_;
	std::string name_;
	std::string imageVersion_;
	ContainerImageSpec containerImageSpec_;
	VMImageSpec vMImageSpec_;
};
} // namespace Model
} // namespace EhpcInstant
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_ADDIMAGEREQUEST_H_
