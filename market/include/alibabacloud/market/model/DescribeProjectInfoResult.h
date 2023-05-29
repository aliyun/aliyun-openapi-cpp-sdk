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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTINFORESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeProjectInfoResult : public ServiceResult
			{
			public:
				struct Result
				{
					std::string productName;
					std::string instanceId;
					std::string productCode;
					long gmtFinished;
					int currentStepNo;
					std::string templateType;
					long orderId;
					long gmtExpired;
					std::string projectStatus;
					long customerAliUid;
					long gmtCreate;
					int finalStepNo;
					long supplierAliUid;
					std::string finishType;
					std::string productSkuCode;
					std::string productSkuName;
					long templateId;
				};


				DescribeProjectInfoResult();
				explicit DescribeProjectInfoResult(const std::string &payload);
				~DescribeProjectInfoResult();
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPROJECTINFORESULT_H_