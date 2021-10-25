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

#ifndef ALIBABACLOUD_DTS_MODEL_INITDTSRDSINSTANCEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_INITDTSRDSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT InitDtsRdsInstanceRequest : public RpcServiceRequest
			{

			public:
				InitDtsRdsInstanceRequest();
				~InitDtsRdsInstanceRequest();

				std::string getEndpointInstanceId()const;
				void setEndpointInstanceId(const std::string& endpointInstanceId);
				std::string getEndpointRegion()const;
				void setEndpointRegion(const std::string& endpointRegion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEndpointCenId()const;
				void setEndpointCenId(const std::string& endpointCenId);
				std::string getEndpointInstanceType()const;
				void setEndpointInstanceType(const std::string& endpointInstanceType);
				std::string getDtsInstanceId()const;
				void setDtsInstanceId(const std::string& dtsInstanceId);

            private:
				std::string endpointInstanceId_;
				std::string endpointRegion_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string endpointCenId_;
				std::string endpointInstanceType_;
				std::string dtsInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_INITDTSRDSINSTANCEREQUEST_H_