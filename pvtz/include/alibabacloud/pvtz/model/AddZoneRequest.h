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

#ifndef ALIBABACLOUD_PVTZ_MODEL_ADDZONEREQUEST_H_
#define ALIBABACLOUD_PVTZ_MODEL_ADDZONEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT AddZoneRequest : public RpcServiceRequest
			{

			public:
				AddZoneRequest();
				~AddZoneRequest();

				std::string getProxyPattern()const;
				void setProxyPattern(const std::string& proxyPattern);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getZoneName()const;
				void setZoneName(const std::string& zoneName);

            private:
				std::string proxyPattern_;
				std::string resourceGroupId_;
				std::string userClientIp_;
				std::string lang_;
				std::string zoneName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_ADDZONEREQUEST_H_