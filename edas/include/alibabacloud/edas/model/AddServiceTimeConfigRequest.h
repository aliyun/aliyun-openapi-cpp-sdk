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

#ifndef ALIBABACLOUD_EDAS_MODEL_ADDSERVICETIMECONFIGREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_ADDSERVICETIMECONFIGREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT AddServiceTimeConfigRequest : public RoaServiceRequest
			{

			public:
				AddServiceTimeConfigRequest();
				~AddServiceTimeConfigRequest();

				std::string getPath()const;
				void setPath(const std::string& path);
				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::string getConsumerAppId()const;
				void setConsumerAppId(const std::string& consumerAppId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getServiceVersion()const;
				void setServiceVersion(const std::string& serviceVersion);
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
				std::string getConsumerAppName()const;
				void setConsumerAppName(const std::string& consumerAppName);
				std::string getTimeout()const;
				void setTimeout(const std::string& timeout);

            private:
				std::string path_;
				std::string serviceType_;
				std::string consumerAppId_;
				std::string appId_;
				std::string serviceVersion_;
				std::string _namespace_;
				std::string serviceName_;
				std::string source_;
				std::string region_;
				std::string serviceGroup_;
				std::string consumerAppName_;
				std::string timeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_ADDSERVICETIMECONFIGREQUEST_H_