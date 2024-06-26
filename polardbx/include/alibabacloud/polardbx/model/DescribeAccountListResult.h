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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACCOUNTLISTRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACCOUNTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeAccountListResult : public ServiceResult
			{
			public:
				struct Account
				{
					std::string accountDescription;
					std::string accountPrivilege;
					std::string dBName;
					std::string gmtCreated;
					std::string accountType;
					std::string dBInstanceName;
					std::string accountName;
				};


				DescribeAccountListResult();
				explicit DescribeAccountListResult(const std::string &payload);
				~DescribeAccountListResult();
				std::string getMessage()const;
				std::vector<Account> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Account> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACCOUNTLISTRESULT_H_