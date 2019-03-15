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

#ifndef ALIBABACLOUD_UBSMS_MODEL_DESCRIBEBUSINESSSTATUSREQUEST_H_
#define ALIBABACLOUD_UBSMS_MODEL_DESCRIBEBUSINESSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ubsms/UbsmsExport.h>

namespace AlibabaCloud
{
	namespace Ubsms
	{
		namespace Model
		{
			class ALIBABACLOUD_UBSMS_EXPORT DescribeBusinessStatusRequest : public RpcServiceRequest
			{

			public:
				DescribeBusinessStatusRequest();
				~DescribeBusinessStatusRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);

            private:
				std::string password_;
				std::string callerBid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_UBSMS_MODEL_DESCRIBEBUSINESSSTATUSREQUEST_H_