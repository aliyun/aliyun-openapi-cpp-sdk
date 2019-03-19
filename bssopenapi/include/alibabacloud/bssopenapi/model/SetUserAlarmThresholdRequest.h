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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERALARMTHRESHOLDREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT SetUserAlarmThresholdRequest : public RpcServiceRequest
			{

			public:
				SetUserAlarmThresholdRequest();
				~SetUserAlarmThresholdRequest();

				long getUid()const;
				void setUid(long uid);
				std::string getAlarmType()const;
				void setAlarmType(const std::string& alarmType);
				std::string getAlarmThresholds()const;
				void setAlarmThresholds(const std::string& alarmThresholds);
				std::string getBid()const;
				void setBid(const std::string& bid);

            private:
				long uid_;
				std::string alarmType_;
				std::string alarmThresholds_;
				std::string bid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_SETUSERALARMTHRESHOLDREQUEST_H_