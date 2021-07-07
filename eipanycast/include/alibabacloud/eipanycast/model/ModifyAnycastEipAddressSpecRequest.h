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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_MODIFYANYCASTEIPADDRESSSPECREQUEST_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_MODIFYANYCASTEIPADDRESSSPECREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT ModifyAnycastEipAddressSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyAnycastEipAddressSpecRequest();
				~ModifyAnycastEipAddressSpecRequest();

				std::string getBandwidth()const;
				void setBandwidth(const std::string& bandwidth);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAnycastId()const;
				void setAnycastId(const std::string& anycastId);

            private:
				std::string bandwidth_;
				std::string regionId_;
				std::string anycastId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_MODIFYANYCASTEIPADDRESSSPECREQUEST_H_