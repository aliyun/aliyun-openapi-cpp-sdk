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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEBACKUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEBACKUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateBackupRequest : public RpcServiceRequest
			{

			public:
				CreateBackupRequest();
				~CreateBackupRequest();

				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getMetadataType()const;
				void setMetadataType(const std::string& metadataType);
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
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string backupPlanId_;
				std::string callerBid_;
				std::string proxy_original_source_ip_;
				std::string metadataType_;
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
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEBACKUPREQUEST_H_