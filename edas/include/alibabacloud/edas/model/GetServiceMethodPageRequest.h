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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETSERVICEMETHODPAGEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_GETSERVICEMETHODPAGEREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT GetServiceMethodPageRequest : public RoaServiceRequest
			{

			public:
				GetServiceMethodPageRequest();
				~GetServiceMethodPageRequest();

				std::string getRegistryType()const;
				void setRegistryType(const std::string& registryType);
				std::string getOrigin()const;
				void setOrigin(const std::string& origin);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getSource()const;
				void setSource(const std::string& source);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getPath()const;
				void setPath(const std::string& path);
				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getServiceVersion()const;
				void setServiceVersion(const std::string& serviceVersion);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);
				std::string getMethodController()const;
				void setMethodController(const std::string& methodController);
				std::string getGroup()const;
				void setGroup(const std::string& group);

            private:
				std::string registryType_;
				std::string origin_;
				std::string ip_;
				std::string source_;
				int pageNumber_;
				std::string path_;
				std::string serviceType_;
				std::string appId_;
				std::string _namespace_;
				std::string serviceVersion_;
				int pageSize_;
				std::string name_;
				std::string serviceName_;
				std::string region_;
				std::string serviceId_;
				std::string methodController_;
				std::string group_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETSERVICEMETHODPAGEREQUEST_H_