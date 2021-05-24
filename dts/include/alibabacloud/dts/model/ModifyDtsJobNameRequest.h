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

#ifndef ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBNAMEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBNAMEREQUEST_H_

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
			class ALIBABACLOUD_DTS_EXPORT ModifyDtsJobNameRequest : public RpcServiceRequest
			{

			public:
				ModifyDtsJobNameRequest();
				~ModifyDtsJobNameRequest();

				std::string getDtsJobName()const;
				void setDtsJobName(const std::string& dtsJobName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDtsJobId()const;
				void setDtsJobId(const std::string& dtsJobId);

            private:
				std::string dtsJobName_;
				std::string regionId_;
				std::string dtsJobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_MODIFYDTSJOBNAMEREQUEST_H_