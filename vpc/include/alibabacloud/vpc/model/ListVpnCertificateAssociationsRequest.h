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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVPNCERTIFICATEASSOCIATIONSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVPNCERTIFICATEASSOCIATIONSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListVpnCertificateAssociationsRequest : public RpcServiceRequest {
public:
	ListVpnCertificateAssociationsRequest();
	~ListVpnCertificateAssociationsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getCertificateId() const;
	void setCertificateId(const std::vector<std::string> &certificateId);
	std::vector<std::string> getVpnGatewayId() const;
	void setVpnGatewayId(const std::vector<std::string> &vpnGatewayId);
	std::string getCallerBid() const;
	void setCallerBid(const std::string &callerBid);
	std::string getCertificateType() const;
	void setCertificateType(const std::string &certificateType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	std::vector<std::string> certificateId_;
	std::vector<std::string> vpnGatewayId_;
	std::string callerBid_;
	std::string certificateType_;
	std::string regionId_;
	std::string nextToken_;
	int maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVPNCERTIFICATEASSOCIATIONSREQUEST_H_
