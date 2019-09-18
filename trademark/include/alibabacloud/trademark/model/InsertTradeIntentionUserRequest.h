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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_INSERTTRADEINTENTIONUSERREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_INSERTTRADEINTENTIONUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT InsertTradeIntentionUserRequest : public RpcServiceRequest
			{

			public:
				InsertTradeIntentionUserRequest();
				~InsertTradeIntentionUserRequest();

				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPartnerCode()const;
				void setPartnerCode(const std::string& partnerCode);
				std::string getClassification()const;
				void setClassification(const std::string& classification);
				int getType()const;
				void setType(int type);
				std::string getVcode()const;
				void setVcode(const std::string& vcode);
				std::string getRegisterNumber()const;
				void setRegisterNumber(const std::string& registerNumber);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string mobile_;
				std::string description_;
				std::string partnerCode_;
				std::string classification_;
				int type_;
				std::string vcode_;
				std::string registerNumber_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_INSERTTRADEINTENTIONUSERREQUEST_H_