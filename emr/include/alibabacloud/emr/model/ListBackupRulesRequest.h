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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTBACKUPRULESREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTBACKUPRULESREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListBackupRulesRequest : public RpcServiceRequest
			{

			public:
				ListBackupRulesRequest();
				~ListBackupRulesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageCount()const;
				void setPageCount(int pageCount);
				std::string getOrderMode()const;
				void setOrderMode(const std::string& orderMode);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getLimit()const;
				void setLimit(int limit);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getId()const;
				void setId(long id);
				int getCurrentSize()const;
				void setCurrentSize(int currentSize);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getOrderField()const;
				void setOrderField(const std::string& orderField);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				int pageCount_;
				std::string orderMode_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string backupPlanId_;
				std::string proxy_original_source_ip_;
				std::string callerType_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				int limit_;
				int pageSize_;
				long id_;
				int currentSize_;
				long callerUid_;
				std::string orderField_;
				std::string app_ip_;
				std::string callerBid_;
				bool ak_mfa_present_;
				bool proxy_trust_transport_info_;
				bool security_transport_;
				std::string requestId_;
				std::string bizId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTBACKUPRULESREQUEST_H_