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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT CreateIPv6TranslatorResult : public ServiceResult
			{
			public:


				CreateIPv6TranslatorResult();
				explicit CreateIPv6TranslatorResult(const std::string &payload);
				~CreateIPv6TranslatorResult();
				std::string getIpv6TranslatorId()const;
				std::string getSpec()const;
				long getOrderId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string ipv6TranslatorId_;
				std::string spec_;
				long orderId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORRESULT_H_