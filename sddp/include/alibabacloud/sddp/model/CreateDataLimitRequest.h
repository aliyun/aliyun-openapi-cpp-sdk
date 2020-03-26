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

#ifndef ALIBABACLOUD_SDDP_MODEL_CREATEDATALIMITREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_CREATEDATALIMITREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT CreateDataLimitRequest : public RpcServiceRequest
			{

			public:
				CreateDataLimitRequest();
				~CreateDataLimitRequest();

				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				bool getBatchCreate()const;
				void setBatchCreate(bool batchCreate);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getDataLimitList()const;
				void setDataLimitList(const std::string& dataLimitList);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getServiceRegionId()const;
				void setServiceRegionId(const std::string& serviceRegionId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);
				int getAuditStatus()const;
				void setAuditStatus(int auditStatus);
				int getAutoScan()const;
				void setAutoScan(int autoScan);
				int getLogStoreDay()const;
				void setLogStoreDay(int logStoreDay);
				int getResourceType()const;
				void setResourceType(int resourceType);
				std::string getConnector()const;
				void setConnector(const std::string& connector);
				int getPort()const;
				void setPort(int port);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string parentId_;
				std::string password_;
				bool batchCreate_;
				std::string sourceIp_;
				std::string dataLimitList_;
				std::string lang_;
				std::string serviceRegionId_;
				std::string engineType_;
				int auditStatus_;
				int autoScan_;
				int logStoreDay_;
				int resourceType_;
				std::string connector_;
				int port_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_CREATEDATALIMITREQUEST_H_