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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERSREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeUsersRequest : public RpcServiceRequest
			{

			public:
				DescribeUsersRequest();
				~DescribeUsersRequest();

				std::string getUserType()const;
				void setUserType(const std::string& userType);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string userType_;
				std::string userId_;
				int pageNumber_;
				int pageSize_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERSREQUEST_H_