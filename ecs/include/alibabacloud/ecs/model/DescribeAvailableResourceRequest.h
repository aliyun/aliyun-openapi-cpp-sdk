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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeAvailableResourceRequest : public RpcServiceRequest
			{

			public:
				DescribeAvailableResourceRequest();
				~DescribeAvailableResourceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				float getMemory()const;
				void setMemory(float memory);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getDataDiskCategory()const;
				void setDataDiskCategory(const std::string& dataDiskCategory);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				int getCores()const;
				void setCores(int cores);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getScope()const;
				void setScope(const std::string& scope);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getNetworkCategory()const;
				void setNetworkCategory(const std::string& networkCategory);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDedicatedHostId()const;
				void setDedicatedHostId(const std::string& dedicatedHostId);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getDestinationResource()const;
				void setDestinationResource(const std::string& destinationResource);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				long resourceOwnerId_;
				float memory_;
				long callerParentId_;
				std::string ioOptimized_;
				bool proxy_original_security_transport_;
				std::string dataDiskCategory_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string accessKeyId_;
				std::string sourceRegionId_;
				int cores_;
				std::string securityToken_;
				std::string regionId_;
				bool enable_;
				std::string requestContent_;
				std::string systemDiskCategory_;
				std::string scope_;
				std::string callerBidEmail_;
				std::string instanceType_;
				std::string networkCategory_;
				std::string instanceChargeType_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string app_ip_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string dedicatedHostId_;
				std::string callerBid_;
				long ownerId_;
				std::string resourceType_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string spotStrategy_;
				std::string destinationResource_;
				std::string requestId_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_