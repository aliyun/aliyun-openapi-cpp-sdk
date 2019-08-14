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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSRESULT_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTradeMarkApplicationsResult : public ServiceResult
			{
			public:
				struct TmProduces
				{
					struct FirstClassification
					{
						std::string classificationCode;
						std::string classificationName;
					};
					struct RenewResponse
					{
						long registerTime;
						long submitSbjtime;
						std::string address;
						std::string engName;
						std::string engAddress;
						std::string name;
					};
					struct ThirdClassifications
					{
						std::string classificationCode;
						std::string classificationName;
					};
					int status;
					long materialId;
					FirstClassification firstClassification;
					RenewResponse renewResponse;
					std::string tmNumber;
					long createTime;
					float orderPrice;
					std::string loaUrl;
					std::string tmIcon;
					std::vector<std::string> flags;
					std::string orderId;
					int supplementStatus;
					int type;
					long supplementId;
					std::string userId;
					std::string note;
					float totalPrice;
					std::string tmName;
					long updateTime;
					float servicePrice;
					std::string materialName;
					std::string bizId;
					std::vector<TmProduces::ThirdClassifications> thirdClassification;
				};


				QueryTradeMarkApplicationsResult();
				explicit QueryTradeMarkApplicationsResult(const std::string &payload);
				~QueryTradeMarkApplicationsResult();
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<TmProduces> getData()const;
				int getTotalItemNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<TmProduces> data_;
				int totalItemNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONSRESULT_H_