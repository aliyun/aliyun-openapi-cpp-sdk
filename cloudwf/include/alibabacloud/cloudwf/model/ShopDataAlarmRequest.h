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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SHOPDATAALARMREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SHOPDATAALARMREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ShopDataAlarmRequest : public RpcServiceRequest
			{

			public:
				ShopDataAlarmRequest();
				~ShopDataAlarmRequest();

				std::string getWarnEmail()const;
				void setWarnEmail(const std::string& warnEmail);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getSid()const;
				void setSid(long sid);
				std::string getWarnPhone()const;
				void setWarnPhone(const std::string& warnPhone);
				int getWarn()const;
				void setWarn(int warn);
				int getCloseWarn()const;
				void setCloseWarn(int closeWarn);

            private:
				std::string warnEmail_;
				std::string accessKeyId_;
				long sid_;
				std::string warnPhone_;
				int warn_;
				int closeWarn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SHOPDATAALARMREQUEST_H_