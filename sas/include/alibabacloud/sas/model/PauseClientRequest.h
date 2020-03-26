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

#ifndef ALIBABACLOUD_SAS_MODEL_PAUSECLIENTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_PAUSECLIENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT PauseClientRequest : public RpcServiceRequest
			{

			public:
				PauseClientRequest();
				~PauseClientRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getValue()const;
				void setValue(const std::string& value);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string sourceIp_;
				std::string appName_;
				std::string value_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_PAUSECLIENTREQUEST_H_