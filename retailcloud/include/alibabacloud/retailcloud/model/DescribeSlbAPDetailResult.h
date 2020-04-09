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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBESLBAPDETAILRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBESLBAPDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribeSlbAPDetailResult : public ServiceResult
			{
			public:
				struct Result
				{
					int cookieTimeout;
					std::string slbId;
					int listenerPort;
					int realServerPort;
					long slbAPId;
					long envId;
					std::string networkMode;
					std::string name;
					int stickySession;
					long appId;
					std::string slbIp;
					std::string sslCertId;
					std::string protocol;
					int establishedTimeout;
				};


				DescribeSlbAPDetailResult();
				explicit DescribeSlbAPDetailResult(const std::string &payload);
				~DescribeSlbAPDetailResult();
				std::string getErrMsg()const;
				int getCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				int code_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBESLBAPDETAILRESULT_H_