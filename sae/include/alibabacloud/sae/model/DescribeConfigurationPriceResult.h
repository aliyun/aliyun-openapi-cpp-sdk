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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBECONFIGURATIONPRICERESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBECONFIGURATIONPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeConfigurationPriceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct BagUsage
					{
						float mem;
						float cpu;
					};
					struct Order
					{
						std::vector<std::string> ruleIds;
						float tradeAmount;
						float originalAmount;
						float discountAmount;
					};
					struct RequestPrice
					{
						struct Order1
						{
							float tradeAmount;
							float originalAmount;
							float discountAmount;
							std::vector<std::string> ruleIds4;
						};
						struct Rule3
						{
							long ruleDescId;
							std::string name;
						};
						Order1 order1;
						std::vector<Rule3> rules2;
					};
					struct TrafficPrice
					{
						struct Order5
						{
							std::vector<std::string> ruleIds8;
							float tradeAmount;
							float originalAmount;
							float discountAmount;
						};
						struct Rule7
						{
							float ruleDescId;
							std::string name;
						};
						Order5 order5;
						std::vector<Rule7> rules6;
					};
					struct CpuMemPrice
					{
						struct Order9
						{
							float tradeAmount;
							float originalAmount;
							float discountAmount;
							std::vector<std::string> ruleIds12;
						};
						struct Rule11
						{
							float ruleDescId;
							std::string name;
						};
						std::vector<Rule11> rules10;
						Order9 order9;
					};
					struct Rule
					{
						long ruleDescId;
						std::string name;
					};
					Order order;
					TrafficPrice trafficPrice;
					CpuMemPrice cpuMemPrice;
					BagUsage bagUsage;
					std::vector<Rule> rules;
					RequestPrice requestPrice;
				};


				DescribeConfigurationPriceResult();
				explicit DescribeConfigurationPriceResult(const std::string &payload);
				~DescribeConfigurationPriceResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBECONFIGURATIONPRICERESULT_H_