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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBERATERESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBERATERESULT_H_

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
			class ALIBABACLOUD_MARKET_EXPORT DescribeRateResult : public ServiceResult
			{
			public:


				DescribeRateResult();
				explicit DescribeRateResult(const std::string &payload);
				~DescribeRateResult();
				std::string getInstanceId()const;
				std::string getExplaintion()const;
				long getGmtExplaintion()const;
				std::string getProductId()const;
				long getGmtCreated()const;
				std::string getAdditionalContent()const;
				std::string getOrderId()const;
				long getGmtAdditionalExplaintion()const;
				std::string getScore()const;
				std::string getType()const;
				std::string getContent()const;
				std::string getAdditionalExplaintion()const;
				long getId()const;
				long getGmtAdditional()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceId_;
				std::string explaintion_;
				long gmtExplaintion_;
				std::string productId_;
				long gmtCreated_;
				std::string additionalContent_;
				std::string orderId_;
				long gmtAdditionalExplaintion_;
				std::string score_;
				std::string type_;
				std::string content_;
				std::string additionalExplaintion_;
				long id_;
				long gmtAdditional_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBERATERESULT_H_