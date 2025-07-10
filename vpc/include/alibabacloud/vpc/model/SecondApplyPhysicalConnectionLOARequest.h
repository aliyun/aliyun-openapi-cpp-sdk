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

#ifndef ALIBABACLOUD_VPC_MODEL_SECONDAPPLYPHYSICALCONNECTIONLOAREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_SECONDAPPLYPHYSICALCONNECTIONLOAREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT SecondApplyPhysicalConnectionLOARequest : public RpcServiceRequest {
public:
	struct PMInfo {
		std::string pMCertificateNo;
		std::string pMName;
		std::string pMCertificateType;
		std::string pMGender;
		std::string pMContactInfo;
	};
	SecondApplyPhysicalConnectionLOARequest();
	~SecondApplyPhysicalConnectionLOARequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getLineType() const;
	void setLineType(const std::string &lineType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSi() const;
	void setSi(const std::string &si);
	std::string getPeerLocation() const;
	void setPeerLocation(const std::string &peerLocation);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getConstructionTime() const;
	void setConstructionTime(const std::string &constructionTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCompanyName() const;
	void setCompanyName(const std::string &companyName);
	std::vector<PMInfo> getPMInfo() const;
	void setPMInfo(const std::vector<PMInfo> &pMInfo);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string lineType_;
	std::string regionId_;
	std::string si_;
	std::string peerLocation_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string ownerAccount_;
	std::string constructionTime_;
	long ownerId_;
	std::string instanceId_;
	std::string companyName_;
	std::vector<PMInfo> pMInfo_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_SECONDAPPLYPHYSICALCONNECTIONLOAREQUEST_H_
