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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEAPPPACKAGEREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEAPPPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT UpdateAppPackageRequest : public RpcServiceRequest
			{

			public:
				UpdateAppPackageRequest();
				~UpdateAppPackageRequest();

				bool getDebug()const;
				void setDebug(bool debug);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPackageUrl()const;
				void setPackageUrl(const std::string& packageUrl);
				long getId()const;
				void setId(long id);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				bool debug_;
				std::string platform_;
				std::string sourceIp_;
				std::string packageUrl_;
				long id_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEAPPPACKAGEREQUEST_H_