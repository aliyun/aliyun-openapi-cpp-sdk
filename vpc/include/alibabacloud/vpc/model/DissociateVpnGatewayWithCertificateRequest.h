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

#ifndef ALIBABACLOUD_VPC_MODEL_DISSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DISSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DissociateVpnGatewayWithCertificateRequest : public RpcServiceRequest {
public:
	DissociateVpnGatewayWithCertificateRequest();
	~DissociateVpnGatewayWithCertificateRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCertificateId() const;
	void setCertificateId(const std::string &certificateId);
	std::string getVpnGatewayId() const;
	void setVpnGatewayId(const std::string &vpnGatewayId);
	std::string getCallerBid() const;
	void setCallerBid(const std::string &callerBid);
	std::string getCertificateType() const;
	void setCertificateType(const std::string &certificateType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	long resourceOwnerId_;
	bool dryRun_;
	std::string clientToken_;
	std::string certificateId_;
	std::string vpnGatewayId_;
	std::string callerBid_;
	std::string certificateType_;
	std::string regionId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DISSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_H_
