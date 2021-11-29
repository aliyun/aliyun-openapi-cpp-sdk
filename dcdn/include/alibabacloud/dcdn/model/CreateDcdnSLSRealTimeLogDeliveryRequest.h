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

#ifndef ALIBABACLOUD_DCDN_MODEL_CREATEDCDNSLSREALTIMELOGDELIVERYREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_CREATEDCDNSLSREALTIMELOGDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT CreateDcdnSLSRealTimeLogDeliveryRequest : public RpcServiceRequest
			{

			public:
				CreateDcdnSLSRealTimeLogDeliveryRequest();
				~CreateDcdnSLSRealTimeLogDeliveryRequest();

				std::string getSLSLogStore()const;
				void setSLSLogStore(const std::string& sLSLogStore);
				std::string getSLSProject()const;
				void setSLSProject(const std::string& sLSProject);
				std::string getBusinessType()const;
				void setBusinessType(const std::string& businessType);
				std::string getSLSRegion()const;
				void setSLSRegion(const std::string& sLSRegion);
				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getSamplingRate()const;
				void setSamplingRate(const std::string& samplingRate);
				std::string getDataCenter()const;
				void setDataCenter(const std::string& dataCenter);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string sLSLogStore_;
				std::string sLSProject_;
				std::string businessType_;
				std::string sLSRegion_;
				std::string projectName_;
				std::string domainName_;
				std::string samplingRate_;
				std::string dataCenter_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_CREATEDCDNSLSREALTIMELOGDELIVERYREQUEST_H_