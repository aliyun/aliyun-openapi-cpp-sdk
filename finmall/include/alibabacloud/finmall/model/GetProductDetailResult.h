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

#ifndef ALIBABACLOUD_FINMALL_MODEL_GETPRODUCTDETAILRESULT_H_
#define ALIBABACLOUD_FINMALL_MODEL_GETPRODUCTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/finmall/FinmallExport.h>

namespace AlibabaCloud
{
	namespace Finmall
	{
		namespace Model
		{
			class ALIBABACLOUD_FINMALL_EXPORT GetProductDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string principalLimit;
					std::string comment;
					std::string productName;
					std::string terms;
					std::string productId;
					std::string yearRate;
					std::string fineAmount;
					std::string lendingOrganizations;
					std::string dailyRate;
					std::string financialInfo;
					std::string foundPartyName;
					std::string interestRate;
					std::string foundPartyId;
				};


				GetProductDetailResult();
				explicit GetProductDetailResult(const std::string &payload);
				~GetProductDetailResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FINMALL_MODEL_GETPRODUCTDETAILRESULT_H_