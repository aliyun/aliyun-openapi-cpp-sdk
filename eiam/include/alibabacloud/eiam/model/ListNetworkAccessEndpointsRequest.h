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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTNETWORKACCESSENDPOINTSREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTNETWORKACCESSENDPOINTSREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT ListNetworkAccessEndpointsRequest : public RpcServiceRequest {
public:
	ListNetworkAccessEndpointsRequest();
	~ListNetworkAccessEndpointsRequest();
	std::string getNetworkAccessEndpointType() const;
	void setNetworkAccessEndpointType(const std::string &networkAccessEndpointType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getVpcRegionId() const;
	void setVpcRegionId(const std::string &vpcRegionId);
	std::string getNetworkAccessEndpointStatus() const;
	void setNetworkAccessEndpointStatus(const std::string &networkAccessEndpointStatus);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	std::string networkAccessEndpointType_;
	std::string nextToken_;
	std::string vpcRegionId_;
	std::string networkAccessEndpointStatus_;
	std::string instanceId_;
	std::string vpcId_;
	long maxResults_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTNETWORKACCESSENDPOINTSREQUEST_H_
