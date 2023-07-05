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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_

#include <alibabacloud/privatelink/PrivatelinkExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Privatelink {
namespace Model {
class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointServicesByEndUserRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	ListVpcEndpointServicesByEndUserRequest();
	~ListVpcEndpointServicesByEndUserRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);

private:
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string serviceName_;
	std::vector<Tag> tag_;
	std::string serviceType_;
	int maxResults_;
	std::string serviceId_;
};
} // namespace Model
} // namespace Privatelink
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSERVICESBYENDUSERREQUEST_H_
