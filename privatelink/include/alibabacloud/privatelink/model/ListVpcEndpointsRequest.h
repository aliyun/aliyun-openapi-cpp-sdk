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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSREQUEST_H_

#include <alibabacloud/privatelink/PrivatelinkExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Privatelink {
namespace Model {
class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	ListVpcEndpointsRequest();
	~ListVpcEndpointsRequest();
	std::string getEndpointId() const;
	void setEndpointId(const std::string &endpointId);
	std::string getEndpointStatus() const;
	void setEndpointStatus(const std::string &endpointStatus);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getConnectionStatus() const;
	void setConnectionStatus(const std::string &connectionStatus);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getEndpointName() const;
	void setEndpointName(const std::string &endpointName);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string endpointId_;
	std::string endpointStatus_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string endpointType_;
	std::string serviceName_;
	std::vector<Tag> tag_;
	std::string connectionStatus_;
	std::string vpcId_;
	std::string endpointName_;
	int maxResults_;
};
} // namespace Model
} // namespace Privatelink
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTSREQUEST_H_
