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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_PROFILEBASEREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_PROFILEBASEREQUEST_H_

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
			class ALIBABACLOUD_CLOUDWF_EXPORT ProfileBaseRequest : public RpcServiceRequest
			{

			public:
				ProfileBaseRequest();
				~ProfileBaseRequest();

				std::string getBeginDate()const;
				void setBeginDate(const std::string& beginDate);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				int getDataType()const;
				void setDataType(int dataType);
				long getGsid()const;
				void setGsid(long gsid);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string beginDate_;
				std::string endDate_;
				int dataType_;
				long gsid_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_PROFILEBASEREQUEST_H_