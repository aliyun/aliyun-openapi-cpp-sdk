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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_

#include <alibabacloud/privatelink/PrivatelinkExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Privatelink {
namespace Model {
class ALIBABACLOUD_PRIVATELINK_EXPORT CreateVpcEndpointServiceRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct Resource {
		std::string resourceType;
		std::string resourceId;
		std::string zoneId;
	};
	CreateVpcEndpointServiceRequest();
	~CreateVpcEndpointServiceRequest();
	bool getPrivateServiceDomainEnabled() const;
	void setPrivateServiceDomainEnabled(bool privateServiceDomainEnabled);
	std::string getPrivateServiceDomain() const;
	void setPrivateServiceDomain(const std::string &privateServiceDomain);
	bool getAutoAcceptEnabled() const;
	void setAutoAcceptEnabled(bool autoAcceptEnabled);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getPayer() const;
	void setPayer(const std::string &payer);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getZoneAffinityEnabled() const;
	void setZoneAffinityEnabled(bool zoneAffinityEnabled);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::vector<Resource> getResource() const;
	void setResource(const std::vector<Resource> &resource);
	std::string getServiceResourceType() const;
	void setServiceResourceType(const std::string &serviceResourceType);
	bool getServiceSupportIPv6() const;
	void setServiceSupportIPv6(bool serviceSupportIPv6);
	std::string getServiceDescription() const;
	void setServiceDescription(const std::string &serviceDescription);

private:
	bool privateServiceDomainEnabled_;
	std::string privateServiceDomain_;
	bool autoAcceptEnabled_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::string payer_;
	std::string resourceGroupId_;
	std::string regionId_;
	bool zoneAffinityEnabled_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::vector<Resource> resource_;
	std::string serviceResourceType_;
	bool serviceSupportIPv6_;
	std::string serviceDescription_;
};
} // namespace Model
} // namespace Privatelink
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
