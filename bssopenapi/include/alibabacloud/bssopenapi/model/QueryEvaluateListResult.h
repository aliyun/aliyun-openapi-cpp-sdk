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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryEvaluateListResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Evaluate
					{
						int status;
						std::string bizTime;
						long offsetCostAmount;
						std::string gmtModified;
						std::string billCycle;
						std::string bizType;
						long presentAmount;
						long itemId;
						long originalAmount;
						std::string name;
						int type;
						std::string gmtCreate;
						long userId;
						long billId;
						long offsetAcceptAmount;
						std::string opId;
						std::string outBizId;
						std::string userNick;
						long id;
						long invoicedAmount;
						long canInvoiceAmount;
					};
					long totalInvoiceAmount;
					int totalCount;
					int pageNum;
					int pageSize;
					long totalUnAppliedInvoiceAmount;
					std::string hostId;
					std::vector<Evaluate> evaluateList;
				};


				QueryEvaluateListResult();
				explicit QueryEvaluateListResult(const std::string &payload);
				~QueryEvaluateListResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYEVALUATELISTRESULT_H_