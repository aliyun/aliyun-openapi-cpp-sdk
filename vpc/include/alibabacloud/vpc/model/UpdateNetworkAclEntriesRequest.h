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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT UpdateNetworkAclEntriesRequest : public RpcServiceRequest
			{
				struct EgressAclEntries
				{
					std::string networkAclEntryName;
					std::string networkAclEntryId;
					std::string policy;
					std::string protocol;
					std::string destinationCidrIp;
					std::string port;
					std::string entryType;
					std::string description;
				};
				struct IngressAclEntries
				{
					std::string networkAclEntryName;
					std::string networkAclEntryId;
					std::string policy;
					std::string protocol;
					std::string sourceCidrIp;
					std::string port;
					std::string entryType;
					std::string description;
				};

			public:
				UpdateNetworkAclEntriesRequest();
				~UpdateNetworkAclEntriesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<EgressAclEntries> getEgressAclEntries()const;
				void setEgressAclEntries(const std::vector<EgressAclEntries>& egressAclEntries);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getNetworkAclId()const;
				void setNetworkAclId(const std::string& networkAclId);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				bool getUpdateIngressAclEntries()const;
				void setUpdateIngressAclEntries(bool updateIngressAclEntries);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getUpdateEgressAclEntries()const;
				void setUpdateEgressAclEntries(bool updateEgressAclEntries);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::vector<IngressAclEntries> getIngressAclEntries()const;
				void setIngressAclEntries(const std::vector<IngressAclEntries>& ingressAclEntries);

            private:
				long resourceOwnerId_;
				std::vector<EgressAclEntries> egressAclEntries_;
				std::string clientToken_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string proxy_original_source_ip_;
				std::string callerType_;
				std::string ownerIdLoginEmail_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string securityToken_;
				bool enable_;
				std::string requestContent_;
				std::string callerBidEmail_;
				std::string networkAclId_;
				std::string callerUidEmail_;
				bool updateIngressAclEntries_;
				long callerUid_;
				std::string app_ip_;
				std::string resourceOwnerAccount_;
				bool updateEgressAclEntries_;
				std::string callerBid_;
				long ownerId_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string requestId_;
				std::vector<IngressAclEntries> ingressAclEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_