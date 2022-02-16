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

#ifndef ALIBABACLOUD_EMR_MODEL_ADDAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_ADDAPPLICATIONSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT AddApplicationsRequest : public RpcServiceRequest
			{

			public:
				AddApplicationsRequest();
				~AddApplicationsRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				Array getApplications()const;
				void setApplications(const Array& applications);

            private:
				std::string clientToken_;
				std::string description_;
				std::string regionId_;
				std::string clusterId_;
				std::string systemDebug_;
				Array applications_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_ADDAPPLICATIONSREQUEST_H_