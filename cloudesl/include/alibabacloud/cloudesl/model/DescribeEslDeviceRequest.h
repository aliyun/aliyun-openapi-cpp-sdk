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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeEslDeviceRequest : public RpcServiceRequest
			{

			public:
				DescribeEslDeviceRequest();
				~DescribeEslDeviceRequest();

				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getFromDate()const;
				void setFromDate(const std::string& fromDate);
				std::string getToDate()const;
				void setToDate(const std::string& toDate);
				long getPageSize()const;
				void setPageSize(long pageSize);

            private:
				std::string storeId_;
				long pageNumber_;
				std::string fromDate_;
				std::string toDate_;
				long pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICEREQUEST_H_