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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeLaunchTemplatesRequest : public RpcServiceRequest
			{

			public:
				DescribeLaunchTemplatesRequest();
				~DescribeLaunchTemplatesRequest();

				std::string getTemplateTag1Value()const;
				void setTemplateTag1Value(const std::string& templateTag1Value);
				std::vector<std::string> getLaunchTemplateName()const;
				void setLaunchTemplateName(const std::vector<std::string>& launchTemplateName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTemplateTag4Key()const;
				void setTemplateTag4Key(const std::string& templateTag4Key);
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
				std::string getTemplateTag3Key()const;
				void setTemplateTag3Key(const std::string& templateTag3Key);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTemplateTag5Value()const;
				void setTemplateTag5Value(const std::string& templateTag5Value);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getTemplateTag3Value()const;
				void setTemplateTag3Value(const std::string& templateTag3Value);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getTemplateTag2Key()const;
				void setTemplateTag2Key(const std::string& templateTag2Key);
				std::vector<std::string> getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::vector<std::string>& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTemplateResourceGroupId()const;
				void setTemplateResourceGroupId(const std::string& templateResourceGroupId);
				std::string getTemplateTag2Value()const;
				void setTemplateTag2Value(const std::string& templateTag2Value);
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
				std::string getTemplateTag4Value()const;
				void setTemplateTag4Value(const std::string& templateTag4Value);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getTemplateTag5Key()const;
				void setTemplateTag5Key(const std::string& templateTag5Key);
				std::string getTemplateTag1Key()const;
				void setTemplateTag1Key(const std::string& templateTag1Key);

            private:
				std::string templateTag1Value_;
				std::vector<std::string> launchTemplateName_;
				long resourceOwnerId_;
				std::string templateTag4Key_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string templateTag3Key_;
				std::string securityToken_;
				std::string regionId_;
				std::string templateTag5Value_;
				bool enable_;
				std::string requestContent_;
				int pageSize_;
				std::string callerBidEmail_;
				std::string templateTag3Value_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string app_ip_;
				std::string templateTag2Key_;
				std::vector<std::string> launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string templateResourceGroupId_;
				std::string templateTag2Value_;
				std::string callerBid_;
				long ownerId_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string templateTag4Value_;
				std::string requestId_;
				std::string templateTag5Key_;
				std::string templateTag1Key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_