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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONDETAILRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONDETAILRESULT_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryIntentionDetailResult : public ServiceResult
			{
			public:


				QueryIntentionDetailResult();
				explicit QueryIntentionDetailResult(const std::string &payload);
				~QueryIntentionDetailResult();
				int getStatus()const;
				std::string getDescription()const;
				std::string getUserName()const;
				std::string getRelationBizId()const;
				long getCreateTime()const;
				std::string getMobile()const;
				std::string getRegisterNumber()const;
				int getType()const;
				std::string getUserId()const;
				std::string getClassification()const;
				long getUpdateTime()const;
				std::string getBizId()const;
				std::string getPartnerMobile()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				std::string description_;
				std::string userName_;
				std::string relationBizId_;
				long createTime_;
				std::string mobile_;
				std::string registerNumber_;
				int type_;
				std::string userId_;
				std::string classification_;
				long updateTime_;
				std::string bizId_;
				std::string partnerMobile_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONDETAILRESULT_H_