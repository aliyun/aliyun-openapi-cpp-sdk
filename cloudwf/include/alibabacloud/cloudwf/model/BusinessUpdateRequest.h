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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_BUSINESSUPDATEREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_BUSINESSUPDATEREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT BusinessUpdateRequest : public RpcServiceRequest
			{

			public:
				BusinessUpdateRequest();
				~BusinessUpdateRequest();

				std::string getBusinessCity()const;
				void setBusinessCity(const std::string& businessCity);
				std::string getWarnEmail()const;
				void setWarnEmail(const std::string& warnEmail);
				std::string getBusinessManager()const;
				void setBusinessManager(const std::string& businessManager);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getWarn()const;
				void setWarn(int warn);
				std::string getBusinessAddress()const;
				void setBusinessAddress(const std::string& businessAddress);
				long getBid()const;
				void setBid(long bid);
				std::string getBusinessProvince()const;
				void setBusinessProvince(const std::string& businessProvince);

            private:
				std::string businessCity_;
				std::string warnEmail_;
				std::string businessManager_;
				std::string accessKeyId_;
				int warn_;
				std::string businessAddress_;
				long bid_;
				std::string businessProvince_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_BUSINESSUPDATEREQUEST_H_