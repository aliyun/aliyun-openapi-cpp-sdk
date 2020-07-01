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

#ifndef ALIBABACLOUD_SAF_MODEL_EXECUTEEXTENDSERVICEREQUEST_H_
#define ALIBABACLOUD_SAF_MODEL_EXECUTEEXTENDSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/saf/SafExport.h>

namespace AlibabaCloud
{
	namespace Saf
	{
		namespace Model
		{
			class ALIBABACLOUD_SAF_EXPORT ExecuteExtendServiceRequest : public RpcServiceRequest
			{

			public:
				ExecuteExtendServiceRequest();
				~ExecuteExtendServiceRequest();

				std::string getServiceParameters()const;
				void setServiceParameters(const std::string& serviceParameters);
				std::string getService()const;
				void setService(const std::string& service);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string serviceParameters_;
				std::string service_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAF_MODEL_EXECUTEEXTENDSERVICEREQUEST_H_