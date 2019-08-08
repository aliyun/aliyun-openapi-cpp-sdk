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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceHistoryEventsRequest : public RpcServiceRequest
			{

			public:
				DescribeInstanceHistoryEventsRequest();
				~DescribeInstanceHistoryEventsRequest();

				std::vector<std::string> getEventId()const;
				void setEventId(const std::vector<std::string>& eventId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getEventCycleStatus()const;
				void setEventCycleStatus(const std::string& eventCycleStatus);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::vector<std::string> getInstanceEventCycleStatus()const;
				void setInstanceEventCycleStatus(const std::vector<std::string>& instanceEventCycleStatus);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				std::string getEventPublishTimeEnd()const;
				void setEventPublishTimeEnd(const std::string& eventPublishTimeEnd);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::vector<std::string> getInstanceEventType()const;
				void setInstanceEventType(const std::vector<std::string>& instanceEventType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getNotBeforeStart()const;
				void setNotBeforeStart(const std::string& notBeforeStart);
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
				std::string getEventPublishTimeStart()const;
				void setEventPublishTimeStart(const std::string& eventPublishTimeStart);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getNotBeforeEnd()const;
				void setNotBeforeEnd(const std::string& notBeforeEnd);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getAkProxy()const;
				void setAkProxy(const std::string& akProxy);
				std::string getEventType()const;
				void setEventType(const std::string& eventType);

            private:
				std::vector<std::string> eventId_;
				long resourceOwnerId_;
				std::string eventCycleStatus_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string sourceRegionId_;
				std::string securityToken_;
				std::string regionId_;
				bool enable_;
				std::string requestContent_;
				int pageSize_;
				std::string callerBidEmail_;
				std::vector<std::string> instanceEventCycleStatus_;
				std::string callerUidEmail_;
				std::string eventPublishTimeEnd_;
				long callerUid_;
				std::string app_ip_;
				std::vector<std::string> instanceEventType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string notBeforeStart_;
				std::string callerBid_;
				long ownerId_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string eventPublishTimeStart_;
				std::string instanceId_;
				std::string notBeforeEnd_;
				std::string requestId_;
				std::string akProxy_;
				std::string eventType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_