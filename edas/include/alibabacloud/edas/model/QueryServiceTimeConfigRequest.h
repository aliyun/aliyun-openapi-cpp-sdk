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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYSERVICETIMECONFIGREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYSERVICETIMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT QueryServiceTimeConfigRequest : public RoaServiceRequest
			{

			public:
				QueryServiceTimeConfigRequest();
				~QueryServiceTimeConfigRequest();

				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getServiceVersion()const;
				void setServiceVersion(const std::string& serviceVersion);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getServiceGroup()const;
				void setServiceGroup(const std::string& serviceGroup);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string serviceType_;
				std::string appId_;
				std::string serviceVersion_;
				int pageSize_;
				std::string _namespace_;
				std::string serviceName_;
				std::string source_;
				std::string region_;
				std::string serviceGroup_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYSERVICETIMECONFIGREQUEST_H_