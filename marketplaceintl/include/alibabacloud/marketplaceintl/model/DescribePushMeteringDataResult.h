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

#ifndef ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATARESULT_H_
#define ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/marketplaceintl/MarketplaceIntlExport.h>

namespace AlibabaCloud
{
	namespace MarketplaceIntl
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKETPLACEINTL_EXPORT DescribePushMeteringDataResult : public ServiceResult
			{
			public:
				struct Result
				{
					bool isPushBilling;
					std::string meteringEntity;
					long endTime;
					std::string instanceId;
					long startTime;
					std::string pushOrderBizId;
					std::string meteringAssist;
				};


				DescribePushMeteringDataResult();
				explicit DescribePushMeteringDataResult(const std::string &payload);
				~DescribePushMeteringDataResult();
				std::string getMessage()const;
				bool getForceFatal()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				bool forceFatal_;
				std::string dynamicMessage_;
				std::string code_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATARESULT_H_