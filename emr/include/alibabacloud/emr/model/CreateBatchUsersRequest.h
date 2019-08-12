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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateBatchUsersRequest : public RpcServiceRequest
			{
				struct UserBaseParamList
				{
					std::string aliyunUserId;
					std::string userName;
					std::string userType;
					std::string isSuperAdmin;
				};

			public:
				CreateBatchUsersRequest();
				~CreateBatchUsersRequest();

				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<UserBaseParamList> getUserBaseParamList()const;
				void setUserBaseParamList(const std::vector<UserBaseParamList>& userBaseParamList);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::vector<long> getRoleId()const;
				void setRoleId(const std::vector<long>& roleId);
				std::vector<long> getGroupId()const;
				void setGroupId(const std::vector<long>& groupId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				long getCallerUid()const;
				void setCallerUid(long callerUid);

            private:
				std::string app_ip_;
				long resourceOwnerId_;
				std::vector<UserBaseParamList> userBaseParamList_;
				long callerParentId_;
				std::vector<long> roleId_;
				std::vector<long> groupId_;
				bool proxy_original_security_transport_;
				std::string description_;
				std::string callerBid_;
				std::string proxy_original_source_ip_;
				bool ak_mfa_present_;
				bool proxy_trust_transport_info_;
				std::string callerType_;
				std::string accessKeyId_;
				bool security_transport_;
				std::string securityToken_;
				std::string regionId_;
				std::string requestId_;
				long callerUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_