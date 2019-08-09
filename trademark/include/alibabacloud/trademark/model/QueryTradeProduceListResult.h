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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTradeProduceListResult : public ServiceResult
			{
			public:
				struct TradeProduces
				{
					int preAmount;
					long createTime;
					int buyerStatus;
					std::string operateNote;
					int failReason;
					int finalAmount;
					std::string preOrderId;
					bool allowCancel;
					std::string registerNumber;
					std::string userId;
					std::string classification;
					long updateTime;
					std::string icon;
					std::string bizId;
				};


				QueryTradeProduceListResult();
				explicit QueryTradeProduceListResult(const std::string &payload);
				~QueryTradeProduceListResult();
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<TradeProduces> getData()const;
				int getTotalItemNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<TradeProduces> data_;
				int totalItemNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTRESULT_H_