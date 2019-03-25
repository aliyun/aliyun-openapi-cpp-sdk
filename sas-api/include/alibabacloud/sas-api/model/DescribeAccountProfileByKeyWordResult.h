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

#ifndef ALIBABACLOUD_SAS_API_MODEL_DESCRIBEACCOUNTPROFILEBYKEYWORDRESULT_H_
#define ALIBABACLOUD_SAS_API_MODEL_DESCRIBEACCOUNTPROFILEBYKEYWORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>

namespace AlibabaCloud
{
	namespace Sas_api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_API_EXPORT DescribeAccountProfileByKeyWordResult : public ServiceResult
			{
			public:


				DescribeAccountProfileByKeyWordResult();
				explicit DescribeAccountProfileByKeyWordResult(const std::string &payload);
				~DescribeAccountProfileByKeyWordResult();
				std::string getPhone()const;
				std::string getIp()const;
				std::string getIpInfo()const;
				std::string getPhoneInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string phone_;
				std::string ip_;
				std::string ipInfo_;
				std::string phoneInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_API_MODEL_DESCRIBEACCOUNTPROFILEBYKEYWORDRESULT_H_