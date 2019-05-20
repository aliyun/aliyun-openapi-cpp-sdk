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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECONDITIONSRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECONDITIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeConditionsResult : public ServiceResult
			{
			public:
				struct Condition
				{
					struct RiskLevel
					{
						bool defaulted;
						bool sensitive;
						long id;
						std::string name;
					};
					struct Rule
					{
						long id;
						std::string name;
					};
					struct Range
					{
						long id;
						std::string name;
					};
					struct EventType
					{
						long id;
						std::string code;
						std::string name;
					};
					struct Status
					{
						long id;
						std::string name;
					};
					struct DataType
					{
						long id;
						std::string name;
					};
					struct Operation
					{
						long id;
						std::string name;
					};
					struct Product
					{
						long id;
						std::string name;
					};
					struct TransferProduct
					{
						int status;
						std::string code;
					};
					struct RuleCategory
					{
						long id;
						std::string name;
					};
					std::vector<Product> productList;
					std::vector<DataType> dataTypeList;
					std::vector<TransferProduct> transferProductList;
					std::vector<Rule> ruleList;
					std::vector<Operation> operationList;
					std::vector<Status> statusList;
					std::vector<EventType> eventTypeList;
					std::vector<RiskLevel> riskLevelList;
					std::vector<Range> rangeList;
					std::vector<RuleCategory> ruleCategoryList;
				};


				DescribeConditionsResult();
				explicit DescribeConditionsResult(const std::string &payload);
				~DescribeConditionsResult();
				Condition getCondition()const;

			protected:
				void parse(const std::string &payload);
			private:
				Condition condition_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECONDITIONSRESULT_H_