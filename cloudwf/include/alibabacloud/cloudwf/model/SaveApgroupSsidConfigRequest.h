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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPGROUPSSIDCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPGROUPSSIDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveApgroupSsidConfigRequest : public RpcServiceRequest
			{

			public:
				SaveApgroupSsidConfigRequest();
				~SaveApgroupSsidConfigRequest();

				std::string getJsonData()const;
				void setJsonData(const std::string& jsonData);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string jsonData_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPGROUPSSIDCONFIGREQUEST_H_