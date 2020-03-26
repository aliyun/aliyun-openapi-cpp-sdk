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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_CHECKTRADEMARKORDERREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_CHECKTRADEMARKORDERREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT CheckTrademarkOrderRequest : public RpcServiceRequest
			{

			public:
				CheckTrademarkOrderRequest();
				~CheckTrademarkOrderRequest();

				std::string getRealUserName()const;
				void setRealUserName(const std::string& realUserName);
				std::string getOrderData()const;
				void setOrderData(const std::string& orderData);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				int getType()const;
				void setType(int type);
				std::string getMaterialId()const;
				void setMaterialId(const std::string& materialId);
				long getUserId()const;
				void setUserId(long userId);
				std::string getTmComment()const;
				void setTmComment(const std::string& tmComment);
				std::string getTmNameType()const;
				void setTmNameType(const std::string& tmNameType);
				std::string getTmIcon()const;
				void setTmIcon(const std::string& tmIcon);
				std::string getUid()const;
				void setUid(const std::string& uid);
				std::string getRenewInfoId()const;
				void setRenewInfoId(const std::string& renewInfoId);
				std::string getRootCode()const;
				void setRootCode(const std::string& rootCode);
				std::string getLoaOssKey()const;
				void setLoaOssKey(const std::string& loaOssKey);
				std::string getRegisterNumber()const;
				void setRegisterNumber(const std::string& registerNumber);
				std::string getTmName()const;
				void setTmName(const std::string& tmName);
				std::string getPartnerCode()const;
				void setPartnerCode(const std::string& partnerCode);
				std::string getPhoneNum()const;
				void setPhoneNum(const std::string& phoneNum);
				std::string getRegisterName()const;
				void setRegisterName(const std::string& registerName);
				bool getIsBlackIcon()const;
				void setIsBlackIcon(bool isBlackIcon);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string realUserName_;
				std::string orderData_;
				std::string channel_;
				int type_;
				std::string materialId_;
				long userId_;
				std::string tmComment_;
				std::string tmNameType_;
				std::string tmIcon_;
				std::string uid_;
				std::string renewInfoId_;
				std::string rootCode_;
				std::string loaOssKey_;
				std::string registerNumber_;
				std::string tmName_;
				std::string partnerCode_;
				std::string phoneNum_;
				std::string registerName_;
				bool isBlackIcon_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_CHECKTRADEMARKORDERREQUEST_H_