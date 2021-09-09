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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_DESCRIBEPARTNERCONFIGRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_DESCRIBEPARTNERCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT DescribePartnerConfigResult : public ServiceResult
			{
			public:


				DescribePartnerConfigResult();
				explicit DescribePartnerConfigResult(const std::string &payload);
				~DescribePartnerConfigResult();
				std::string getPartnerName()const;
				std::string getPartnerCode()const;
				std::string getContact()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string partnerName_;
				std::string partnerCode_;
				std::string contact_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_DESCRIBEPARTNERCONFIGRESULT_H_